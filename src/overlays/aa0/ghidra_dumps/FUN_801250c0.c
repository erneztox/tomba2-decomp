// FUN_801250c0

void FUN_801250c0(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  
  iVar2 = func_0x80051b70(param_1,0xc,0x4f);
  if (iVar2 == 0) {
    if (*(char *)((int)param_1 + 3) == '\x03') goto LAB_8012e0b0;
    iVar2 = unaff_s1;
    if (*(char *)((int)param_1 + 3) != '\x04') {
      while (unaff_s1 = iVar2 + 4, unaff_s3 < (int)(uint)*(byte *)(unaff_s2 + 8)) {
        iVar3 = func_0x8007aae8();
        *(int *)(iVar2 + 0xc4) = iVar3;
        *(short *)(iVar3 + 6) = (short)unaff_s3 + -1;
        **(undefined2 **)(iVar2 + 0xc4) = *param_1;
        *(undefined2 *)(*(int *)(iVar2 + 0xc4) + 2) = param_1[1];
        *(undefined2 *)(*(int *)(iVar2 + 0xc4) + 4) = param_1[2];
        *(undefined2 *)(*(int *)(iVar2 + 0xc4) + 8) = param_1[3];
        *(undefined2 *)(*(int *)(iVar2 + 0xc4) + 10) = param_1[4];
        *(undefined2 *)(*(int *)(iVar2 + 0xc4) + 0xc) = param_1[5];
        *(undefined2 *)(*(int *)(iVar2 + 0xc4) + 0x38) = unaff_s4;
        unaff_s3 = unaff_s3 + 1;
        *(undefined2 *)(*(int *)(iVar2 + 0xc4) + 0x3a) = unaff_s4;
        param_1 = param_1 + 6;
        *(undefined2 *)(*(int *)(iVar2 + 0xc4) + 0x3c) = unaff_s4;
LAB_8012e0b0:
        param_1 = param_1 + 1;
        func_0x80051b04();
        iVar2 = unaff_s1;
      }
      *(undefined2 *)(unaff_s2 + 0xbc) = 0x1000;
      *(undefined2 *)(unaff_s2 + 0xba) = 0x1000;
      *(undefined2 *)(unaff_s2 + 0xb8) = 0x1000;
      *(short *)(unaff_s2 + 0x2e) = *(short *)(unaff_s2 + 0x2e) + **(short **)(unaff_s2 + 0xc0);
      *(short *)(unaff_s2 + 0x32) =
           *(short *)(unaff_s2 + 0x32) + *(short *)(*(int *)(unaff_s2 + 0xc0) + 2);
      *(short *)(unaff_s2 + 0x36) =
           *(short *)(unaff_s2 + 0x36) + *(short *)(*(int *)(unaff_s2 + 0xc0) + 4);
      **(undefined2 **)(unaff_s2 + 0xc0) = 0;
      *(undefined2 *)(*(int *)(unaff_s2 + 0xc0) + 2) = 0;
      *(undefined2 *)(*(int *)(unaff_s2 + 0xc0) + 4) = 0;
      *(undefined4 *)(unaff_s2 + 0x54) = 0;
      *(undefined4 *)(unaff_s2 + 0x58) = 0;
      func_0x80051c8c();
      if (*(char *)(unaff_s2 + 3) != '\0') {
        FUN_80137e70();
      }
      *(undefined2 *)(unaff_s2 + 0x62) =
           *(undefined2 *)(*(int *)(unaff_s2 + (*(byte *)(unaff_s2 + 9) - 1) * 4 + 0xc0) + 8);
      *(undefined2 *)(unaff_s2 + 100) =
           *(undefined2 *)(*(int *)(unaff_s2 + (*(byte *)(unaff_s2 + 9) - 1) * 4 + 0xc0) + 10);
      uVar1 = *(undefined2 *)(*(int *)(unaff_s2 + (*(byte *)(unaff_s2 + 9) - 1) * 4 + 0xc0) + 0xc);
      *(undefined2 *)(unaff_s2 + 0x68) = 0x1000;
      *(undefined2 *)(unaff_s2 + 0x6a) = 0;
      *(undefined2 *)(unaff_s2 + 0x66) = uVar1;
      return;
    }
    *(undefined2 *)(*(int *)(param_1 + 0x60) + 8) = 0xff4a;
    func_0x800517f8(param_1);
  }
  return;
}

