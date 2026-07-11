// FUN_08019744

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08019744(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,1,3,0x10);
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0x8011187c;
  *(undefined1 *)(iVar1 + 3) = 6;
  func_0x0004d688(0x53,1);
  return 1;
}

