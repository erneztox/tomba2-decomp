
void FUN_80067fe4(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x6e) != '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x74) + 4) = 3;
  }
  if ((*(char *)(param_1 + 0x6e) == '(') || (*(char *)(param_1 + 0x6e) == 'a')) {
    uVar1 = FUN_8004bd04(param_1,0,0);
    *(undefined4 *)(param_1 + 0x74) = uVar1;
  }
  return;
}

