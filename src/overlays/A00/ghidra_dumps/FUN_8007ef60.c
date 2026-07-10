// FUN_8007ef60

void FUN_8007ef60(uint param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined *local_48 [4];
  short local_38 [8];
  ushort local_28 [8];
  
  uVar6 = 0;
  iVar7 = 0x68;
  local_48[0] = PTR_s_OK_to_quit_game__800a2878;
  FUN_800793c4(local_48,1,local_38);
  FUN_80079374((int)local_38[0],0x50,0,local_48[0],0);
  local_48[0] = PTR_DAT_800a287c;
  local_48[1] = PTR_DAT_800a2880;
  sVar4 = FUN_800793c4(local_48,2,local_38);
  uVar5 = param_1;
  do {
    iVar2 = uVar6 * 2;
    *(int *)(local_28 + iVar2) = iVar7;
    iVar3 = uVar6 * 2;
    iVar7 = iVar7 + 0x18;
    ppuVar1 = local_48 + uVar6;
    uVar6 = uVar6 + 1;
    FUN_80079374((int)local_38[iVar3],(int)(short)local_28[iVar2],(uint)(uVar5 == 0) << 1,*ppuVar1,0
                );
    uVar5 = param_1 ^ uVar6;
  } while ((int)uVar6 < 2);
  FUN_8007e998((int)sVar4,(int)((local_28[param_1 * 2] + 4) * 0x10000) >> 0x10,0);
  return;
}

