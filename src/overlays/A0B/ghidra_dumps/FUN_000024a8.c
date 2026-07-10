// FUN_000024a8

/* WARNING: Control flow encountered bad instruction data */

void FUN_000024a8(undefined1 *param_1)

{
  ushort uVar1;
  
  if ((DAT_800bf80d == '\0') &&
     (uVar1 = *(ushort *)(param_1 + 0x6a) & 0xf00, (*(ushort *)(param_1 + 0x6a) & 0x8000) != 0)) {
    *(undefined2 *)(param_1 + 0x6a) = 0;
    DAT_800bf81e = 0;
    if (uVar1 == 0x700) {
      *param_1 = 3;
      param_1[4] = 2;
      param_1[5] = 5;
      param_1[6] = 0;
      param_1[7] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (uVar1 == 0x900) {
      param_1[0x2b] = (char)(*(short *)(param_1 + 0x56) + 0x800 >> 4);
      func_0x00022d08(param_1,0,1,1);
    }
  }
  return;
}

