
undefined1 * FUN_8009a3e0(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)0x0;
  puVar2 = param_1;
  if (param_1 != (undefined1 *)0x0) {
    for (; puVar3 = param_1, 0 < param_3; param_3 = param_3 + -1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
  }
  return puVar3;
}

