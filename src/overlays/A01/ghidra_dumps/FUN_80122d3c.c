// FUN_80122d3c

void FUN_80122d3c(int param_1)

{
  int in_v0;
  int iVar1;
  int in_v1;
  int iVar2;
  int unaff_s0;
  
  *(short *)(unaff_s0 + 0x2e) = (short)((in_v0 + in_v1) / 2);
  *(short *)(unaff_s0 + 0x32) =
       (short)((*(int *)(*(int *)(param_1 + 0xd0) + 0x30) +
               *(int *)(*(int *)(param_1 + 0xdc) + 0x30)) / 2);
  iVar1 = *(int *)(*(int *)(param_1 + 0xd0) + 0x34);
  iVar2 = *(int *)(*(int *)(param_1 + 0xdc) + 0x34);
  *(undefined2 *)(unaff_s0 + 0x80) = 0x40;
  *(undefined2 *)(unaff_s0 + 0x82) = 0x80;
  *(undefined2 *)(unaff_s0 + 0x84) = 0x8c;
  *(undefined2 *)(unaff_s0 + 0x86) = 0x8c;
  *(short *)(unaff_s0 + 0x36) = (short)((iVar1 + iVar2) / 2);
  FUN_8012bdf4();
  return;
}

