# MAIN.EXE Refactoring Pipeline

Scripts y pasos usados para refactorizar MAIN.EXE. Reutilizables para overlays.

---

## 0. Prerrequisitos

```bash
# Estructura: cada función es un .c individual en src/main/<categoria>/
# symbol_addrs.txt: nombre = dirección
# include/tomba.h: structs con offsets documentados
```

---

## 1. Mapeo de funciones (nombres descriptivos)

**Script:** `tools/map_functions.py`

Añadir entradas al diccionario `MAPPINGS` y ejecutar:
```python
0x80066478: ("Entity_ApplyGravity", "Applies gravity: entity->velocity_y += 0x400"),
```

```bash
python3 tools/map_functions.py
```

Genera `.c` en `mapped/` y actualiza `symbol_addrs.txt`.

**Previsualización de pendientes:**
```bash
python3 tools/preview2.py 40   # muestra 40 funciones realmente sin mapear
```

---

## 2. Entity offsets → field names

Reemplaza `*(short *)(param_1 + 0x4a)` → `param_1->velocity_y`.

```python
import os, re

with open('include/tomba.h') as f: h = f.read()

# Parse Entity fields
start = h.find('typedef struct Entity {')
end = h.find('} Entity;', start)
body = h[start:end]

fields = []  # (offset, name, type_char: 'b'/'h'/'w')
for line in body.split('\n'):
    m = re.search(r'/\*\s*(0x[0-9a-fA-F]+)\s*\*/', line)
    if not m: continue
    off = int(m.group(1), 16)
    nm = re.search(r'(\w+)\s*;', line)
    nm2 = re.search(r'(\w+)\s*\[', line)
    name = nm.group(1) if nm else (nm2.group(1) if nm2 else None)
    if not name or name.startswith('_pad'): continue
    if 's32' in line or 'void*' in line or 'Entity*' in line or 'u8*' in line: t = 'w'
    elif 's16' in line or 'u16' in line: t = 'h'
    elif 'u8' in line or 's8' in line: t = 'b'
    else: continue
    fields.append((off, name, t))

# Replace in all .c files
for root, dirs, files in os.walk('src/main'):
    if 'ghidra_dumps' in root or 'mapped' in root: continue
    for fname in files:
        if not fname.endswith('.c'): continue
        path = os.path.join(root, fname)
        with open(path) as f: content = f.read()
        orig = content
        
        for off, name, t in sorted(fields, key=lambda x: -x[0]):
            for hs in [f'0x{off:x}', f'0x{off:X}']:
                if t == 'h':
                    content = re.sub(
                        rf'\(\s*(?:s16|u16|short|ushort|undefined2)\s*\*\s*\)\s*\(\s*(\w+)\s*\+\s*{hs}\s*\)',
                        rf'\1->{name}', content)
                elif t == 'w':
                    content = re.sub(
                        rf'\(\s*(?:s32|u32|int|uint|undefined4|code)\s*\*?\s*\*\s*\)\s*\(\s*(\w+)\s*\+\s*{hs}\s*\)',
                        rf'\1->{name}', content)
                elif t == 'b':
                    content = re.sub(
                        rf'\(\s*(?:u8|s8|byte|char|undefined1)\s*\*\s*\)\s*\(\s*(\w+)\s*\+\s*{hs}\s*\)',
                        rf'\1->{name}', content)
                    content = re.sub(rf'(\w+)\s*\[\s*{hs}\s*\]', rf'\1->{name}', content)
            # Decimal for offsets < 16
            if off < 16 and t == 'b':
                content = re.sub(
                    rf'\(\s*(?:u8|s8|byte|char|undefined1)\s*\*\s*\)\s*\(\s*(\w+)\s*\+\s*{off}\s*\)',
                    rf'\1->{name}', content)
                content = re.sub(rf'(\w+)\s*\[\s*{off}\s*\]', rf'\1->{name}', content)
        
        if content != orig:
            content = re.sub(r'\*\s*(\w+->\w+)', r'\1', content)  # strip redundant *
            with open(path, 'w') as f: f.write(content)
```

---

## 3. Añadir `#include "tomba.h"`

