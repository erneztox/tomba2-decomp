// FUN_80126104

void FUN_80126104(void)

{
  int in_v1;
  int in_a3;
  int in_t1;
  int in_t5;
  int in_t6;
  int unaff_s4;
  int in_hi;
  int iStack00000010;
  int iStack00000014;
  int iStack00000018;
  
  iStack00000010 = (in_t5 >> 8) - (in_a3 >> 0x1f);
  iStack00000018 = (in_hi >> 8) - (in_v1 >> 0x1f);
  iStack00000014 = (in_t6 >> 8) - (in_t1 >> 0x1f);
  *(undefined1 *)(unaff_s4 + 6) = 0;
  FUN_8012f188();
  return;
}

