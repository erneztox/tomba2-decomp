// FUN_80129600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80129600(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_s1;
  short *psVar6;
  undefined2 *puVar7;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (((((*(char *)(param_1 + 3) != '\x01') && (*(char *)(param_1 + 3) != '\x05')) ||
         (DAT_800bf89c == '\x02')) || (DAT_800e7eaa != '\x01')) && (_DAT_1f800160 < 0x4651)) {
      func_0x8007778c(param_1);
    }
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 2) {
      FUN_80132d58(param_1);
      uVar4 = FUN_801326d4();
      return uVar4;
    }
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        FUN_80132954(param_1);
        uVar4 = FUN_801326d4();
        return uVar4;
      }
      puVar7 = (undefined2 *)(unaff_s1 + 2);
      for (; unaff_s3 < (int)(uint)*(byte *)(unaff_s2 + 8); unaff_s3 = unaff_s3 + 1) {
        iVar5 = func_0x8007aae8();
        *(int *)(param_1 + 0xc4) = iVar5;
        *(undefined2 *)(iVar5 + 6) = *puVar7;
        **(undefined2 **)(param_1 + 0xc4) = puVar7[1];
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = puVar7[2];
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 4) = puVar7[3];
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38) = unaff_s4;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3a) = unaff_s4;
        psVar6 = puVar7 + 4;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3c) = unaff_s4;
        puVar7 = puVar7 + 5;
        func_0x80051b04(*(undefined4 *)(param_1 + 0xc4),0xc,(int)*psVar6);
        param_1 = param_1 + 4;
      }
      *(undefined1 *)(*(int *)(unaff_s2 + 0xc0) + 0x3f) = 0x20;
      *(undefined1 *)(*(int *)(unaff_s2 + 0xc4) + 0x3f) = 0xf0;
      *(undefined1 *)(*(int *)(unaff_s2 + 200) + 0x3f) = 0xf0;
      *(undefined1 *)(unaff_s2 + 0x29) = 0;
      *(undefined1 *)(unaff_s2 + 0x2b) = 0;
      func_0x8004766c();
    }
    else {
      if (bVar1 == 3) {
        FUN_80132edc(param_1);
        uVar4 = FUN_801326d4();
        return uVar4;
      }
      if (bVar1 != 4) {
        uVar4 = FUN_801326d4();
        return uVar4;
      }
      FUN_80133500(param_1);
      FUN_80133550(param_1);
      FUN_80132a88(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
      if (*(char *)(param_1 + 1) == '\0') {
        return 0;
      }
      func_0x800518fc(param_1);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_8013272c(param_1);
    }
  }
  else if (bVar1 == 2) {
    FUN_80133184(param_1);
  }
  else if (bVar1 == 3) {
    uVar4 = func_0x8007a624(param_1);
    return uVar4;
  }
  func_0x80048750();
  uVar3 = _DAT_1f8001a2;
  uVar2 = _DAT_1f8001a0;
  *(undefined2 *)(unaff_s2 + 0x60) = _DAT_1f8001a0;
  *(undefined2 *)(unaff_s2 + 0x62) = uVar3;
  *(undefined2 *)(unaff_s2 + 0x56) = uVar2;
  *(undefined2 *)(*(int *)(unaff_s2 + 0xc0) + 10) = *(undefined2 *)(unaff_s2 + 0x7c);
  return 0;
}

