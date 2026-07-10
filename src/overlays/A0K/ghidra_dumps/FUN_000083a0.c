// FUN_000083a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000083a0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)((uint)*(byte *)(param_1 + 0x5e) * 2 + -0x7fee34d0);
  if ((short)(ushort)*(byte *)(param_1 + 8) <= _DAT_800ed098) {
    *(undefined1 *)(param_1 + 0xb) = 1;
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 8);
    *(undefined1 *)(param_1 + 0xd) = 0;
    uVar1 = _DAT_801003f8;
    *(undefined2 *)(param_1 + 0x32) = 0xffd8;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x2e) = 0;
    *(undefined2 *)(param_1 + 0x36) = uVar1;
    puVar3 = *(undefined2 **)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fee34e4);
    iVar6 = 0;
    iVar5 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        iVar6 = iVar6 + 1;
        iVar2 = func_0x0007aae8();
        *(int *)(iVar5 + 0xc0) = iVar2;
        *(undefined2 *)(iVar2 + 6) = 0xffff;
        **(undefined2 **)(iVar5 + 0xc0) = *puVar3;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2) = puVar3[1];
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4) = puVar3[2];
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 8) = 0;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 10) = 0;
        psVar4 = puVar3 + 3;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0xc) = 0;
        puVar3 = puVar3 + 4;
        func_0x00051b04(*(undefined4 *)(iVar5 + 0xc0),0xc,(int)*psVar4);
        iVar5 = iVar5 + 4;
      } while (iVar6 < (int)(uint)*(byte *)(param_1 + 8));
    }
    return;
  }
  *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

