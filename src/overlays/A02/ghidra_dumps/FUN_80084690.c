// FUN_80084690

void FUN_80084690(int param_1)

{
  setCopControlWord(2,0x2800,*(undefined4 *)(param_1 + 0x14));
  setCopControlWord(2,0x3000,*(undefined4 *)(param_1 + 0x18));
  setCopControlWord(2,0x3800,*(undefined4 *)(param_1 + 0x1c));
  return;
}

