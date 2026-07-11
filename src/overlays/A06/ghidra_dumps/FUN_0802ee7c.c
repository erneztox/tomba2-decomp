// FUN_0802ee7c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802ee7c(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_e;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    if ((*(short *)(param_1 + 0x72) != 0) || (uVar1 = 1, DAT_800bf9d3 == '\0')) {
      local_16 = *(undefined2 *)(_DAT_1f800214 + 0x2e);
      local_12 = *(undefined2 *)(_DAT_1f800214 + 0x32);
      if (*(short *)(param_1 + 0x72) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      local_e = _DAT_1f800164;
      func_0x00070f00(param_1,1,auStack_18);
      func_0x000708b4(3);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = 1;
    if (*(char *)(_DAT_1f800214 + 3) != '\0') {
      uVar1 = 0;
    }
  }
  return uVar1;
}

