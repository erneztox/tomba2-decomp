// FUN_0801f8e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f8e4(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  param_1[8] = *(undefined1 *)((uint)(byte)param_1[3] * 2 + -0x7fed5eec);
  cVar3 = '\x03';
  if ((short)(ushort)(byte)param_1[8] <= _DAT_800ed098) {
    iVar7 = 0;
    param_1[9] = param_1[8];
    iVar1 = _DAT_800ecfc8;
    param_1[0xd] = 0;
    param_1[0xb] = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    puVar5 = *(undefined2 **)((uint)(byte)param_1[3] * 4 + -0x7fed5f00);
    puVar6 = param_1;
    if (param_1[8] != '\0') {
      do {
        iVar7 = iVar7 + 1;
        iVar4 = func_0x0007aae8();
        *(int *)(puVar6 + 0xc0) = iVar4;
        *(undefined2 *)(iVar4 + 6) = *puVar5;
        **(undefined2 **)(puVar6 + 0xc0) = puVar5[1];
        *(undefined2 *)(*(int *)(puVar6 + 0xc0) + 2) = puVar5[2];
        *(undefined2 *)(*(int *)(puVar6 + 0xc0) + 4) = puVar5[3];
        *(undefined2 *)(*(int *)(puVar6 + 0xc0) + 8) = puVar5[4];
        *(undefined2 *)(*(int *)(puVar6 + 0xc0) + 10) = puVar5[5];
        *(undefined2 *)(*(int *)(puVar6 + 0xc0) + 0xc) = puVar5[6];
        *(int *)(*(int *)(puVar6 + 0xc0) + 0x40) =
             iVar1 + *(int *)((short)puVar5[7] * 4 + iVar1 + 4);
        *(undefined2 *)(*(int *)(puVar6 + 0xc0) + 0x38) = 0x1000;
        *(undefined2 *)(*(int *)(puVar6 + 0xc0) + 0x3a) = 0x1000;
        puVar5 = puVar5 + 8;
        *(undefined2 *)(*(int *)(puVar6 + 0xc0) + 0x3c) = 0x1000;
        puVar6 = puVar6 + 4;
      } while (iVar7 < (int)(uint)(byte)param_1[8]);
    }
    *(undefined2 *)(param_1 + 0xb8) = 0x1000;
    *(undefined2 *)(param_1 + 0xba) = 0x1000;
    *(undefined2 *)(param_1 + 0xbc) = 0x1000;
    *(undefined2 *)(param_1 + 0x88) = 0;
    *(undefined2 *)(param_1 + 0x8a) = 0;
    *(undefined2 *)(param_1 + 0x8c) = 0;
    uVar2 = _DAT_800ecfcc;
    param_1[0x5e] = 0;
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    if ((byte)param_1[3] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801fab4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef69a4))();
      return;
    }
    *param_1 = 1;
    cVar3 = param_1[4] + '\x01';
  }
  param_1[4] = cVar3;
  return;
}

