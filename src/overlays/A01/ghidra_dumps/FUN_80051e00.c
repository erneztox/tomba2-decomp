// FUN_80051e00

void FUN_80051e00(void)

{
  int in_zero;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  
  puVar4 = (undefined2 *)&DAT_801fe000;
  iVar3 = 0;
  iVar2 = -0x7fe01600;
  puVar1 = &DAT_801fe06f;
  iVar5 = *(int *)(in_zero + 0x110);
  do {
    *puVar4 = 0;
    *(int *)(puVar1 + -0x67) = iVar2;
    puVar1[-3] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x70;
    puVar4 = puVar4 + 0x38;
    iVar2 = iVar2 + 0x800;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar5 + 0x154) = 0x40000404;
    iVar5 = iVar5 + 0xc0;
  } while (iVar3 < 3);
  return;
}

