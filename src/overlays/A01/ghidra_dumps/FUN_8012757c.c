// FUN_8012757c

void FUN_8012757c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int in_v0;
  int iVar2;
  uint uVar3;
  int in_t0;
  int in_t1;
  int in_t3;
  int in_t6;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  iVar2 = *(int *)(unaff_s2 + 0x84);
  uVar3 = in_v0 * in_t6 + 0x3039;
  *(uint *)(in_t3 + 0x80) = uVar3;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  setCopReg(2,0x4000,(iVar2 >> 2) + (uVar3 >> 0x16));
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x2d));
  copFunction(2,0x780010);
  uVar1 = getCopReg(2,0x16);
  *param_1 = uVar1;
  iVar2 = *(int *)(unaff_s1 + 0x88);
  uVar3 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
  *(uint *)(in_t3 + 0x80) = uVar3;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  setCopReg(2,0x4000,(iVar2 >> 2) + (uVar3 >> 0x16));
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x21));
  copFunction(2,0x780010);
  uVar1 = getCopReg(2,0x16);
  *(undefined4 *)(in_t1 + 0x10) = uVar1;
  iVar2 = *(int *)(unaff_s0 + 0x8c);
  uVar3 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
  *(uint *)(in_t3 + 0x80) = uVar3;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  setCopReg(2,0x4000,(iVar2 >> 2) + (uVar3 >> 0x16));
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x15));
  copFunction(2,0x780010);
  uVar1 = getCopReg(2,0x16);
  *(undefined4 *)(in_t1 + 0x1c) = uVar1;
  iVar2 = *(int *)(param_2 + 0x90);
  uVar3 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
  *(uint *)(in_t3 + 0x80) = uVar3;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  setCopReg(2,0x4000,(iVar2 >> 2) + (uVar3 >> 0x16));
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -9));
  copFunction(2,0x780010);
  uVar1 = getCopReg(2,0x16);
  *(undefined4 *)(in_t1 + 0x28) = uVar1;
  FUN_8013071c();
  return;
}

