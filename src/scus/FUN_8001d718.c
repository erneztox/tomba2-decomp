
void FUN_8001d718(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint in_v1;
  uint unaff_s0;
  undefined4 unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  undefined4 in_stack_00000040;
  char in_stack_00000044;
  
  uVar2 = *(uint *)(param_2 + 0x1f801088);
  while ((uVar2 & in_v1) != 0) {
    if (param_1 == 0x10000) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(s_DrawSync__d_____80010a20 + 4,*(undefined4 *)(param_2 + 0x1f801088));
    }
    param_1 = param_1 + 1;
    uVar2 = *(uint *)(param_2 + 0x1f801088);
  }
  if (in_stack_00000044 != '\x01') {
    *(byte *)(DAT_80026cd4 + 2) = *(byte *)(DAT_80026cd4 + 2) & ~(byte)(1 << (unaff_s0 & 0x1f));
    iVar3 = unaff_s0 * 0x10;
    *DAT_80026cd0 = *DAT_80026cd0 | 1 << (unaff_s0 * 4 + 3 & 0x1f);
    *(undefined4 *)(iVar3 + 0x1f801080) = unaff_s2;
    *(uint *)(iVar3 + 0x1f801084) = unaff_s3 << 0x10 | unaff_s4;
    bVar1 = *DAT_80026cb8;
    while ((bVar1 & 0x40) == 0) {
      bVar1 = *DAT_80026cb8;
    }
    *(undefined4 *)(iVar3 + 0x1f801088) = in_stack_00000040;
    return;
  }
  FUN_8001ceb8((uint)*(byte *)(DAT_80026cd4 + 2),
               ((uint)*(byte *)(DAT_80026cd4 + 2) | 1 << (unaff_s0 & 0x1f)) + param_2 * 0x800);
  FUN_8001c7f4();
  return;
}

