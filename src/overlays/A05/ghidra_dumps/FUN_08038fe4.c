// FUN_08038fe4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08038fe4(int param_1)

{
  undefined1 auStack_18 [2];
  undefined2 local_16;
  short local_12;
  undefined2 local_e;
  
  if (*(char *)(param_1 + 0x5e) == '\0') {
    func_0x00131e10(param_1);
  }
  else if (*(char *)(param_1 + 0x5e) == '\x01') {
    if ((*(char *)(param_1 + 6) == '\0') && (3 < DAT_800bfa11)) {
      func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x55);
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    if (*(char *)(param_1 + 7) != '\0') {
      if (*(char *)(param_1 + 7) == '\x01') {
        if (DAT_800bf9c3 != 0) {
          if ((_DAT_1f80017c & 3) == 0) {
            local_16 = *(undefined2 *)(param_1 + 0x2e);
            local_12 = *(short *)(param_1 + 0x32) + -100;
            local_e = *(undefined2 *)(param_1 + 0x36);
            func_0x0003116c(3,auStack_18,0xffffffc4);
            local_12 = *(short *)(param_1 + 0x32) + -200;
            func_0x0003116c(0x60a,auStack_18,0xffffffc4);
          }
          goto LAB_08039198;
        }
        *(undefined1 *)(param_1 + 7) = 2;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (((DAT_800bf9c3 & 0x80) == 0) || (_DAT_800bf858 == 0)) {
      if ((DAT_800bf9c3 == 2) || (DAT_800bf9c3 == 1)) {
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        halt_baddata();
      }
    }
    else if ((_DAT_1f80017c & 7) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_08039198:
    func_0x000517f8(param_1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

