
void FUN_80076904(int param_1)

{
  bool bVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = *(uint *)((uint)**(ushort **)(param_1 + 0x38) * 4 + *(int *)(param_1 + 0x3c));
  pbVar3 = (byte *)(*(int *)(param_1 + 0x3c) + (uVar7 & 0xffffff));
  *(char *)(param_1 + 8) = (char)(uVar7 >> 0x18);
  if (((int)uVar7 >> 0x18 & 0x40U) == 0) {
    bVar1 = (*(byte *)(param_1 + 8) & 0x80) != 0;
    if (bVar1) {
      uVar2 = (ushort)((int)((uint)*pbVar3 << 0x18) >> 0x14);
      *(ushort *)(param_1 + 0x88) = uVar2;
      *(ushort *)(param_1 + 0x88) = uVar2 | pbVar3[1] >> 4;
      uVar2 = (ushort)((int)((uint)pbVar3[1] << 0x1c) >> 0x14);
      *(ushort *)(param_1 + 0x8a) = uVar2;
      pbVar4 = pbVar3 + 3;
      *(ushort *)(param_1 + 0x8a) = uVar2 | pbVar3[2];
      pbVar3 = pbVar3 + 4;
      uVar2 = (ushort)((int)((uint)*pbVar4 << 0x18) >> 0x14);
      *(ushort *)(param_1 + 0x8c) = uVar2;
      *(ushort *)(param_1 + 0x8c) = uVar2 | *pbVar3 >> 4;
    }
    iVar5 = 0;
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0x3f;
    iVar6 = param_1;
    if (*(char *)(param_1 + 9) != '\0') {
      do {
        if ((int)(uint)*(byte *)(param_1 + 8) <= iVar5) {
          return;
        }
        if ((iVar5 + (uint)bVar1 & 1) == 0) {
          *(ushort *)(*(int *)(iVar6 + 0xc0) + 8) = (ushort)*pbVar3 << 4;
          *(ushort *)(*(int *)(iVar6 + 0xc0) + 8) =
               *(ushort *)(*(int *)(iVar6 + 0xc0) + 8) | (ushort)(pbVar3[1] >> 4);
          *(ushort *)(*(int *)(iVar6 + 0xc0) + 10) = (pbVar3[1] & 0xf) << 8;
          pbVar4 = pbVar3 + 3;
          *(ushort *)(*(int *)(iVar6 + 0xc0) + 10) =
               *(ushort *)(*(int *)(iVar6 + 0xc0) + 10) | (ushort)pbVar3[2];
          pbVar3 = pbVar3 + 4;
          *(ushort *)(*(int *)(iVar6 + 0xc0) + 0xc) = (ushort)*pbVar4 << 4;
          *(ushort *)(*(int *)(iVar6 + 0xc0) + 0xc) =
               *(ushort *)(*(int *)(iVar6 + 0xc0) + 0xc) | (ushort)(*pbVar3 >> 4);
        }
        else {
          *(ushort *)(*(int *)(iVar6 + 0xc0) + 8) = (*pbVar3 & 0xf) << 8;
          *(ushort *)(*(int *)(iVar6 + 0xc0) + 8) =
               *(ushort *)(*(int *)(iVar6 + 0xc0) + 8) | (ushort)pbVar3[1];
          *(ushort *)(*(int *)(iVar6 + 0xc0) + 10) = (ushort)pbVar3[2] << 4;
          *(ushort *)(*(int *)(iVar6 + 0xc0) + 10) =
               *(ushort *)(*(int *)(iVar6 + 0xc0) + 10) | (ushort)(pbVar3[3] >> 4);
          pbVar4 = pbVar3 + 4;
          *(ushort *)(*(int *)(iVar6 + 0xc0) + 0xc) = (pbVar3[3] & 0xf) << 8;
          pbVar3 = pbVar3 + 5;
          *(ushort *)(*(int *)(iVar6 + 0xc0) + 0xc) =
               *(ushort *)(*(int *)(iVar6 + 0xc0) + 0xc) | (ushort)*pbVar4;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar5 < (int)(uint)*(byte *)(param_1 + 9));
    }
  }
  else {
    iVar6 = 0;
    if (((int)uVar7 >> 0x18 & 0x80U) != 0) {
      uVar2 = (ushort)((int)((uint)*pbVar3 << 0x18) >> 0x14);
      *(ushort *)(param_1 + 0x88) = uVar2;
      *(ushort *)(param_1 + 0x88) = uVar2 | pbVar3[1] >> 4;
      uVar2 = (ushort)((int)((uint)pbVar3[1] << 0x1c) >> 0x14);
      *(ushort *)(param_1 + 0x8a) = uVar2;
      *(ushort *)(param_1 + 0x8a) = uVar2 | pbVar3[2];
      pbVar4 = pbVar3 + 4;
      uVar2 = (ushort)((int)((uint)pbVar3[3] << 0x18) >> 0x14);
      *(ushort *)(param_1 + 0x8c) = uVar2;
      pbVar3 = pbVar3 + 9;
      *(ushort *)(param_1 + 0x8c) = uVar2 | *pbVar4 >> 4;
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0x3f;
    iVar5 = param_1;
    if (*(char *)(param_1 + 9) != '\0') {
      do {
        bVar1 = (int)(uint)*(byte *)(param_1 + 8) <= iVar6;
        iVar6 = iVar6 + 1;
        if (bVar1) {
          return;
        }
        *(ushort *)(*(int *)(iVar5 + 0xc0) + 8) = (ushort)*pbVar3 << 4;
        *(ushort *)(*(int *)(iVar5 + 0xc0) + 8) =
             *(ushort *)(*(int *)(iVar5 + 0xc0) + 8) | (ushort)(pbVar3[1] >> 4);
        *(ushort *)(*(int *)(iVar5 + 0xc0) + 10) = (pbVar3[1] & 0xf) << 8;
        *(ushort *)(*(int *)(iVar5 + 0xc0) + 10) =
             *(ushort *)(*(int *)(iVar5 + 0xc0) + 10) | (ushort)pbVar3[2];
        *(ushort *)(*(int *)(iVar5 + 0xc0) + 0xc) = (ushort)pbVar3[3] << 4;
        *(ushort *)(*(int *)(iVar5 + 0xc0) + 0xc) =
             *(ushort *)(*(int *)(iVar5 + 0xc0) + 0xc) | (ushort)(pbVar3[4] >> 4);
        *(ushort *)(*(int *)(iVar5 + 0xc0) + 0x38) = (pbVar3[4] & 0xf) << 8;
        *(ushort *)(*(int *)(iVar5 + 0xc0) + 0x38) =
             *(ushort *)(*(int *)(iVar5 + 0xc0) + 0x38) | (ushort)pbVar3[5];
        *(short *)(*(int *)(iVar5 + 0xc0) + 0x38) = *(short *)(*(int *)(iVar5 + 0xc0) + 0x38) << 3;
        *(ushort *)(*(int *)(iVar5 + 0xc0) + 0x3a) = (ushort)pbVar3[6] << 4;
        *(ushort *)(*(int *)(iVar5 + 0xc0) + 0x3a) =
             *(ushort *)(*(int *)(iVar5 + 0xc0) + 0x3a) | (ushort)(pbVar3[7] >> 4);
        *(short *)(*(int *)(iVar5 + 0xc0) + 0x3a) = *(short *)(*(int *)(iVar5 + 0xc0) + 0x3a) << 3;
        *(ushort *)(*(int *)(iVar5 + 0xc0) + 0x3c) = (pbVar3[7] & 0xf) << 8;
        *(ushort *)(*(int *)(iVar5 + 0xc0) + 0x3c) =
             *(ushort *)(*(int *)(iVar5 + 0xc0) + 0x3c) | (ushort)pbVar3[8];
        pbVar3 = pbVar3 + 9;
        *(short *)(*(int *)(iVar5 + 0xc0) + 0x3c) = *(short *)(*(int *)(iVar5 + 0xc0) + 0x3c) << 3;
        iVar5 = iVar5 + 4;
      } while (iVar6 < (int)(uint)*(byte *)(param_1 + 9));
    }
  }
  return;
}

