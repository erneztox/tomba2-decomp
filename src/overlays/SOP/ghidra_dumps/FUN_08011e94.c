// FUN_08011e94

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08011e94(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x0007a980(0,6,1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8010ab38;
    *(undefined1 *)(iVar1 + 0xb) = 0x20;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0x18) = 0x8002ab5c;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

