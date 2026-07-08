
void FUN_800336dc(int param_1,short param_2,short param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_30;
  undefined1 local_2f;
  undefined2 local_2e;
  short local_28;
  short local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  iVar2 = 0;
  local_2e = 0;
  local_22 = 0;
  iVar1 = 0;
  local_2f = param_4;
  do {
    iVar1 = iVar1 >> 0x10;
    local_30 = (&DAT_800a2354)[iVar1 * 10];
    local_28 = (&DAT_800a2356)[iVar1 * 5] + param_3;
    local_26 = (&DAT_800a2358)[iVar1 * 5] + param_2;
    local_24 = (&DAT_800a235a)[iVar1 * 5];
    FUN_8007e1b8(&local_28,(&PTR_DAT_80017334)[(short)(&DAT_800a235c)[iVar1 * 5]],
                 *(undefined4 *)(param_1 + 4),&local_30);
    iVar2 = iVar2 + 1;
    iVar1 = iVar2 * 0x10000;
  } while (iVar2 * 0x10000 >> 0x10 < 4);
  iVar1 = 0;
  local_24 = 0;
  local_30 = 0;
  do {
    local_28 = (short)iVar1 * 0x10 + param_3 + 0x1c;
    local_26 = param_2 + 0x1c;
    FUN_8007e1b8(&local_28,(&PTR_DAT_80017334)[(byte)(&DAT_800a237c)[(short)iVar1]],
                 *(undefined4 *)(param_1 + 4),&local_30);
    iVar1 = iVar1 + 1;
  } while (iVar1 * 0x10000 >> 0x10 < 0x12);
  local_30 = 0;
  iVar1 = 0;
  do {
    local_28 = param_3 + 0xc;
    local_26 = (short)iVar1 * 0x10 + param_2 + 0x2c;
    FUN_8007e1b8(&local_28,(&PTR_DAT_80017334)[(byte)(&DAT_800a2390)[(short)iVar1]],
                 *(undefined4 *)(param_1 + 4),&local_30);
    iVar1 = iVar1 + 1;
  } while (iVar1 * 0x10000 >> 0x10 < 10);
  local_30 = 1;
  iVar1 = 0;
  do {
    local_28 = param_3 + 0x134;
    local_26 = (short)iVar1 * 0x10 + param_2 + 0x2c;
    FUN_8007e1b8(&local_28,(&PTR_DAT_80017334)[(byte)(&DAT_800a2390)[(short)iVar1]],
                 *(undefined4 *)(param_1 + 4),&local_30);
    iVar1 = iVar1 + 1;
  } while (iVar1 * 0x10000 >> 0x10 < 10);
  return;
}

