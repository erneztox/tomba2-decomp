/**
 * @brief CD SPU reader: reads SPU RAM via DAT_800ac604+0x1AE
 * @note Original: func_80096E70 at 0x80096E70
 */
// CD_SPU_Read



void FUN_80096e70(undefined2 *param_1,uint param_2)

{
  ushort *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  
  puVar1 = (ushort *)(DAT_800ac604 + 0x1ae);
  *(undefined2 *)(DAT_800ac604 + 0x1a6) = DAT_800ac61c;
  uVar7 = *puVar1 & 0x7ff;
  FUN_800976c8();
  iVar3 = DAT_800ac604;
  do {
    DAT_800ac604 = iVar3;
    if (param_2 == 0) {
      *(ushort *)(iVar3 + 0x1aa) = *(ushort *)(iVar3 + 0x1aa) & 0xffcf;
      if ((*(ushort *)(iVar3 + 0x1ae) & 0x7ff) != uVar7) {
        uVar6 = 1;
        do {
          if (0xf00 < uVar6) {
            FUN_8009a730(s_SPU_T_O___s__8001c670,s_wait__dmaf_clear_W__8001c6a4);
            return;
          }
          uVar6 = uVar6 + 1;
        } while ((*(ushort *)(DAT_800ac604 + 0x1ae) & 0x7ff) != uVar7);
      }
      return;
    }
    uVar6 = 0x40;
    if (param_2 < 0x41) {
      uVar6 = param_2;
    }
    iVar4 = 0;
    if (0 < (int)uVar6) {
      do {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        iVar4 = iVar4 + 2;
        *(undefined2 *)(iVar3 + 0x1a8) = uVar2;
      } while (iVar4 < (int)uVar6);
    }
    *(ushort *)(DAT_800ac604 + 0x1aa) = *(ushort *)(DAT_800ac604 + 0x1aa) & 0xffcf | 0x10;
    FUN_800976c8();
    if ((*(ushort *)(DAT_800ac604 + 0x1ae) & 0x400) != 0) {
      uVar5 = 1;
      do {
        if (0xf00 < uVar5) {
          FUN_8009a730(s_SPU_T_O___s__8001c670,s_wait__wrdy_H__>_L__8001c690);
          break;
        }
        uVar5 = uVar5 + 1;
      } while ((*(ushort *)(DAT_800ac604 + 0x1ae) & 0x400) != 0);
    }
    param_2 = param_2 - uVar6;
    FUN_800976c8();
    FUN_800976c8();
    iVar3 = DAT_800ac604;
  } while( true );
}
