// DumpAllFunctions.java
// Ghidra post-script: dumps all functions from current program to files
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import java.io.*;

public class DumpAllFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String name = currentProgram.getName().replace(".BIN", "");
        String outDir = "/home/ernesto/Desktop/codes/revert-tomba2/src/overlays/" + name + "/ghidra_dumps";
        new File(outDir).mkdirs();

        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        int count = 0;
        for (Function func : currentProgram.getFunctionManager().getFunctions(true)) {
            String fname = func.getName();
            if (!fname.startsWith("FUN_") && !fname.startsWith("thunk_")) continue;

            DecompileResults result = decomp.decompileFunction(func, 30, monitor);
            if (result != null && result.decompileCompleted()) {
                String code = result.getDecompiledFunction().getC();
                PrintWriter w = new PrintWriter(new FileWriter(outDir + "/" + fname + ".c"));
                w.println("// " + fname);
                w.println("// Address: " + func.getEntryPoint());
                w.println(code);
                w.close();
                count++;
            }
        }
        decomp.dispose();
        println("Dumped " + count + " functions to " + outDir);
    }
}
