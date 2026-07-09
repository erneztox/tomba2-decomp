// FUN_8012df6c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012df6c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(*(byte *)(param_1 + 3) + 0x8014a9a4);
  if ((short)(ushort)*(byte *)(param_1 + 8) <= _DAT_800ed098) {
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 8);
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    puVar3 = *(undefined2 **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7feb566c);
    iVar6 = 0;
    iVar5 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        iVar2 = func_0x8007aae8();
        *(int *)(iVar5 + 0xc0) = iVar2;
        *(short *)(iVar2 + 6) = (short)iVar6 + -1;
        **(undefined2 **)(iVar5 + 0xc0) = *puVar3;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2) = puVar3[1];
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4) = puVar3[2];
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 8) = puVar3[3];
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 10) = puVar3[4];
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0xc) = puVar3[5];
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x38) = 0x1000;
        iVar6 = iVar6 + 1;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x3a) = 0x1000;
        psVar4 = puVar3 + 6;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x3c) = 0x1000;
        puVar3 = puVar3 + 7;
        func_0x80051b04(*(undefined4 *)(iVar5 + 0xc0),0x1c,(int)*psVar4);
        iVar5 = iVar5 + 4;
      } while (iVar6 < (int)(uint)*(byte *)(param_1 + 8));
    }
    *(undefined2 *)(param_1 + 0xbc) = 0x1000;
    *(undefined2 *)(param_1 + 0xba) = 0x1000;
    *(undefined2 *)(param_1 + 0xb8) = 0x1000;
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + **(short **)(param_1 + 0xc0);
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x32) + *(short *)(*(int *)(param_1 + 0xc0) + 2);
    *(short *)(param_1 + 0x36) =
         *(short *)(param_1 + 0x36) + *(short *)(*(int *)(param_1 + 0xc0) + 4);
    **(undefined2 **)(param_1 + 0xc0) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    func_0x80051c8c(param_1);
    if (*(char *)(param_1 + 3) != '\0') {
      FUN_80137e70(param_1,0xc,0);
    }
    *(undefined2 *)(param_1 + 0x62) =
         *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 8);
    *(undefined2 *)(param_1 + 100) =
         *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 10);
    uVar1 = *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0xc);
    *(undefined2 *)(param_1 + 0x68) = 0x1000;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x66) = uVar1;
    return;
  }
  *(undefined1 *)(param_1 + 4) = 3;
  FUN_80137178();
  return;
}

