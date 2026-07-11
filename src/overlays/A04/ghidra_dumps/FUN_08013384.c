// FUN_08013384

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013384(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  bVar4 = false;
  if (((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) && (*param_1 < 4)) {
    if ((*(byte *)(param_2 + 3) & 0x80) == 0) {
      iVar5 = func_0x0010be1c(param_1,param_2,*(undefined4 *)(param_2 + 0xcc),1);
      if (iVar5 < 0) {
        iVar5 = func_0x00022f04(param_1,param_2);
        bVar4 = true;
        if (iVar5 == 0) {
          return;
        }
      }
      if ((*param_1 & 2) == 0) {
        if ((bVar4) || (*(short *)(param_2 + 0x7e) == 0)) {
          param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
          if ((*param_1 & 4) == 0) {
            iVar5 = func_0x00083f50(_DAT_1f80009c);
            sVar1 = *(short *)(param_1 + 0x80);
            sVar2 = *(short *)(param_2 + 0x80);
            iVar6 = func_0x00083e80(_DAT_1f80009c);
            sVar3 = *(short *)(param_2 + 0x80);
            *(short *)(param_1 + 0x2e) =
                 *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
            *(short *)(param_1 + 0x36) =
                 *(short *)(param_2 + 0x36) -
                 (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
          }
          func_0x00022d08(param_1,param_2,1,0);
        }
        else if (DAT_1f800137 == '\0') {
          DAT_800bf81e = 0;
          *param_1 = 6;
          param_1[5] = 0x18;
          param_1[6] = 4;
          *(undefined1 *)(param_2 + 0x2b) = 3;
          *(byte **)(param_2 + 0x10) = param_1;
          DAT_1f800182 = 0;
          halt_baddata();
        }
      }
      else {
        iVar5 = func_0x00022f04(param_1,param_2);
        if ((iVar5 != 0) && ((*param_1 & 4) == 0)) {
          iVar5 = func_0x00083f50(_DAT_1f80009c);
          sVar1 = *(short *)(param_1 + 0x80);
          sVar2 = *(short *)(param_2 + 0x80);
          iVar6 = func_0x00083e80(_DAT_1f80009c);
          sVar3 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) =
               *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
          *(short *)(param_1 + 0x36) =
               *(short *)(param_2 + 0x36) -
               (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    else {
      iVar5 = func_0x0001f830();
      if (iVar5 != 0) {
        param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}

