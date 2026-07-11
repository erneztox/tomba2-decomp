// FUN_0801322c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801322c(int param_1,byte *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (param_2[2] == 0xb) {
    func_0x0010a660();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((int)*(short *)(param_1 + 0x17e) & 0x8200U) == 0) {
    iVar4 = func_0x0002300c(param_1,param_2,(int)*(short *)(param_2 + 0x80) << 1);
    if ((iVar4 != 0) &&
       (param_2[0x2b] = 1,
       (int)(uint)_DAT_1f80008c <=
       (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) + 0x5a)) {
      param_2[0x2b] = 2;
      uVar5 = (uint)_DAT_1f80009c;
      if ((DAT_1f800137 == '\0') && ((*param_2 & 2) == 0)) {
        if (param_2[2] == 0x4c) {
          uVar7 = *(ushort *)(param_1 + 0x56) & 0xfff;
          *(short *)(param_1 + 0x56) = (short)uVar7;
          if (uVar7 - 0x600 < 0x401) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          iVar4 = (int)(((uVar5 & 0xfff) - (uint)*(ushort *)(param_1 + 0x56)) * 0x100000) >> 0x10;
          if (iVar4 < 0) {
            iVar4 = -iVar4;
          }
          if (iVar4 < 0x2001) {
            _DAT_1f80018e = 0x4000;
            DAT_800bf840 = 0x4c;
            _DAT_1f800184 = param_2;
          }
        }
      }
      iVar4 = (uVar5 & 0xfff) + 0x800;
      if ((int)(uint)_DAT_1f80008c <=
          (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
        iVar6 = func_0x00083f50(iVar4);
        sVar1 = *(short *)(param_1 + 0x80);
        sVar2 = *(short *)(param_2 + 0x80);
        iVar4 = func_0x00083e80(iVar4);
        sVar3 = *(short *)(param_2 + 0x80);
        *(short *)(param_1 + 0x2e) =
             *(short *)(param_2 + 0x2e) + (short)(iVar6 * ((int)sVar1 + (int)sVar2) >> 0xc);
        *(short *)(param_1 + 0x36) =
             *(short *)(param_2 + 0x36) -
             (short)(iVar4 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
      }
    }
  }
  else {
    iVar4 = func_0x0002300c(param_1,param_2,(int)*(short *)(param_2 + 0x80));
    if (iVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

