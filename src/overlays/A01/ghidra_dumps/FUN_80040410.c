// FUN_80040410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80040410(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  
  *(undefined1 *)(param_1 + 8) = 2;
  if (_DAT_800ed098 < 2) {
    *(undefined1 *)(param_1 + 4) = 3;
    uVar1 = 0;
  }
  else {
    iVar6 = 0;
    *(undefined1 *)(param_1 + 9) = 2;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    if (*(char *)(param_1 + 8) != '\0') {
      iVar7 = (param_2 & 0xff) << 2;
      puVar5 = &DAT_800a3b1c;
      iVar4 = param_1;
      do {
        iVar2 = FUN_8007aae8();
        *(int *)(iVar4 + 0xc0) = iVar2;
        *(short *)(iVar2 + 6) = (short)iVar6 + -1;
        **(undefined2 **)(iVar4 + 0xc0) = *puVar5;
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 2) = puVar5[1];
        iVar6 = iVar6 + 1;
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 4) = puVar5[2];
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 8) = 0;
        puVar5 = puVar5 + 3;
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 10) = 0;
        psVar3 = (short *)(&DAT_800a3b28 + iVar7);
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0xc) = 0;
        iVar7 = iVar7 + 2;
        FUN_80051b04(*(undefined4 *)(iVar4 + 0xc0),1,(int)*psVar3);
        iVar4 = iVar4 + 4;
      } while (iVar6 < (int)(uint)*(byte *)(param_1 + 8));
    }
    uVar1 = 1;
  }
  return uVar1;
}

