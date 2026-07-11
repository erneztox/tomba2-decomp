// FUN_80121bb4

void FUN_80121bb4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = func_0x8007a980(2,4,0);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x80127e94;
    *(undefined1 *)(iVar2 + 2) = 0x16;
    uVar1 = *(undefined1 *)(param_1 + 3);
    *(int *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 3) = uVar1;
    *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
  }
  return;
}

