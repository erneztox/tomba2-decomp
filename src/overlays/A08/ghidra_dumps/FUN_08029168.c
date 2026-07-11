// FUN_08029168

/* WARNING: Control flow encountered bad instruction data */

bool FUN_08029168(int param_1)

{
  short sVar1;
  
  *(undefined2 *)(param_1 + 0x42) = 0x1e;
  sVar1 = *(short *)(param_1 + 0x32) + 8;
  if (*(short *)(param_1 + 0x32) == -0xec0) {
    *(undefined1 *)(param_1 + 0x5e) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x32) = sVar1;
  if (-0xec1 < sVar1) {
    *(undefined2 *)(param_1 + 0x32) = 0xf140;
    *(undefined1 *)(param_1 + 0x5e) = 1;
    func_0x00074590(0x1a,0xfffffff8,0);
  }
  return -0xec1 < sVar1;
}

