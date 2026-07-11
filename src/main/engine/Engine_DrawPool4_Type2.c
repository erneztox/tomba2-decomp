/**
 * @brief Draws Pool 4 entity using FUN_8007e6dc
 * @note Original: func_80025934 at 0x80025934
 */
// Engine_DrawPool4_Type2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80025934(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined *puVar4;
  short sVar5;
  short sVar6;
  byte local_38;
  undefined1 local_37;
  undefined2 local_36;
  short local_30;
  short local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  if (param_2 == 0) {
    sVar6 = 0;
    sVar5 = 0;
    local_37 = 0;
  }
  else {
    sVar5 = 0x10;
    sVar6 = 0x28;
    local_37 = param_3;
  }
  local_36 = 0;
  local_2c = 0;
  local_2a = 0;
  puVar4 = (&PTR_DAT_8009d30c)[*(byte *)(param_1 + 10)];
  iVar3 = 0;
  if (0 < (short)_DAT_800e7fee) {
    iVar1 = 0;
    do {
      pbVar2 = puVar4 + iVar1;
      local_38 = pbVar2->sub_type;
      local_30 = (ushort)pbVar2->flags + sVar5;
      local_2e = (ushort)pbVar2->kind + sVar6;
      FUN_8007e1b8(&local_30,(&PTR_DAT_80017334)[*pbVar2],param_1->sprite_data,&local_38)
      ;
      iVar3 = iVar3 + 1;
      iVar1 = iVar3 * 4;
    } while (iVar3 < (short)_DAT_800e7fee);
  }
  iVar3 = (int)(short)_DAT_800e7fee;
  if (iVar3 < (int)(uint)DAT_800bf87d) {
    do {
      pbVar2 = puVar4 + iVar3 * 4;
      local_38 = pbVar2->sub_type;
      local_30 = (ushort)pbVar2->flags + sVar5;
      local_2e = (ushort)pbVar2->kind + sVar6;
      FUN_8007e1b8(&local_30,(&PTR_DAT_80017334)[*pbVar2 + 1],param_1->sprite_data,
                   &local_38);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)DAT_800bf87d);
  }
  iVar3 = 0;
  local_30 = sVar5 + 0x20;
  local_2e = sVar6 + 0x20;
  local_38 = 0;
  local_36 = 0;
  local_2c = 0;
  local_2a = 0;
  FUN_8007e6dc(&local_30,
               *(undefined4 *)
                ((int)&PTR_DAT_80017334 + ((int)((_DAT_800e7fee + 0x11) * 0x10000) >> 0xe)),
               param_1->sprite_data,&local_38);
  local_36 = 0x8000;
  do {
    iVar1 = 4 - iVar3;
    iVar3 = iVar3 + 1;
    FUN_8007e1b8(&local_30,*(undefined4 *)((int)&PTR_DAT_80017334 + (iVar1 * 0x10000 >> 0xe)),
                 param_1->sprite_data,&local_38);
  } while (iVar3 < 2);
  return;
}
