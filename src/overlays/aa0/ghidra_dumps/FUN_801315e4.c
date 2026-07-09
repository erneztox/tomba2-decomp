// FUN_801315e4

void FUN_801315e4(undefined4 param_1,undefined4 param_2)

{
  int in_v1;
  int unaff_s0;
  int unaff_s2;
  
  *(int *)(unaff_s2 + 0x30) = in_v1 << 0x10;
  DAT_800bf9ee = DAT_800bf9ee | (byte)param_1;
  *(undefined1 *)(unaff_s2 + 0x5e) = 0;
  *(undefined1 *)(unaff_s2 + 0xbf) = 0;
  *(undefined2 *)(unaff_s0 + 0x42) = 0xf;
                    /* WARNING: Subroutine does not return */
  *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
  FUN_801402b8(param_1,param_2,4);
}

