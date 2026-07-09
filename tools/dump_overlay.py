# Ejecutar en Ghidra: Window -> Python -> pegar este script
# Dumpea todas las funciones de A00.BIN a archivos individuales

import os

out_dir = "/home/ernesto/Desktop/codes/revert-tomba2/src/overlays/aa0/ghidra_dumps"
os.makedirs(out_dir, exist_ok=True)

# Importar nombres desde symbol_addrs.txt
symfile = "/home/ernesto/Desktop/codes/revert-tomba2/symbol_addrs.txt"
af = currentProgram.getAddressFactory()
st = currentProgram.getSymbolTable()

print("Importando symbol_addrs.txt...")
with open(symfile) as f:
    for line in f:
        line = line.strip()
        if not line or line.startswith("#"):
            continue
        parts = line.replace(";","").split("=")
        if len(parts) != 2:
            continue
        name = parts[0].strip()
        addr_str = parts[1].strip()
        try:
            addr = af.getAddress(addr_str)
            st.createLabel(addr, name, None)
            print("  {} -> {}".format(addr_str, name))
        except:
            pass

print("Importado. Ahora dumpeando funciones...")

from ghidra.app.decompiler import DecompInterface
from ghidra.program.model.listing import Function

decomp = DecompInterface()
decomp.openProgram(currentProgram)
fm = currentProgram.getFunctionManager()

count = 0
for func in fm.getFunctions(True):
    name = func.getName()
    if not name.startswith("FUN_"):
        continue

    result = decomp.decompileFunction(func, 60, None)
    if result is None or not result.decompileCompleted():
        continue

    out_file = os.path.join(out_dir, name + ".c")
    with open(out_file, "w") as f:
        f.write("// {}\n".format(func.getEntryPoint()))
        f.write(result.getDecompiledFunction().getC())

    count += 1
    if count % 100 == 0:
        print("  {} funciones dumpeadas...".format(count))

print("Completado: {} funciones en {}".format(count, out_dir))
