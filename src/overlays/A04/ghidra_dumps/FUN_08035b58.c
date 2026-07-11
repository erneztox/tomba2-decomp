// FUN_08035b58

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08035b58(int param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 7) == '\0') {
    if (param_2 <= *(short *)(param_1 + 0x44)) {
      *(short *)(param_1 + 0x44) = param_2;
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 7) != '\x01') {
    halt_baddata();
  }
  func_0x00049760(param_1);
  *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
  *(int *)(param_1 + 0x30) =
       *(int *)(param_1 + 0x30) + (int)*(short *)(param_1 + 0x4a) * (int)*(short *)(param_1 + 0x44);
  func_0x0004954c(param_1,(int)*(short *)(param_1 + 100),0);
  if (*(short *)(param_1 + 0x4a) < 1) {
    if ((*(byte *)(param_1 + 0x29) & 0x80) != 0) {
      return 1;
    }
    iVar1 = func_0x000493e8(param_1,0,(int)-*(short *)(param_1 + 0x66));
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
      return 1;
    }
    iVar1 = func_0x00049250(param_1,0,(int)*(short *)(param_1 + 0x66));
    if (iVar1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar1 = (uint)*(ushort *)(param_1 + 0x40) -
          ((int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x18);
  *(short *)(param_1 + 0x40) = (short)iVar1;
  uVar2 = 2;
  if (-1 < iVar1 * 0x10000) {
    uVar2 = 0;
  }
  return uVar2;
}

