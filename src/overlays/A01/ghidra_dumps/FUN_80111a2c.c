// FUN_80111a2c

undefined4 FUN_80111a2c(int param_1,undefined1 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int in_v1;
  int extraout_v1;
  int extraout_v1_00;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 6) = 2;
    func_0x80040cdc(param_1,0x8013995c,0x80135d88);
    *(undefined1 *)(param_1 + 0x70) = 1;
    uVar2 = FUN_8011aa8c();
    return uVar2;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x2b) != '\x03') {
        return 0;
      }
      *(undefined1 *)(param_1 + 6) = 1;
      param_2 = 1;
      func_0x80042354();
      in_v1 = extraout_v1;
    }
  }
  else if (bVar1 == 2) {
    func_0x80041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x80042310();
    in_v1 = extraout_v1_00;
  }
  *(undefined1 *)(in_v1 + 4) = param_2;
  uVar2 = func_0x8007a624(bVar1);
  return uVar2;
}

