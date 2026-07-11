// FUN_080219d8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080219d8(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = *(int *)(param_1 + 0x10);
  if (*(char *)(iVar11 + 0x5e) != '\0') {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = *(char *)(iVar11 + 1);
  *(char *)(param_1 + 1) = cVar1;
  if (cVar1 == '\0') {
    func_0x0007778c(param_1);
  }
  uVar7 = _DAT_1f8000fc;
  uVar6 = _DAT_1f8000fa;
  uVar5 = _DAT_1f8000f8;
  if (*(char *)(param_1 + 1) != '\0') {
    iVar10 = *(int *)(iVar11 + 0xc0);
    sVar8 = *(short *)(iVar10 + 0x2c) - (short)(*(short *)(iVar10 + 0x1a) * 3 >> 6);
    *(short *)(param_1 + 0x66) = sVar8;
    *(short *)(param_1 + 0x60) = sVar8;
    sVar8 = *(short *)(iVar10 + 0x30) - (short)(*(short *)(iVar10 + 0x20) * 3 >> 6);
    *(short *)(param_1 + 0x68) = sVar8;
    *(short *)(param_1 + 0x62) = sVar8;
    sVar9 = *(short *)(iVar10 + 0x34) - (short)(*(short *)(iVar10 + 0x26) * 3 >> 6);
    *(short *)(param_1 + 0x6a) = sVar9;
    *(short *)(param_1 + 100) = sVar9;
    uVar2 = *(undefined2 *)(iVar11 + 0x60);
    *(undefined2 *)(param_1 + 0x72) = uVar2;
    *(undefined2 *)(param_1 + 0x6c) = uVar2;
    uVar2 = *(undefined2 *)(iVar11 + 0x62);
    *(undefined2 *)(param_1 + 0x74) = uVar2;
    *(undefined2 *)(param_1 + 0x6e) = uVar2;
    sVar8 = *(short *)(iVar11 + 100);
    cVar1 = (char)((ushort)uVar5 >> 8);
    *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) - (short)cVar1;
    *(short *)(param_1 + 0x76) = sVar8;
    *(short *)(param_1 + 0x70) = sVar8;
    cVar3 = (char)((ushort)uVar6 >> 8);
    *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x62) - (short)cVar3;
    cVar4 = (char)((ushort)uVar7 >> 8);
    *(short *)(param_1 + 100) = sVar9 - cVar4;
    *(short *)(param_1 + 0x66) = *(short *)(param_1 + 0x66) + (short)cVar1;
    *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + (short)cVar3;
    *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + (short)cVar4;
    *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) - (short)cVar3;
    *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) - (short)cVar1;
    *(short *)(param_1 + 0x72) = *(short *)(param_1 + 0x72) + (short)cVar1;
    *(short *)(param_1 + 0x70) = sVar8 - cVar4;
    *(short *)(param_1 + 0x76) = sVar8 + cVar4;
    *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x74) + (short)cVar3;
  }
  return;
}

