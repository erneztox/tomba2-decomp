// FUN_00000c2c

void FUN_00000c2c(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  uVar1 = (uint)*(byte *)(param_1 + 0x2b);
  do {
    if ((uVar1 & 1) != 0) {
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 + 1;
    uVar1 = (int)(uint)*(byte *)(param_1 + 0x2b) >> (uVar2 & 0x1f);
  } while ((int)uVar2 < 7);
  if (iVar3 != 0) {
    func_0x0004d4f4(0x36);
    DAT_800bf9f8 = DAT_800bf9f8 | *(byte *)(param_1 + 0x2b);
  }
  return;
}

