// FUN_8010af1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010af1c(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 8) = 2;
  if (1 < _DAT_800ed098) {
    iVar5 = 0x23;
    *(undefined1 *)(param_1 + 9) = 2;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    if (*(char *)(param_1 + 3) == '\x01') {
      iVar5 = 0x1c;
    }
    puVar2 = *(undefined2 **)((*(byte *)(param_1 + 3) - 1) * 4 + -0x7feca4a0);
    iVar4 = 0;
    iVar3 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        iVar1 = func_0x8007aae8();
        *(int *)(iVar3 + 0xc0) = iVar1;
        *(undefined2 *)(iVar1 + 6) = *puVar2;
        **(undefined2 **)(iVar3 + 0xc0) = puVar2[1];
        *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 2) = puVar2[2];
        *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 4) = puVar2[3];
        iVar1 = iVar5 + iVar4;
        *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 8) = 0;
        iVar4 = iVar4 + 1;
        *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 10) = 0;
        *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0xc) = 0;
        puVar2 = puVar2 + 4;
        func_0x80051b04(*(undefined4 *)(iVar3 + 0xc0),0xc,iVar1);
        iVar3 = iVar3 + 4;
      } while (iVar4 < (int)(uint)*(byte *)(param_1 + 8));
    }
    *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0x3f) = 0xf0;
    return;
  }
  *(undefined1 *)(param_1 + 4) = 3;
  return;
}

