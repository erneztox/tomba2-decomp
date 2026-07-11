/**
 * @brief Entity AI behavior: checks target, moves toward player
 * @note Original: func_80020364 at 0x80020364
 */
// Entity_Behavior_AI



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_80020364(byte *param_1,byte *param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  if (((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) &&
     (iVar4 = FUN_8001f40c(param_1,param_2,1), -1 < iVar4)) {
    if ((param_1[0x144] == 1) && (iVar4 < 2)) {
      if (((int)*(short *)(param_1 + 0x17e) & 0x8000U) == 0) {
        FUN_8001fdb4(param_2,1,0x10,0x20);
      }
      else if ((param_3 & 3) != 0) {
        FUN_8001f054(param_1,param_2);
        return 1;
      }
      bVar3 = 1;
    }
    else {
      if ((param_3 & 0x3f) != 0) {
        iVar4 = FUN_80083f50(_DAT_1f80009c);
        sVar1 = *(short *)(param_1 + 0x80);
        sVar2 = *(short *)(param_2 + 0x80);
        iVar5 = FUN_80083e80(_DAT_1f80009c);
        sVar1 = (short)(iVar4 * ((int)sVar1 + (int)sVar2) >> 0xc);
        sVar2 = (short)(iVar5 * ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80))
                       >> 0xc);
        if ((param_3 & 0x7f) == 1) {
          *(short *)(param_2 + 0x2e) = *(short *)(param_1 + 0x2e) - sVar1;
          *(short *)(param_2 + 0x36) = *(short *)(param_1 + 0x36) + sVar2;
        }
        else if ((*param_1 & 4) == 0) {
          *(short *)(param_1 + 0x2e) = *(short *)(param_2 + 0x2e) + sVar1;
          *(short *)(param_1 + 0x36) = *(short *)(param_2 + 0x36) - sVar2;
        }
      }
      bVar6 = (byte)(_DAT_1f80009c >> 4);
      if ((param_3 & 0x40) == 0) {
        if ((param_3 & 0x80) != 0) {
          if (DAT_1f80027a != '\0') {
            return 2;
          }
          if (param_1[4] != 1) {
            return 2;
          }
          if (param_1[5] != 0x13) {
            param_1[5] = 0x13;
            param_1[6] = 0;
            param_1[7] = 0;
            param_1[0x2b] = bVar6;
            return 3;
          }
        }
        bVar3 = 2;
      }
      else {
        bVar3 = DAT_1f800137;
        if (((DAT_1f800137 == 0) && (bVar3 = *param_1 & 6, (*param_1 & 6) == 0)) &&
           (bVar3 = *param_2 & 2, (*param_2 & 2) == 0)) {
          bVar3 = 4;
          param_1[4] = 2;
          param_1[5] = 2;
          *param_1 = 3;
          param_1[6] = 0;
          param_1[0x172] = 0x78;
          param_1[0x173] = 0;
          param_1[0x2b] = bVar6;
        }
      }
    }
  }
  else {
    bVar3 = 0;
  }
  return bVar3;
}
