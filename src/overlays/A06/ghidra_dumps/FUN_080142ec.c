// FUN_080142ec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080142ec(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = (int)(((uint)*(ushort *)(param_1 + 0x14c) - (uint)*(ushort *)(param_3 + 0x2c)) * 0x10000)
          >> 0x10;
  iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x150) - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar3 = func_0x00084080(iVar1 * iVar1 + iVar2 * iVar2);
  uVar4 = 0;
  if ((int)(uVar3 & 0xffff) <= *(short *)(param_2 + 0x80) + _DAT_1f800088) {
    uVar4 = 0;
    if ((int)((uint)*(ushort *)(param_1 + 0x68) +
              ((uint)*(ushort *)(param_1 + 0x14e) - (uint)*(ushort *)(param_3 + 0x30)) + 100 &
             0xffff) <= (short)*(ushort *)(param_1 + 0x68) + 200) {
      iVar1 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
      if (0x50 < (iVar1 + 0x3cU & 0xffff)) {
        if (iVar1 * 0x10000 < 0) {
          *(undefined2 *)(param_1 + 0x156) = 0xffc4;
        }
        else {
          *(undefined2 *)(param_1 + 0x156) = 0x14;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0x156) = (short)iVar1;
      uVar4 = 1;
      DAT_1f800182 = 0;
      _DAT_1f800084 = param_3;
      *(short *)(param_1 + 0x152) = *(short *)(param_2 + 0x80) + 0x1e;
    }
  }
  return uVar4;
}

