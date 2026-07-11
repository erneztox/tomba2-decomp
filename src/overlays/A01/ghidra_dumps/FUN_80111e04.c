// FUN_80111e04

void FUN_80111e04(int param_1,undefined2 param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar3 = (uint)bVar1;
  if (uVar3 == 0) {
    func_0x8007778c(param_1);
    if (*(char *)(param_1 + 0x2b) != '\x03') goto LAB_80111ee4;
    func_0x80042354(1,3);
    param_2 = 0x3cf0;
    func_0x80040d68(param_1);
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (uVar3 == 1) {
    *(byte *)(param_1 + 1) = bVar1;
    func_0x80077e7c(param_1);
    func_0x80041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
LAB_80111ee4:
      func_0x8004190c(param_1);
      return;
    }
    if (*(char *)(param_1 + 6) == '\0') {
      param_2 = 0x60fc;
      *(undefined1 *)(param_1 + 0x7a) = 0;
      func_0x80040d68(param_1);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(byte *)(param_1 + 6) = bVar1;
    }
    else if (*(char *)(param_1 + 6) == '\x01') {
      *(undefined1 *)(param_1 + 5) = 0;
      goto LAB_80111ee4;
    }
  }
  *(undefined2 *)(uVar3 + 0x4a) = param_2;
  func_0x8007778c();
  if (*(short *)(uVar3 + 0x60) == 0) {
    if (*(char *)(uVar3 + 1) == '\0') {
      *(short *)(uVar3 + 0x60) = *(short *)(uVar3 + 0x60) + 1;
      *(undefined2 *)(uVar3 + 0x62) = 0x5a;
      FUN_80123f10();
      return;
    }
  }
  else {
    if (*(short *)(uVar3 + 0x60) != param_1) {
      FUN_80123f10();
      return;
    }
    if (*(char *)(uVar3 + 1) != '\0') {
      *(undefined2 *)(uVar3 + 0x60) = 0;
      FUN_80123f10();
      return;
    }
    uVar2 = *(short *)(uVar3 + 0x62) - 1;
    *(ushort *)(uVar3 + 0x62) = uVar2;
    if ((int)((uint)uVar2 << 0x10) < 0) {
      DAT_800bf9d4 = 0;
      *(undefined1 *)(uVar3 + 4) = 3;
      FUN_80123f10();
      return;
    }
  }
  return;
}

