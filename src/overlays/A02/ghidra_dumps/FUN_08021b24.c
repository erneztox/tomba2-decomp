// FUN_08021b24

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08021b24(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = func_0x00072ddc(0,0x81,4,0x24);
  if (iVar2 != 0) {
    *(undefined2 *)(iVar2 + 0x2e) = 0xdd4;
    *(undefined2 *)(iVar2 + 0x32) = 0xf7d6;
    *(undefined2 *)(iVar2 + 0x36) = 0x17a2;
    uVar1 = *(undefined1 *)(param_1 + 0x5e);
    *(undefined4 *)(iVar2 + 0x1c) = 0x8011a8d4;
    *(undefined1 *)(iVar2 + 3) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

