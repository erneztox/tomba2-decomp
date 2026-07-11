/**
 * @brief GPU sprite list builder: constructs linked sprite prims
 * @note Original: func_8007EAE4 at 0x8007EAE4
 */
// GPU_SpriteList



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007eae4(void)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  undefined1 local_68;
  undefined1 local_67;
  undefined2 local_66;
  short local_60;
  undefined2 local_5e;
  short local_5c;
  undefined2 local_5a;
  undefined *local_58 [4];
  short local_48 [8];
  ushort local_38 [8];
  
  uVar4 = 0;
  iVar5 = 0x58;
  local_58[0] = PTR_s_Options_800a2854;
  local_58[1] = PTR_s_Load_data_800a2858;
  local_58[2] = PTR_s_Quit_game_800a285c;
  sVar2 = FUN_800793c4(local_58,3,local_48);
  do {
    *(int *)(local_38 + uVar4 * 2) = iVar5;
    iVar5 = iVar5 + 0x10;
    FUN_80079374((int)local_48[uVar4 * 2],(int)(short)local_38[uVar4 * 2],
                 (uint)(DAT_800bf808 == uVar4) << 1,local_58[uVar4],0);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 3);
  iVar5 = 0;
  sVar7 = sVar2 + -0xe;
  sVar6 = 0x148 - sVar2;
  sVar1 = sVar2 * -2 + 0x146;
  FUN_8007e998((int)sVar2,(int)((local_38[(uint)DAT_800bf808 * 2] + 4) * 0x10000) >> 0x10,1);
  local_67 = 1;
  local_68 = 0;
  local_66 = 0x8000;
  do {
    if (iVar5 == 0) {
      local_5e = 0x5c;
      local_60 = sVar7;
LAB_8007ec40:
      local_5c = 0;
      local_5a = 0;
    }
    else {
      if (iVar5 == 1) {
        local_5e = 0x84;
        local_60 = sVar7;
        goto LAB_8007ec40;
      }
      if (iVar5 == 2) {
        local_5e = 0x5c;
        local_60 = sVar6;
        goto LAB_8007ec40;
      }
      if (iVar5 == 3) {
        local_5e = 0x84;
        local_60 = sVar6;
        goto LAB_8007ec40;
      }
      if (iVar5 == 4) {
        local_5e = 0x67;
        local_5a = 0x18;
        local_5c = 0;
        local_60 = sVar7;
      }
      else if (iVar5 == 5) {
        local_5e = 0x67;
        local_5a = 0x18;
        local_5c = 0;
        local_60 = sVar6;
      }
      else {
        if (iVar5 == 6) {
          local_5e = 0x51;
        }
        else {
          if (iVar5 != 7) {
            if (iVar5 == 8) {
              local_5e = 0x54;
              local_5a = 0x40;
              local_60 = sVar2 + -4;
              local_5c = sVar1;
            }
            goto LAB_8007ece4;
          }
          local_5e = 0x8f;
        }
        local_5a = 0;
        local_60 = sVar2 + -4;
        local_5c = sVar1;
      }
    }
LAB_8007ece4:
    psVar3 = &DAT_800a58e8 + iVar5;
    iVar5 = iVar5 + 1;
    FUN_8007e1b8(&local_60,(&PTR_DAT_80017334)[*psVar3],_DAT_800ecf58,&local_68);
    if (8 < iVar5) {
      return;
    }
  } while( true );
}
