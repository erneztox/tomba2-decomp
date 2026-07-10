// FUN_000095b0

bool FUN_000095b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,1,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8011187c;
    *(undefined1 *)(iVar1 + 3) = 5;
  }
  return iVar1 != 0;
}

