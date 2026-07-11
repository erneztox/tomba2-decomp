// FUN_8011a0dc

void FUN_8011a0dc(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    iVar2 = func_0x8007778c(param_1);
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0x2b) == '\x03') {
        func_0x80041718(param_1,1,0xc);
        func_0x80042354(1,1);
        func_0x80040d68(param_1,0x80137240);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        FUN_8012320c();
        return;
      }
      if (*(char *)(param_1 + 6) == '\0') {
        uVar1 = *(short *)(param_1 + 0x40) - 1;
        *(ushort *)(param_1 + 0x40) = uVar1;
        if ((int)((uint)uVar1 << 0x10) < 0) {
          func_0x80041718(param_1,0x12,4);
          *(undefined2 *)(param_1 + 0x40) = 0;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          FUN_8012320c();
          return;
        }
      }
      else {
        if (*(char *)(param_1 + 6) != '\x01') {
          FUN_8012320c(param_1);
          return;
        }
        if ((*(short *)(param_1 + 0x40) == 0) && (*(short *)(*(int *)(param_1 + 0x38) + 4) != 0)) {
          func_0x80074590(0x31,0xfffffffd,0xfffffff6);
          *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
        }
        if (*(char *)(param_1 + 0x79) == '\x01') {
          func_0x80041718(param_1,1,4);
          uVar1 = func_0x8009a450();
          *(ushort *)(param_1 + 0x40) = (uVar1 & 0x1f) + 0x18;
          *(undefined1 *)(param_1 + 6) = 0;
          FUN_8012320c();
          return;
        }
      }
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
      FUN_8012320c();
      return;
    }
    if (*(char *)(param_1 + 0x70) == -1) {
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + -1;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x80077e7c(param_1);
  }
  func_0x80041098(param_1);
  func_0x8004190c(param_1);
  return;
}

