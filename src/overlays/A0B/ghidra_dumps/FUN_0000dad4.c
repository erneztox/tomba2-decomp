// FUN_0000dad4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0000dad4(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(param_1 + 0x78) = 1;
    uVar1 = func_0x0003116c((int)*(short *)((DAT_800bf870 - 10) * 2 + -0x7fedbbb8),param_1 + 0x2c,
                            0xffffffce);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = *(short *)(param_1 + 0x32) + 0x10;
  *(short *)(param_1 + 0x32) = sVar2;
  *(short *)(*(int *)(param_1 + 0x38) + 0x2e) = sVar2;
  return _DAT_800e8046 + -0xf0 <= (int)*(short *)(param_1 + 0x32);
}

