// FUN_08039408

/* WARNING: Control flow encountered bad instruction data */

void FUN_08039408(int param_1)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = func_0x0012e87c(param_1,1);
  if (sVar1 != 0) {
    func_0x0012f41c(param_1,0,0);
    *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 6) == '\0') {
    func_0x0012f298(param_1);
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    if (((*(char *)(param_1 + 1) != '\0') && (*(short *)(param_1 + 0x42) != 0)) &&
       (*(short *)(*(int *)(param_1 + 0x38) + 4) == 1)) {
      uVar2 = (ushort)DAT_1f800207;
      *(undefined2 *)(param_1 + 0x42) = 0;
      if ((*(short *)(param_1 + 0x74) <= (short)uVar2) &&
         ((short)uVar2 <= *(short *)(param_1 + 0x76))) {
        func_0x00074590(0x90,0,0);
      }
    }
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if (sVar1 == 1) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

