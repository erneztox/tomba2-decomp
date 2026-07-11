// FUN_0801b2f8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801b2f8(int param_1,int param_2)

{
  char cVar1;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  if (*(char *)(param_1 + 0x2b) != '\0') {
    *(char *)(param_1 + 0x2b) = *(char *)(param_1 + 0x2b) + -1;
  }
  if (4 < *(byte *)(param_1 + 5)) {
    if (*(char *)(param_1 + 7) == '\0') {
      if (DAT_1f800253 != '\x01') {
        return;
      }
      DAT_1f800253 = '\0';
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      local_1e = *(undefined2 *)(param_2 + 0x2e);
      local_1a = *(short *)(param_2 + 0x32) -
                 (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84));
      local_16 = *(undefined2 *)(param_2 + 0x36);
      func_0x0011a7a8(auStack_20,0);
      *(undefined1 *)(param_1 + 0x46) = 0x3c;
    }
    else if (*(char *)(param_1 + 7) == '\x01') {
      cVar1 = *(char *)(param_1 + 0x46) + -1;
      *(char *)(param_1 + 0x46) = cVar1;
      if (cVar1 == '\0') {
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + -1;
      }
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not emulate address calculation at 0x0801b344 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef67b4))();
  return;
}

