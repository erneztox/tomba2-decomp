
void FUN_8001ad7c(void)

{
  int in_v0;
  
  if (in_v0 != 0) {
    do {
      *DAT_80026b94 = 1;
      *DAT_80026ba0 = 7;
      *DAT_80026b9c = 7;
    } while ((*DAT_80026ba0 & 7) != 0);
  }
  DAT_80026bae = 0;
  DAT_80026bad = 0;
  DAT_80026bac = 2;
  *DAT_80026b94 = 0;
  *DAT_80026ba0 = 0;
  *DAT_80026ba4 = 0x1325;
  return;
}

