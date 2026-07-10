// FUN_8009A420

undefined1 * FUN_8009a420(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)0x0;
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_1;
    if (param_3 < 1) {
      puVar1 = (undefined1 *)0x0;
    }
    else {
      do {
        *puVar2 = param_2;
        param_3 = param_3 + -1;
        puVar2 = puVar2 + 1;
        puVar1 = param_1;
      } while (0 < param_3);
    }
  }
  return puVar1;
}

