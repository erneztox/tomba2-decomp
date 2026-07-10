// FUN_8001cba8

void FUN_8001cba8(int param_1,byte param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = param_2 != 0xff;
  if (!bVar1) {
    param_2 = 0;
  }
  uVar3 = (uint)bVar1;
  if (uVar3 < 2) {
    do {
      uVar3 = uVar3 + 1;
      iVar2 = param_1 + (uint)param_2;
      *(undefined1 *)(iVar2 + 0x48) = 0;
      *(undefined1 *)(iVar2 + 0x4a) = 0xfc;
      *(undefined1 *)(iVar2 + 0x4c) = 0;
      *(undefined1 *)(iVar2 + 0x4e) = 0xff;
      param_2 = param_2 + 1;
    } while ((int)uVar3 < 2);
  }
  return;
}

