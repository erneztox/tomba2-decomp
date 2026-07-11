// FUN_0802fe04

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802fe04(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_800ecf90;
  if (((int)*(short *)(param_1 + 0x72) & 0x8000U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(param_1 + 0x7c) = 0x8014005c;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  func_0x00041718(param_1,*(ushort *)(param_1 + 0x72) & 0x7fff,0);
  return 1;
}