```python
import os

for root, dirs, files in os.walk('src/main'):
    if 'ghidra_dumps' in root or 'mapped' in root: continue
    for fname in files:
        if not fname.endswith('.c'): continue
        path = os.path.join(root, fname)
        with open(path) as f: content = f.read()
        
        if '#include' in content and 'tomba.h' in content: continue
        if '->' not in content: continue  # solo si usa campos
        
        lines = content.split('\n')
        # Insertar después del bloque de comentarios header
        insert_at = 0
        for i, line in enumerate(lines):
            if line.strip() == '*/':
                insert_at = i + 1
            elif insert_at > 0 and line.strip() and not line.strip().startswith('//'):
                break
        
        lines.insert(insert_at, '#include "tomba.h"')
        with open(path, 'w') as f: f.write('\n'.join(lines))
```

---

## 4. Globales con nombre (DAT_ → g_)

```python
GLOBALS = {
    'DAT_800bf870': 'g_GameState',
    'DAT_800ecf54': 'g_InputState',
    'DAT_1f800214': 'g_PlayerEntity',
    # ... añadir más según se descubran
}

for root, dirs, files in os.walk('src/main'):
    for fname in files:
        if not fname.endswith('.c'): continue
        path = os.path.join(root, fname)
        with open(path) as f: content = f.read()
        orig = content
        for old, new in sorted(GLOBALS.items(), key=lambda x: -len(x[0])):
            content = content.replace(old, new)
        if content != orig:
            with open(path, 'w') as f: f.write(content)
```

---

## 5. Tipos Ghidra → PsyQ

```python
TYPES = {
    'undefined1': 'u8', 'undefined2': 's16', 'undefined4': 's32',
    'undefined': 'void', 'ushort': 'u16', 'byte': 'u8', 'bool': 's32',
}

for root, dirs, files in os.walk('src/main'):
    for fname in files:
        if not fname.endswith('.c'): continue
        path = os.path.join(root, fname)
        with open(path) as f: content = f.read()
        orig = content
        for old, new in sorted(TYPES.items(), key=lambda x: -len(x[0])):
            content = re.sub(r'\b' + re.escape(old) + r'\b', new, content)
        if content != orig:
            with open(path, 'w') as f: f.write(content)
```

---

## 6. Renombrar definiciones de función (FUN_ → nombre descriptivo)

```python
import os, re

with open('symbol_addrs.txt') as f: syms = f.read()
addr_to_name = {}
for m in re.finditer(r'(\w+)\s*=\s*(0x[0-9a-fA-F]+)', syms):
    addr_to_name[int(m.group(2), 16)] = m.group(1)

for root, dirs, files in os.walk('src/main'):
    for fname in files:
        if not fname.endswith('.c'): continue
        path = os.path.join(root, fname)
        with open(path) as f: content = f.read()
        orig = content
        for m in re.finditer(r'FUN_([0-9a-fA-F]{6,8})', content):
            addr = int(m.group(1), 16)
            if addr in addr_to_name:
                content = content.replace(m.group(0), addr_to_name[addr])
        if content != orig:
            with open(path, 'w') as f: f.write(content)
```

---

## 7. Llamadas a overlay (func_0x801 → Overlay_801)

```python
for root, dirs, files in os.walk('src/main'):
    for fname in files:
        if not fname.endswith('.c'): continue
        path = os.path.join(root, fname)
        with open(path) as f: content = f.read()
        if 'func_0x801' in content:
            content = re.sub(r'func_0x(801[0-9a-fA-F]{4})', r'Overlay_\1', content)
            if '#include "overlay.h"' not in content:
                content = content.replace('#include "tomba.h"', 
                    '#include "tomba.h"\n#include "overlay.h"')
            with open(path, 'w') as f: f.write(content)
```

---

## 8. Verificación final

```bash
# Quedan FUN_ sin mapear?
grep -rl "FUN_" src/main/ --include="*.c" | wc -l

# Quedan offsets crudos?
grep -rl "param_1 + 0x" src/main/ --include="*.c" | wc -l

# Quedan DAT_ sin nombre?
grep -rl "DAT_80" src/main/ --include="*.c" | wc -l
```

---

## Orden recomendado para overlays

1. Dump de funciones (ghidra_dumps/)
2. `preview2.py` para ver pendientes
3. Añadir a `MAPPINGS` dict en `map_functions.py` → ejecutar
4. Parsear structs del overlay (si tiene structs propios)
5. Ejecutar pasos 2-7 de este documento
6. Verificación con paso 8
