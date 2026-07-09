// FUN_8013272c

undefined4 FUN_8013272c(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int in_v0;
  int in_v1;
  int unaff_s2;
  
  uVar1 = *(undefined2 *)(in_v0 + 0x1a0);
  uVar2 = *(undefined2 *)(in_v1 + 0x1a2);
  *(undefined2 *)(unaff_s2 + 0x60) = uVar1;
  *(undefined2 *)(unaff_s2 + 0x62) = uVar2;
  *(undefined2 *)(unaff_s2 + 0x56) = uVar1;
  *(undefined2 *)(*(int *)(unaff_s2 + 0xc0) + 10) = *(undefined2 *)(unaff_s2 + 0x7c);
  return 0;
}

