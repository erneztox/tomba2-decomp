/**
 * @brief Draws Pool 4 entity using FUN_8007e1b8
 * @note Original: func_80025744 at 0x80025744
 */
// Engine_DrawPool4_Type1



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80025744(int param_1)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 local_28;
  undefined1 local_27;
  undefined2 local_26;
  short local_20 [4];
  
  local_27 = 8;
  local_26 = 0x8000;
  local_20[0] = 0x20;
  local_28 = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[1] = 200;
  FUN_8007e1b8(local_20,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),&local_28);
  local_26 = 0;
  local_20[2] = DAT_800bf87f - 0x18;
  local_20[0] = local_20[0] + 0x18;
  FUN_8007e1b8(local_20,PTR_DAT_800173d8,*(undefined4 *)(param_1 + 0x3c),&local_28);
  sVar2 = local_20[2];
  local_20[2] = 0;
  local_20[0] = local_20[0] + sVar2;
  FUN_8007e1b8(local_20,PTR_DAT_800173dc,*(undefined4 *)(param_1 + 0x3c),&local_28);
  if (DAT_800bf87e == 0) {
    return;
  }
  local_20[0] = 0x32;
  local_20[1] = 0xcc;
  local_20[2] = (short)DAT_800bf87e;
  bVar1 = false;
  switch(DAT_800e7eef) {
  case 0x12:
    uVar3 = (uint)DAT_800a4554;
    break;
  case 0x13:
    uVar3 = (uint)DAT_800a4555;
    break;
  case 0x14:
    uVar3 = (uint)DAT_800a4556;
    break;
  case 0x15:
    uVar3 = (uint)DAT_800a4557;
    break;
  case 0x16:
    uVar3 = (uint)DAT_800a4558;
    break;
  default:
    goto switchD_80025868_default;
  }
  if (uVar3 >> 1 <= (uint)DAT_800bf87e) {
    bVar1 = true;
  }
switchD_80025868_default:
  puVar4 = PTR_DAT_800173bc;
  if ((bVar1) && ((_DAT_1f80017c & 3) != 0)) {
    puVar4 = PTR_DAT_800173c0;
  }
  FUN_8007e1b8(local_20,puVar4,*(undefined4 *)(param_1 + 0x3c),&local_28);
  return;
}
