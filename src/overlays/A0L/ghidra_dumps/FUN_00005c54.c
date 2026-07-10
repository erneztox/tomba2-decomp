// FUN_00005c54

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00005c54(int param_1)

{
  if (*(char *)(param_1 + 0xbf) == '\x01') {
    DAT_800bfa58 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_800bfa58 = 1;
  func_0x001094b8(&DAT_800e7e80);
  return 1;
}

