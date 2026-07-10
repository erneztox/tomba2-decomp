// FUN_00000840

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000840(int param_1,byte *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = func_0x0002300c(param_1,param_2,*(short *)(param_2 + 0x80) + 0x96);
  if (iVar4 == 0) {
    return;
  }
  if ((((int)*(short *)(param_1 + 0x17e) & 0x8000U) == 0) && (DAT_1f800137 == '\0')) {
    if ((*param_2 & 2) != 0) goto LAB_00000914;
    iVar4 = (int)(((_DAT_1f80009c & 0xfff) - (uint)*(ushort *)(param_1 + 0x56)) * 0x100000) >> 0x10;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 < 0x2001) {
      _DAT_1f80018e = 0x1400;
      DAT_800bf840 = 0x4b;
      _DAT_1f800184 = param_2;
    }
  }
  if ((*param_2 & 2) == 0) {
    iVar4 = (_DAT_1f80009c & 0xfff) + 0x800;
    if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) < (int)(uint)_DAT_1f80008c
       ) {
      return;
    }
    iVar5 = func_0x00083f50(iVar4);
    sVar1 = *(short *)(param_1 + 0x80);
    sVar2 = *(short *)(param_2 + 0x80);
    iVar4 = func_0x00083e80(iVar4);
    sVar3 = *(short *)(param_2 + 0x80);
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
    *(short *)(param_1 + 0x36) =
         *(short *)(param_2 + 0x36) -
         (short)(iVar4 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
    return;
  }
LAB_00000914:
  if ((int)*(short *)(param_2 + 0x80) < (int)(uint)_DAT_1f80008c) {
    return;
  }
  param_2[0x29] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

