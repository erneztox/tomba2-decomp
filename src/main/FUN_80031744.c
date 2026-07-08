
void FUN_80031744(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x3c);
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      return;
    }
    *(byte **)(param_1 + 0x40) = pbVar1 + 1;
  }
  return;
}

