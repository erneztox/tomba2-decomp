// FUN_08022a50

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08022a50(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(short *)(param_1 + 0x7c) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 3) != '\0') {
    iVar3 = ((int)*(short *)(param_1 + 0x70) % 5) * 0x10000 >> 7;
    if (param_2 == -1) {
      func_0x0011632c(param_1,(iVar3 + -0x400) * 0x10000 >> 0x10,(int)*(short *)(param_1 + 0x7a));
    }
    else {
      iVar3 = ((int)(iVar3 + 0x100U & 0xfff) >> 9) + param_2 * 5;
      if (*(short *)(param_1 + 0x70) == iVar3) {
        return 0;
      }
      *(short *)(param_1 + 0x70) = (short)iVar3;
      func_0x00077cfc(param_1,0x80141e14,*(undefined1 *)((iVar3 * 0x10000 >> 0x10) + -0x7fec1e30),8)
      ;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38) = 0x1000;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3a) = 0x1000;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3c) = 0x1000;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = (int)(((uint)_DAT_800e7eae - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
  iVar4 = (int)(((uint)_DAT_800e7eb6 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10;
  uVar5 = (uint)_DAT_800e7eb2;
  uVar1 = *(ushort *)(param_1 + 0x32);
  sVar2 = func_0x00084080(iVar3 * iVar3 + iVar4 * iVar4);
  func_0x00085690((int)((uVar5 - uVar1) * 0x10000) >> 0x10,(int)sVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

