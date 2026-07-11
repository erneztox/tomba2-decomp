// FUN_8010ada8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8010ada8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 8) = 2;
  if (_DAT_800ed098 < 2) {
    *(undefined1 *)(param_1 + 4) = 3;
    uVar1 = FUN_80113e98();
    return uVar1;
  }
  *(undefined1 *)(param_1 + 9) = 2;
  *(undefined1 *)(param_1 + 0xd) = 2;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0xb8) = 0x1500;
  *(undefined2 *)(param_1 + 0xba) = 0x1500;
  *(undefined2 *)(param_1 + 0xbc) = 0x1500;
  func_0x8004b354(param_1,1);
  iVar5 = 0;
  if (*(char *)(param_1 + 8) != '\0') {
    puVar4 = (undefined2 *)&DAT_80135b30;
    iVar3 = param_1;
    do {
      iVar2 = func_0x8007aae8();
      *(int *)(iVar3 + 0xc0) = iVar2;
      *(undefined2 *)(iVar2 + 6) = *puVar4;
      **(undefined2 **)(iVar3 + 0xc0) = puVar4[1];
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 2) = puVar4[2];
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 4) = puVar4[3];
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 8) = 0;
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0xc) = 0;
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0x38) = 0x1000;
      iVar2 = iVar5 + 0x16;
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0x3a) = 0x1000;
      iVar5 = iVar5 + 1;
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0x3c) = 0x1000;
      puVar4 = puVar4 + 4;
      func_0x80051b04(*(undefined4 *)(iVar3 + 0xc0),0xc,iVar2);
      iVar3 = iVar3 + 4;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 8));
  }
  return 1;
}

