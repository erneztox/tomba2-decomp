// FUN_8012b0c8

/* WARNING: Removing unreachable block (ram,0x8012b10c) */
/* WARNING: Removing unreachable block (ram,0x8012b11c) */
/* WARNING: Removing unreachable block (ram,0x8012b124) */

void FUN_8012b0c8(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_60 [4];
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_44;
  undefined2 local_3c;
  short local_38;
  short local_36;
  undefined2 local_34;
  short local_30;
  short local_2e;
  undefined2 local_2c;
  short local_28;
  short local_26;
  undefined2 local_24;
  short local_20;
  short local_1e;
  undefined2 local_1c;
  
  iVar2 = 0;
  local_59 = 0x2d;
  local_4a = *(undefined2 *)(param_1 + 0x60);
  local_52 = *(undefined2 *)(param_1 + 0x62);
  iVar1 = (uint)*(ushort *)(param_1 + 0x6c) << 0x10;
  local_54 = *(undefined2 *)(param_1 + 100);
  local_4c = *(undefined2 *)(param_1 + 0x66);
  local_44 = *(undefined2 *)(param_1 + 0x68);
  local_3c = *(undefined2 *)(param_1 + 0x6a);
  local_5c = 0x80;
  local_5b = 0x80;
  local_5a = 0x80;
  local_30 = (short)((iVar1 >> 0x10) - (iVar1 >> 0x1f) >> 1);
  local_38 = -local_30;
  local_36 = 0;
  local_2e = 0;
  local_26 = -0x78;
  local_1e = -0x78;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_28 = local_38;
  local_20 = local_30;
  if (0 < (int)param_2 / 0x78) {
    do {
      func_0x8003b320(auStack_60,&local_38,0xfffffff8);
      iVar2 = iVar2 + 1;
      local_36 = local_36 + -0x78;
      local_2e = local_2e + -0x78;
      local_26 = local_26 + -0x78;
      local_1e = local_1e + -0x78;
    } while (iVar2 < (int)param_2 / 0x78);
  }
  local_26 = local_36 - param_2 % 0x78;
  local_1e = local_2e - param_2 % 0x78;
  func_0x8003b320(auStack_60,&local_38,0xfffffff8);
  return;
}

