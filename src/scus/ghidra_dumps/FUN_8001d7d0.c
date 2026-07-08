
void FUN_8001d7d0(void)

{
  byte bVar1;
  int iVar2;
  int unaff_s0;
  undefined4 unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  undefined4 in_stack_00000040;
  
  iVar2 = unaff_s0 * 0x10;
  *DAT_80026cd0 = *DAT_80026cd0 | 1 << (unaff_s0 * 4 + 3U & 0x1f);
  *(undefined4 *)(iVar2 + 0x1f801080) = unaff_s2;
  *(uint *)(iVar2 + 0x1f801084) = unaff_s3 << 0x10 | unaff_s4;
  bVar1 = *DAT_80026cb8;
  while ((bVar1 & 0x40) == 0) {
    bVar1 = *DAT_80026cb8;
  }
  *(undefined4 *)(iVar2 + 0x1f801088) = in_stack_00000040;
  return;
}

