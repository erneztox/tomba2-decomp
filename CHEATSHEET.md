# Tomba 2 Decompilation Cheatsheet

Guía rápida de comandos e infraestructura del proyecto para que no se nos olvide cómo operarlo.

## 1. Splat (Extracción de Ensamblador)
Para volver a extraer el código ensamblador (por ejemplo, después de modificar `config/main.yaml`), debes correr el módulo de python `splat` de forma global:
```bash
python3 -m splat split config/main.yaml
```
Esto generará los archivos `INCLUDE_ASM` en `src/main/` y extraerá el `.s` base.

## 2. Compilación (`make`)
Para compilar el proyecto y construir los archivos objeto (`.o`) a partir de tus archivos C:
```bash
make
```
*(Nota: Solo compila lo que esté definido en `src/main/*.c`)*

## 3. Comprobación de Byte-matching (`asm-differ`)
Para comprobar si una función que descompilaste en C hace match exacto (byte-for-byte) con el ensamblador original, usa `make diff`. Requiere el nombre de la carpeta dentro de `src/`, el archivo sin la extensión y el símbolo de la función:
```bash
make diff DIR=main FUNC=NombreDelArchivo SYM=nombre_de_la_funcion
```
Ejemplo para `Entity_DrawChildren` en `src/main/Entity_Actions.c`:
```bash
make diff DIR=main FUNC=Entity_Actions SYM=Entity_DrawChildren
```
- `CURRENT (0)` = **100% Match** (Éxito).
- Cualquier otro número indica discrepancias.

## 4. Reporte de Progreso
Para revisar cuántas funciones llevamos descompiladas vs las que faltan (con `INCLUDE_ASM`) dentro de los archivos extraídos en `src/main/`:
```bash
python3 tools/progress.py
```
Esto actualiza `src/main/progress.md`.

Para medir el porcentaje exacto de "diff score" de las funciones descompiladas en un archivo (ej: Entity_Allocator):
```bash
python3 tools/score.py
```
Esto creará un archivo markdown (ej: `src/main/Entity_Allocator_progress.md`) listando cada función y su estado.
