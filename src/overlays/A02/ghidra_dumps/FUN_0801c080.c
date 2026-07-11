// FUN_0801c080

void FUN_0801c080(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x38;
  if (3 < DAT_800bfa03) {
    uVar2 = 0x39;
  }
  iVar1 = func_0x00051b70(param_1,0xc,uVar2);
  if (iVar1 == 0) {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x50;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    func_0x000517f8();
  }
  return;
}

