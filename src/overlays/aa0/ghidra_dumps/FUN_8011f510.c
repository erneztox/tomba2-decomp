// FUN_8011f510

void FUN_8011f510(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0xf0);
  iVar3 = *(int *)(param_1 + 0xc0);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar2 = func_0x800779d0(param_1,(*(int *)(iVar2 + 0x2c) - *(int *)(iVar3 + 0x2c)) * 0x8000 >> 0x10
                          ,(*(int *)(iVar2 + 0x30) - *(int *)(iVar3 + 0x30)) * 0x8000 >> 0x10,
                          (*(int *)(iVar2 + 0x34) - *(int *)(iVar3 + 0x34)) * 0x8000 >> 0x10);
  if ((iVar2 != 0) || ((iVar4 != 0 && (*(char *)(iVar4 + 1) != '\0')))) {
    *(undefined1 *)(param_1 + 1) = 1;
    *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + '\x01';
    func_0x800517f8(param_1);
    if (iVar4 != 0) {
      *(undefined2 *)(iVar4 + 0x36) = *(undefined2 *)(*(int *)(param_1 + 0xf0) + 0x34);
      *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(param_1 + 0x60);
      *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x62);
      uVar1 = *(undefined2 *)(iVar4 + 0x36);
      *(int *)(param_1 + 0x14) = param_1 + 0x66;
      *(undefined2 *)(param_1 + 0x52) = uVar1;
      *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(*(int *)(param_1 + 0xf0) + 0x2c);
      *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(*(int *)(param_1 + 0xf0) + 0x30);
      *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(*(int *)(param_1 + 0xf0) + 0x34);
    }
    *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + -1;
  }
  return;
}

