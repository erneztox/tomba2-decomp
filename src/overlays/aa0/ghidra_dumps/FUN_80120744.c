// FUN_80120744

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80120744(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int unaff_s0;
  undefined2 *puVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = 4;
  if (1 < *(byte *)(param_1 + 3)) {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  if ((short)(ushort)*(byte *)(param_1 + 8) <= _DAT_800ed098) {
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 8);
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    puVar3 = *(undefined2 **)((uint)(*(byte *)(param_1 + 3) >> 1) * 4 + -0x7feb6144);
    iVar6 = 0;
    iVar5 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        iVar6 = iVar6 + 1;
        iVar2 = func_0x8007aae8();
        *(int *)(iVar5 + 0xc0) = iVar2;
        *(undefined2 *)(iVar2 + 6) = *puVar3;
        **(undefined2 **)(iVar5 + 0xc0) = 0;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2) = 0;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4) = 0;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 8) = puVar3[1];
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 10) = puVar3[2];
        psVar4 = puVar3 + 4;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0xc) = puVar3[3];
        puVar3 = puVar3 + 5;
        func_0x80051b04(*(undefined4 *)(iVar5 + 0xc0),0xc,(int)*psVar4);
        iVar5 = iVar5 + 4;
      } while (iVar6 < (int)(uint)*(byte *)(param_1 + 8));
    }
    return;
  }
  *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Subroutine does not return */
  FUN_801252c0(param_1,0,*(undefined1 *)(unaff_s0 + 3));
}

