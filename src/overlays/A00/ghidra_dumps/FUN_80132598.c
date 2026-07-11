// FUN_80132598

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80132598(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  
  *(undefined1 *)(param_1 + 8) = 3;
  if (2 < _DAT_800ed098) {
    iVar7 = 0;
    *(undefined1 *)(param_1 + 9) = 3;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined2 *)(param_1 + 0x80) = 0x80;
    *(undefined2 *)(param_1 + 0x82) = 0x100;
    *(undefined2 *)(param_1 + 0x84) = 0xdc;
    *(undefined2 *)(param_1 + 0x86) = 0x1c2;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0x1000;
    *(undefined2 *)(param_1 + 0xba) = 0x1000;
    *(undefined2 *)(param_1 + 0xbc) = 0x1000;
    iVar5 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        iVar7 = iVar7 + 1;
        iVar4 = func_0x8007aae8();
        *(int *)(iVar5 + 0xc0) = iVar4;
        *(undefined2 *)(iVar4 + 6) = *param_2;
        **(undefined2 **)(iVar5 + 0xc0) = param_2[1];
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2) = param_2[2];
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4) = param_2[3];
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 8) = 0;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 10) = 0;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0xc) = 0;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x38) = 0x1000;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x3a) = 0x1000;
        psVar6 = param_2 + 4;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x3c) = 0x1000;
        param_2 = param_2 + 5;
        func_0x80051b04(*(undefined4 *)(iVar5 + 0xc0),0xc,(int)*psVar6);
        iVar5 = iVar5 + 4;
      } while (iVar7 < (int)(uint)*(byte *)(param_1 + 8));
    }
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x20;
    *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0x3f) = 0xf0;
    *(undefined1 *)(*(int *)(param_1 + 200) + 0x3f) = 0xf0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x2b) = 0;
    func_0x8004766c(param_1);
    func_0x80048750(param_1);
    uVar2 = _DAT_1f8001a2;
    uVar1 = _DAT_1f8001a0;
    *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
    *(undefined2 *)(param_1 + 0x62) = uVar2;
    *(undefined2 *)(param_1 + 0x56) = uVar1;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = *(undefined2 *)(param_1 + 0x7c);
    return 0;
  }
  uVar3 = FUN_8013b6ec();
  return uVar3;
}

