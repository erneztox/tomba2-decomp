// FUN_0801a548

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801a548(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x160) = 1;
  if ((param_3 == 0) && (*(byte *)(param_1 + 7) < 7)) {
                    /* WARNING: Could not emulate address calculation at 0x0801a594 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef67d4))();
    return;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(char *)(param_2 + 2) == '<') {
    if (*(int *)(param_1 + 0x158) != 0) {
      if ((*(char *)(param_1 + 0x177) == '\0') && (*(char *)(param_1 + 0x147) == '\0')) {
        *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(iVar3 + 0xc);
        _DAT_1f8000c8 = *(undefined2 *)(param_1 + 0x152);
        _DAT_1f8000ca = *(undefined2 *)(param_1 + 0x156);
        _DAT_1f8000cc = 0;
        _DAT_1f8000c0 = 0;
        _DAT_1f8000c2 = *(undefined2 *)(param_1 + 0x14e);
        _DAT_1f8000c4 = 0;
        func_0x00085480(&DAT_1f8000c0,0x1f800000);
        func_0x00084110(iVar3 + 0x18,0x1f800000,&DAT_1f800040);
        func_0x00084470(&DAT_1f800040,&DAT_1f8000c8,&DAT_1f800054);
        *(short *)(param_1 + 0x2e) = *(short *)(iVar3 + 0x2c) + _DAT_1f800054;
        *(short *)(param_1 + 0x32) = *(short *)(iVar3 + 0x30) + _DAT_1f800058;
        *(short *)(param_1 + 0x36) = *(short *)(iVar3 + 0x34) + _DAT_1f80005c;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(int *)(param_1 + 0x158) != 0) {
      iVar2 = (int)((*(ushort *)(param_1 + 0x56) + 0x800) * 0x10000) >> 0x10;
      iVar1 = func_0x00083f50(iVar2);
      *(short *)(param_1 + 0x2e) =
           *(short *)(iVar3 + 0x2c) + (short)(iVar1 * *(short *)(param_1 + 0x152) >> 0xc);
      iVar1 = func_0x00083e80(iVar2);
      *(short *)(param_1 + 0x36) =
           *(short *)(iVar3 + 0x34) - (short)(iVar1 * *(short *)(param_1 + 0x152) >> 0xc);
    }
    *(short *)(param_1 + 0x32) = *(short *)(iVar3 + 0x30) + *(short *)(param_1 + 0x156);
  }
  return;
}

