// FUN_8012d628

/* WARNING: Removing unreachable block (ram,0x8012d66c) */
/* WARNING: Removing unreachable block (ram,0x8012d67c) */
/* WARNING: Removing unreachable block (ram,0x8012d684) */

void FUN_8012d628(int param_1,short param_2)

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
  undefined2 local_38;
  short local_36;
  short local_34;
  undefined2 local_30;
  short local_2e;
  short local_2c;
  undefined2 local_28;
  short local_26;
  short local_24;
  undefined2 local_20;
  short local_1e;
  short local_1c;
  
  local_59 = 0x2d;
  local_4a = *(undefined2 *)(param_1 + 0x60);
  iVar2 = 0;
  local_52 = *(undefined2 *)(param_1 + 0x62);
  iVar1 = (uint)*(ushort *)(param_1 + 0x6c) << 0x10;
  local_54 = *(undefined2 *)(param_1 + 100);
  local_4c = *(undefined2 *)(param_1 + 0x66);
  local_44 = *(undefined2 *)(param_1 + 0x68);
  local_3c = *(undefined2 *)(param_1 + 0x6a);
  local_26 = param_2 + -0x78;
  local_5c = 0x80;
  local_5b = 0x80;
  local_5a = 0x80;
  local_2c = (short)((iVar1 >> 0x10) - (iVar1 >> 0x1f) >> 1);
  local_34 = -local_2c;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_36 = param_2;
  local_2e = param_2;
  local_24 = local_34;
  local_1e = local_26;
  local_1c = local_2c;
  if (0 < (int)param_2 / 0x78) {
    do {
      func_0x8003b320(auStack_60,&local_38,0x20);
      iVar2 = iVar2 + 1;
      local_36 = local_36 + -0x78;
      local_2e = local_2e + -0x78;
      local_26 = local_26 + -0x78;
      local_1e = local_1e + -0x78;
    } while (iVar2 < (int)param_2 / 0x78);
  }
  local_26 = local_36 - param_2 % 0x78;
  local_1e = local_2e - param_2 % 0x78;
  func_0x8003b320(auStack_60,&local_38,0x20);
  return;
}

