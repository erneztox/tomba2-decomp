// FUN_80039978

undefined4 FUN_80039978(int param_1)

{
  uint uVar1;
  
  uVar1 = *(byte *)(param_1 + 0x1f) + 1;
  if ((int)(uint)*(byte *)(param_1 + 0x1f) < (int)(*(byte *)(param_1 + 0x23) - 1)) {
    *(char *)(param_1 + 0x1f) = (char)uVar1;
    if (*(byte *)(param_1 + 0x1e) + 5 <= (uVar1 & 0xff)) {
      *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) + 1;
    }
    return 1;
  }
  return 0;
}

