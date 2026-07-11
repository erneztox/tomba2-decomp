// FUN_080181e8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080181e8(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (5 < *(byte *)(param_1 + 3)) {
    _DAT_1f800268 = 2;
    func_0x00041768(param_1,_DAT_8011f178,4);
    return;
  }
  iVar9 = (int)_DAT_1f800160;
  sVar1 = *(short *)(param_1 + 0x2e);
  iVar8 = (int)_DAT_1f800162;
  sVar2 = *(short *)(param_1 + 0x32);
  iVar7 = (int)_DAT_1f800164;
  sVar3 = *(short *)(param_1 + 0x36);
  iVar4 = func_0x00083f50(-(int)*(short *)(param_1 + 0x56));
  iVar5 = func_0x00083e80(-(int)*(short *)(param_1 + 0x56));
  uVar6 = func_0x00085690(iVar8 - sVar2,iVar4 * (iVar9 - sVar1) + iVar5 * (iVar7 - sVar3) >> 0xc);
  if ((uVar6 & 0xfff) - 0xb80 < 0x101) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_1f800268 = (ushort)((uVar6 & 0xfff) - 0xc81 < 0x280) << 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

