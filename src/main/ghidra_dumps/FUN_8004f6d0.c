
void FUN_8004f6d0(int param_1)

{
  short sVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  short *psVar6;
  undefined2 *puVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  
  iVar8 = 0;
  psVar9 = (short *)(param_1 + 0xc);
  iVar10 = 0;
  iVar4 = (int)*(short *)(param_1 + 8);
  iVar11 = 0;
  if (0 < iVar4) {
    puVar7 = (undefined2 *)(param_1 + 0x10);
    do {
      if (2 < *(byte *)(puVar7 + 2)) {
        iVar11 = iVar11 + 1;
      }
      bVar2 = *(byte *)(puVar7 + 3);
      if (bVar2 == 1) {
        bVar2 = *(char *)((int)puVar7 + 7) + 2;
        *(byte *)((int)puVar7 + 7) = bVar2;
        psVar6 = psVar9 + 8;
        if (7 < bVar2) {
          puVar5 = (undefined1 *)((int)psVar9 + 0x3d);
          iVar4 = 0;
          do {
            uVar3 = *puVar5;
            puVar5 = puVar5 + 1;
            iVar4 = iVar4 + 1;
            *(undefined1 *)psVar6 = uVar3;
            psVar6 = (short *)((int)psVar6 + 1);
          } while (iVar4 < 0x2d);
          iVar8 = iVar8 + 1;
          *(undefined1 *)((int)puVar7 + 0x39) = 0xff;
          *(undefined1 *)((int)puVar7 + 7) = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
        }
      }
      else if (bVar2 < 2) {
        if (bVar2 == 0) {
          iVar8 = iVar8 + 1;
        }
      }
      else if (bVar2 == 2) {
        sVar1 = puVar7[5];
        puVar7[5] = sVar1 - 0x100U;
        if ((int)((uint)(ushort)(sVar1 - 0x100U) << 0x10) < 0) {
          iVar8 = iVar8 + 1;
          puVar7[5] = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
        }
        iVar4 = FUN_80083e80((int)(short)puVar7[5]);
        iVar4 = iVar4 * (short)puVar7[4];
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        *puVar7 = (short)(iVar4 >> 0xc);
        iVar4 = (iVar4 >> 0xc) << 0x10;
        *psVar9 = 0xa0 - (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
      }
      iVar10 = iVar10 + 1;
      puVar7 = puVar7 + 0x46;
      psVar9 = psVar9 + 0x46;
    } while (iVar10 < *(short *)(param_1 + 8));
    iVar4 = (int)*(short *)(param_1 + 8);
  }
  if (iVar8 == iVar4) {
    if (iVar11 != 0) {
      FUN_8004ee88(param_1);
      iVar4 = (int)*(short *)(param_1 + 8);
    }
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    else {
      uVar3 = 2;
      if (*(short *)(param_1 + 10) != 0) {
        FUN_8004f378(param_1);
        uVar3 = 1;
      }
      *(undefined2 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 1) = uVar3;
    }
  }
  return;
}

