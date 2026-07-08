
undefined1 * FUN_8001ec90(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  if (param_3 < 1) {
    puVar1 = (undefined1 *)FUN_8001e4b4();
    return puVar1;
  }
  do {
    *puVar1 = param_2;
    param_3 = param_3 + -1;
    puVar1 = puVar1 + 1;
  } while (0 < param_3);
  return param_1;
}

