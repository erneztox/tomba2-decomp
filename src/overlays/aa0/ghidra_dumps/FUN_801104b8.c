// FUN_801104b8

void FUN_801104b8(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = param_1[5];
  iVar2 = *(int *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    param_1[5] = 1;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x54) = 0xc00;
    *(undefined2 *)(param_1 + 0x56) = 0x200;
    func_0x8004b354(param_1);
  }
  else if (cVar1 != '\x01') {
    if (cVar1 == -1) {
      FUN_801224c0(param_1,&DAT_8014e4ec,4);
      return;
    }
    func_0x80077c40(param_1,&DAT_8014e4ec,0xf);
    FUN_801224fc();
    return;
  }
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar2 + 0x2c);
  *(short *)(param_1 + 0x32) = *(short *)(iVar2 + 0x30) + -0x14;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar2 + 0x34);
  iVar2 = func_0x8007778c(param_1);
  if (iVar2 != 0) {
    func_0x80051844(param_1);
    func_0x8004b374(param_1,1);
  }
  return;
}

