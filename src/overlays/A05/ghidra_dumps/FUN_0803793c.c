// FUN_0803793c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803793c(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if ((DAT_800bf9be & 4) == 0) goto LAB_080379fc;
    sVar1 = *(short *)(param_1 + 0x32) + -8;
    *(short *)(param_1 + 0x32) = sVar1;
    if (-0x2f0e < sVar1) {
      if ((_DAT_1f80017c & 3) == 0) {
        func_0x00074590(0x8f,0,0);
        halt_baddata();
      }
      goto LAB_080379fc;
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x32) = 0xd100;
    DAT_800bf9be = DAT_800bf9be | 8;
  }
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
LAB_080379fc:
  func_0x000517f8(param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

