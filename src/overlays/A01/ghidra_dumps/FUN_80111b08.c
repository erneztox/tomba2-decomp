// FUN_80111b08

undefined4 FUN_80111b08(int param_1)

{
  byte bVar1;
  undefined2 extraout_v1;
  int iVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  uVar3 = (uint)bVar1;
  iVar2 = 1;
  if (uVar3 == 1) {
    *(undefined1 *)(param_1 + 6) = 2;
    iVar2 = param_1;
    func_0x80040cdc(param_1,0x8013995c,0x80135f24);
    *(byte *)(param_1 + 0x70) = bVar1;
    *(undefined2 *)(iVar2 + 0x30) = extraout_v1;
  }
  else if (uVar3 < 2) {
    if (uVar3 == 0) {
      if (*(char *)(param_1 + 0x2b) != '\x03') {
        return 0;
      }
      *(undefined1 *)(param_1 + 6) = 1;
      iVar2 = 1;
      func_0x80042354(1,1);
    }
  }
  else if (uVar3 == 2) {
    iVar2 = param_1;
    func_0x80041098();
    if (*(char *)(param_1 + 0x70) != -1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x80042310();
  }
  *(undefined2 *)(uVar3 + 0x80) = 200;
  *(undefined2 *)(uVar3 + 0x82) = 400;
  *(undefined2 *)(uVar3 + 0x84) = 0x2d0;
  *(int *)(uVar3 + 0x14) = iVar2;
  *(undefined2 *)(uVar3 + 0x86) = 0x310;
  *(undefined1 *)(uVar3 + 0x5e) = 0;
  return 0x310;
}

