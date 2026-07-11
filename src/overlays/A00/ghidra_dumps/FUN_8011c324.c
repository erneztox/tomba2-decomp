// FUN_8011c324

int FUN_8011c324(int param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint unaff_s4;
  
  uVar4 = param_2 & 0xff;
  if (uVar4 == 1) {
LAB_8011c38c:
    iVar3 = 0;
    if ((((int)(uint)DAT_800bf9e8 >> (param_3 & 0x1f) & 1U) == 0) &&
       (iVar3 = func_0x80072ddc(param_1,1,2,0xf), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x1c) = 0x80124e74;
      *(ushort *)(iVar3 + 0x60) = (ushort)param_3 & 0xff;
      *(char *)(iVar3 + 3) = (char)param_2;
      *(undefined1 *)(iVar3 + 0x5e) = 0;
      if (((param_2 & 0xff) == 0) &&
         (((int)(uint)DAT_800bf9cc >> (*(byte *)(param_1 + 3) & 0x1f) & 1U) != 0)) {
        *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
        *(undefined2 *)(iVar3 + 0x32) = *(undefined2 *)(param_1 + 0x32);
        uVar1 = *(undefined2 *)(param_1 + 0x36);
        *(undefined1 *)(iVar3 + 0x5e) = 1;
        *(undefined2 *)(iVar3 + 0x36) = uVar1;
      }
    }
    return iVar3;
  }
  if (uVar4 < 2) {
    if (uVar4 == 0) {
      uVar4 = (uint)*(byte *)(param_3 + 5);
      unaff_s4 = 1;
    }
    else {
      param_2 = 1;
    }
  }
  else {
    if (uVar4 == 5) goto LAB_8011c38c;
    param_2 = 1;
  }
  if (uVar4 == unaff_s4) {
    if (0 < *(short *)(param_3 + 0x40)) {
      *(undefined1 *)(param_3 + 5) = 2;
      *(short *)(param_3 + 0x40) = *(short *)(param_3 + 0x40) + -1;
      iVar3 = func_0x8009a450(param_1,param_2);
      return iVar3;
    }
    *(undefined1 *)(param_3 + 0x5e) = 2;
    *(undefined1 *)(param_3 + 5) = 0;
    *(undefined1 *)(param_3 + 6) = 0;
    iVar3 = FUN_8012e454();
    return iVar3;
  }
  if (1 < uVar4) {
    if (uVar4 == 2) {
      uVar2 = *(short *)(param_3 + 0x42) - 1;
      *(ushort *)(param_3 + 0x42) = uVar2;
      if (uVar2 == 0) {
        *(char *)(param_3 + 5) = (char)unaff_s4;
      }
      return (uint)uVar2 << 0x10;
    }
    iVar3 = FUN_8012e454();
    return iVar3;
  }
  if (uVar4 == 0) {
    *(undefined1 *)(param_3 + 0x2a) = 3;
    func_0x8004766c(param_3);
    func_0x80049760(param_3);
    *(char *)(param_3 + 5) = *(char *)(param_3 + 5) + '\x01';
    iVar3 = FUN_8012e454();
    return iVar3;
  }
  iVar3 = FUN_8012e454();
  return iVar3;
}

