// FUN_0801eb1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801eb1c(int param_1,short *param_2,int *param_3,int param_4)

{
  undefined1 uVar1;
  short sVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  puVar4 = _DAT_800bf544;
  iVar7 = param_3[8];
  if (-1 < iVar7) {
    local_38 = 0;
    local_36 = 0;
    local_34 = 0;
    local_32 = 0;
    func_0x00083d40(_DAT_800bf544,&local_38);
    puVar3 = (uint *)(_DAT_800ed8c8 + iVar7 * 4);
    *puVar4 = *puVar3 | 0x2000000;
    *puVar3 = (uint)puVar4;
    puVar3 = puVar4 + 3;
    iVar6 = 0;
    if (0 < param_1 + -1) {
      puVar5 = (undefined1 *)((int)puVar4 + 0x29);
      do {
        if ((((-1 < *param_3) && (-1 < param_3[1])) && ((*param_2 < 0x140 || (param_2[2] < 0x140))))
           && ((param_2[1] < 0xf0 || (param_2[3] < 0xf0)))) {
          *(undefined4 *)(puVar5 + -0x19) = 0x2d808080;
          *(undefined2 *)(puVar5 + -0xf) = 0x3b3f;
          *(undefined2 *)(puVar5 + -7) = 0xe;
          sVar2 = *param_2;
          *(short *)(puVar5 + -5) = sVar2;
          *(short *)(puVar5 + -0x15) = sVar2;
          sVar2 = param_2[2];
          *(short *)(puVar5 + 3) = sVar2;
          *(short *)(puVar5 + -0xd) = sVar2;
          *(short *)(puVar5 + -0x13) = param_2[1];
          *(short *)(puVar5 + -0xb) = param_2[3];
          *(short *)(puVar5 + -3) = param_2[1] + 4;
          *(short *)(puVar5 + 5) = param_2[3] + 4;
          uVar1 = *(undefined1 *)(param_4 + iVar6);
          puVar5[-1] = uVar1;
          puVar5[-0x11] = uVar1;
          uVar1 = ((undefined1 *)(param_4 + iVar6))[1];
          puVar5[-8] = 0x40;
          puVar5[-0x10] = 0x40;
          puVar5[8] = 0x48;
          *puVar5 = 0x48;
          puVar5[7] = uVar1;
          puVar5[-9] = uVar1;
          puVar4 = (uint *)(_DAT_800ed8c8 + iVar7 * 4);
          *puVar3 = *puVar4 | 0x9000000;
          *puVar4 = (uint)puVar3;
          puVar5 = puVar5 + 0x28;
          puVar3 = puVar3 + 10;
        }
        param_2 = param_2 + 2;
        iVar6 = iVar6 + 1;
        param_3 = param_3 + 1;
      } while (iVar6 < param_1 + -1);
    }
    local_2e = 0x40;
    local_2c = 0x18;
    local_30 = 0;
    local_2a = 8;
    _DAT_800bf544 = puVar3;
    func_0x00083d40(puVar3,&local_30);
    puVar4 = (uint *)(_DAT_800ed8c8 + iVar7 * 4);
    *puVar3 = *puVar4 | 0x2000000;
    *puVar4 = (uint)puVar3;
    _DAT_800bf544 = puVar3 + 3;
  }
  return;
}

