
void FUN_8001de3c(undefined4 param_1,uint param_2)

{
  int in_v0;
  uint in_v1;
  
  do {
    in_v1 = in_v1 + 1;
    if ((*(ushort *)(in_v0 + 0x1ae) & 0x7ff) == param_2) {
      return;
    }
    in_v0 = DAT_80026d88;
  } while (in_v1 < 0xf01);
                    /* WARNING: Subroutine does not return */
  FUN_8001e5ec(s___d__d____d__d__80010a40 + 4,s_LoadImage_80010a70 + 8);
}

