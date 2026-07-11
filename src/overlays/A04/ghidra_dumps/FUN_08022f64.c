// FUN_08022f64

/* WARNING: Control flow encountered bad instruction data */

void FUN_08022f64(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,0,3,0x18);
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0x8011bb48;
  *(undefined1 *)(iVar1 + 3) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  return;
}

