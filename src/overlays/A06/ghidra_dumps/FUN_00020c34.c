// FUN_00020c34

void FUN_00020c34(uint *param_1)

{
  uint in_v0;
  int iVar1;
  uint in_t0;
  uint unaff_s0;
  int unaff_s1;
  int unaff_s2;
  uint *puVar2;
  uint unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int unaff_s6;
  undefined4 uStack00000010;
  
  *param_1 = in_v0 & unaff_s3 | in_t0;
  uStack00000010 = 0;
  func_0x00083de0();
  puVar2 = (uint *)(unaff_s2 + *(int *)(unaff_s6 + -0x2738));
  *(uint *)(unaff_s1 + 0x20) = *(uint *)(unaff_s1 + 0x20) & unaff_s3 | *puVar2 & unaff_s4;
  iVar1 = *(int *)(unaff_s5 + -0xabc);
  *puVar2 = *puVar2 & unaff_s3 | unaff_s0 & unaff_s4;
  *(int *)(unaff_s5 + -0xabc) = iVar1 + 0xc;
  return;
}

