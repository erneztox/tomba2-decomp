// FUN_8010b3e4

/* WARNING: Removing unreachable block (ram,0x8011d538) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010b3e4(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  
  *(undefined1 *)(param_1 + 8) = 5;
  if (4 < _DAT_800ed098) {
    *(undefined1 *)(param_1 + 9) = 5;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xb) = 0;
    iVar3 = 0;
    if ((DAT_800bf908 == -1) && (DAT_800bf907 == -1)) {
      iVar3 = 0x11;
    }
    iVar6 = 0;
    *(undefined1 *)(param_1 + 0x46) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0x400;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_1 + 0x36);
    if (*(char *)(param_1 + 8) != '\0') {
      puVar5 = (undefined2 *)&DAT_80135b6c;
      iVar4 = param_1;
      do {
        iVar6 = iVar6 + 1;
        iVar2 = func_0x8007aae8();
        *(int *)(iVar4 + 0xc0) = iVar2;
        *(undefined2 *)(iVar2 + 6) = *puVar5;
        **(undefined2 **)(iVar4 + 0xc0) = puVar5[1];
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 2) = puVar5[2];
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 4) = puVar5[3];
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 8) = 0;
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 10) = 0;
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0xc) = 0;
        psVar1 = puVar5 + 4;
        puVar5 = puVar5 + 5;
        func_0x80051b04(*(undefined4 *)(iVar4 + 0xc0),0xc,*psVar1 + iVar3);
        *(undefined1 *)(*(int *)(iVar4 + 0xc0) + 0x3f) = 0xe;
        iVar4 = iVar4 + 4;
      } while (iVar6 < (int)(uint)*(byte *)(param_1 + 8));
    }
    return;
  }
  *(undefined1 *)(param_1 + 4) = 3;
  *(undefined2 *)(param_1 + 0x74) = 3;
  func_0x800735f4(param_1,0x67);
  return;
}

