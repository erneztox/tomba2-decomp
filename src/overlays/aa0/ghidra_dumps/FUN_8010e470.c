// FUN_8010e470

undefined4 FUN_8010e470(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int unaff_s1;
  int unaff_s6;
  
  uVar3 = 0x81;
  uVar4 = 5;
  iVar1 = func_0x80072ddc();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 1;
    *(char *)(iVar1 + 0x5e) = (char)param_2;
    *(undefined4 *)(iVar1 + 0x1c) = 0x80117228;
    if (iVar1 == 0) {
      trap(0x1c00);
    }
    if ((iVar1 == -1) && (param_2 << 8 == -0x80000000)) {
      trap(0x1800);
    }
    iVar2 = (unaff_s6 << 0x10) >> 8;
    if (iVar1 == 0) {
      trap(0x1c00);
    }
    if ((iVar1 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    *(undefined2 *)(unaff_s1 + 0x40) = 4;
    *(undefined2 *)(unaff_s1 + 0x42) = uVar4;
    *(undefined2 *)(unaff_s1 + 0x48) = uVar3;
    *(short *)(unaff_s1 + 0x4a) = (short)((param_2 << 8) / iVar1);
    *(short *)(unaff_s1 + 0x4c) = (short)(iVar2 / iVar1);
    return 1;
  }
  return 0;
}

