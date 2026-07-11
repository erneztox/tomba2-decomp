// FUN_80124fb4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80124fb4(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  short *psVar5;
  int iVar6;
  int unaff_s2;
  int iVar7;
  
  uVar3 = (uint)*(byte *)(param_1 + 5);
  iVar6 = *(int *)(param_1 + 0x10);
  if (uVar3 == 0) {
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
    func_0x80077b38(param_1,0x8014c808,2);
    *(undefined2 *)(param_1 + 0x60) = 0x20;
    *(undefined2 *)(param_1 + 0x62) = 0x10;
    *(undefined2 *)(param_1 + 100) = 0;
  }
  else if (uVar3 != 1) {
    *(undefined1 *)(unaff_s2 + 0xd) = 0;
    *(undefined1 *)(unaff_s2 + 0xb) = 0;
    puVar4 = *(undefined2 **)(uVar3 - 0x5668);
    iVar7 = 0;
    iVar6 = unaff_s2;
    if (*(char *)(unaff_s2 + 8) != '\0') {
      do {
        iVar2 = func_0x8007aae8();
        *(int *)(iVar6 + 0xc0) = iVar2;
        *(short *)(iVar2 + 6) = (short)iVar7 + -1;
        **(undefined2 **)(iVar6 + 0xc0) = *puVar4;
        *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 2) = puVar4[1];
        *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 4) = puVar4[2];
        *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 8) = puVar4[3];
        *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 10) = puVar4[4];
        *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 0xc) = puVar4[5];
        *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 0x38) = 0x1000;
        iVar7 = iVar7 + 1;
        *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 0x3a) = 0x1000;
        psVar5 = puVar4 + 6;
        *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 0x3c) = 0x1000;
        puVar4 = puVar4 + 7;
        func_0x80051b04(*(undefined4 *)(iVar6 + 0xc0),0x1c,(int)*psVar5);
        iVar6 = iVar6 + 4;
      } while (iVar7 < (int)(uint)*(byte *)(unaff_s2 + 8));
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
  func_0x8004bd64(param_1,1,*(undefined4 *)(iVar6 + 0xdc),0,param_1 + 0x60);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar6 + 1);
  return;
}

