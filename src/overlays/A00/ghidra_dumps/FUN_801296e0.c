// FUN_801296e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_801296e0(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int unaff_s0;
  int unaff_s1;
  short *psVar4;
  undefined2 *puVar5;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  
  puVar5 = (undefined2 *)(unaff_s1 + 2);
  for (; unaff_s3 < (int)(uint)*(byte *)(unaff_s2 + 8); unaff_s3 = unaff_s3 + 1) {
    iVar3 = func_0x8007aae8();
    *(int *)(unaff_s0 + 0xc4) = iVar3;
    *(undefined2 *)(iVar3 + 6) = *puVar5;
    **(undefined2 **)(unaff_s0 + 0xc4) = puVar5[1];
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 2) = puVar5[2];
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 4) = puVar5[3];
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 8) = 0;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 10) = 0;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 0xc) = 0;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 0x38) = unaff_s4;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 0x3a) = unaff_s4;
    psVar4 = puVar5 + 4;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 0x3c) = unaff_s4;
    puVar5 = puVar5 + 5;
    func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc4),0xc,(int)*psVar4);
    unaff_s0 = unaff_s0 + 4;
  }
  *(undefined1 *)(*(int *)(unaff_s2 + 0xc0) + 0x3f) = 0x20;
  *(undefined1 *)(*(int *)(unaff_s2 + 0xc4) + 0x3f) = 0xf0;
  *(undefined1 *)(*(int *)(unaff_s2 + 200) + 0x3f) = 0xf0;
  *(undefined1 *)(unaff_s2 + 0x29) = 0;
  *(undefined1 *)(unaff_s2 + 0x2b) = 0;
  func_0x8004766c();
  func_0x80048750();
  uVar2 = _DAT_1f8001a2;
  uVar1 = _DAT_1f8001a0;
  *(undefined2 *)(unaff_s2 + 0x60) = _DAT_1f8001a0;
  *(undefined2 *)(unaff_s2 + 0x62) = uVar2;
  *(undefined2 *)(unaff_s2 + 0x56) = uVar1;
  *(undefined2 *)(*(int *)(unaff_s2 + 0xc0) + 10) = *(undefined2 *)(unaff_s2 + 0x7c);
  return 0;
}

