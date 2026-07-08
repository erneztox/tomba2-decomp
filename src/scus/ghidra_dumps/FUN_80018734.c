
void FUN_80018734(void)

{
  uint unaff_s0;
  
  if (-1 < (int)(unaff_s0 ^ *DAT_8002567c)) {
    do {
    } while (((unaff_s0 ^ *DAT_8002567c) & 0x80000000) == 0);
  }
  DAT_80025688 = DAT_800267b4;
  do {
    DAT_80025684 = *DAT_80025680;
  } while (*DAT_80025680 != *DAT_80025680);
  return;
}

