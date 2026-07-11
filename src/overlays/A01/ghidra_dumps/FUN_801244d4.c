// FUN_801244d4

/* WARNING: Control flow encountered bad instruction data */

void FUN_801244d4(void)

{
  int in_v0;
  int iVar1;
  int iVar2;
  int unaff_s1;
  undefined2 uStack00000012;
  
  *(byte *)(in_v0 + 0x28) = *(byte *)(in_v0 + 0x28) | 0x80;
  func_0x80027144(*(undefined4 *)(*(int *)(unaff_s1 + 0xc0) + 0x40),&stack0x00000010,0x800,8);
  func_0x80074590(0xc,0,0);
  iVar2 = unaff_s1 + 0x2c;
  func_0x80027144(*(undefined4 *)(*(int *)(unaff_s1 + 0xc0) + 0x40),iVar2,0x600,0x18);
  func_0x80074590(0xc,0,0);
  uStack00000012 = *(undefined2 *)(*(int *)(unaff_s1 + 0xc4) + 0x34);
  iVar1 = func_0x8003116c(0x24,&stack0x00000010,0xffffffce);
  *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  func_0x80027144(*(undefined4 *)(*(int *)(unaff_s1 + 0xc4) + 0x40),iVar2,0x800,8);
  func_0x80074590(0xc,0,0);
  func_0x80027144(*(undefined4 *)(*(int *)(unaff_s1 + 0xc4) + 0x40),iVar2,0x600,0x18);
  func_0x80074590(0xc,0,0);
  uStack00000012 = *(undefined2 *)(*(int *)(unaff_s1 + 0xcc) + 0x34);
  iVar1 = func_0x8003116c(0x24,&stack0x00000010,0xffffffce);
  *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  func_0x80027144(*(undefined4 *)(*(int *)(unaff_s1 + 200) + 0x40),iVar2,0x800,8);
  func_0x80074590(0xc,0,0);
  func_0x80027144(*(undefined4 *)(*(int *)(unaff_s1 + 200) + 0x40),iVar2,0x600,0x18);
  func_0x80074590(0xc,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

