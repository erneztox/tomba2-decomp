// FUN_08045ee8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08045ee8(byte *param_1)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  puVar5 = _DAT_800ecf84;
  if ((_DAT_800bfe56 & 0x10) != 0) {
    bVar2 = *param_1;
    if (bVar2 == 1) {
      iVar7 = ((int)(*(ushort *)(param_1 + 0x2c) + 0x140) >> 1) -
              ((int)((int)_DAT_1f8000f2 * (uint)*(ushort *)(param_1 + 0x2c)) >> 0xc);
      if (iVar7 < 0) {
        uVar6 = (uint)*(ushort *)(param_1 + 0x30);
        iVar7 = iVar7 + uVar6;
        do {
          bVar1 = iVar7 < 0;
          iVar7 = iVar7 + uVar6;
        } while (bVar1);
        iVar7 = iVar7 - uVar6;
      }
      uVar6 = (uint)*(ushort *)(param_1 + 0x30);
      if ((int)uVar6 <= iVar7) {
        iVar7 = iVar7 - uVar6;
        do {
          bVar1 = (int)uVar6 <= iVar7;
          iVar7 = iVar7 - uVar6;
        } while (bVar1);
        iVar7 = iVar7 + uVar6;
      }
      iVar8 = ((int)((int)_DAT_1f8000f0 * (uint)*(ushort *)(param_1 + 0x2e)) >> 0xc) +
              (uint)param_1[0x11] * 8;
      if (iVar8 < 0) {
        uVar6 = (uint)*(ushort *)(param_1 + 0x32);
        iVar8 = iVar8 + uVar6;
        do {
          bVar1 = iVar8 < 0;
          iVar8 = iVar8 + uVar6;
        } while (bVar1);
        iVar8 = iVar8 - uVar6;
      }
      uVar6 = (uint)*(ushort *)(param_1 + 0x32);
      if ((int)uVar6 <= iVar8) {
        iVar8 = iVar8 - uVar6;
        do {
          bVar1 = (int)uVar6 <= iVar8;
          iVar8 = iVar8 - uVar6;
        } while (bVar1);
        iVar8 = iVar8 + uVar6;
      }
      bVar2 = param_1[0x38];
      param_1[0x38] = bVar2 - 1;
      if ((int)((uint)(byte)(bVar2 - 1) << 0x18) < 1) {
        param_1[3] = 1;
      }
      *(short *)(param_1 + 0x28) = (short)iVar7;
      *(short *)(param_1 + 0x2a) = (short)iVar8;
    }
    else if ((bVar2 < 2) && (bVar2 == 0)) {
      *param_1 = 1;
      param_1[3] = 0;
      *(undefined2 *)(param_1 + 4) = *puVar5;
      *(undefined2 *)(param_1 + 6) = puVar5[1];
      *(undefined2 *)(param_1 + 8) = puVar5[2];
      *(undefined2 *)(param_1 + 10) = puVar5[3];
      *(undefined2 *)(param_1 + 0xc) = puVar5[4];
      *(undefined2 *)(param_1 + 0xe) = puVar5[5];
      param_1[0x10] = *(byte *)(puVar5 + 6);
      param_1[0x11] = *(byte *)((int)puVar5 + 0xd);
      uVar3 = puVar5[7];
      uVar4 = puVar5[8];
      param_1[0x2c] = 0;
      param_1[0x2d] = 9;
      param_1[0x2e] = 0xe8;
      param_1[0x2f] = 8;
      iVar7 = (int)(puVar5 + 10) + (uint)uVar4;
      iVar8 = iVar7 + (uint)uVar3;
      *(int *)(param_1 + 0x1c) = iVar8;
      *(undefined2 **)(param_1 + 0x18) = puVar5 + 10;
      *(int *)(param_1 + 0x14) = iVar7;
      *(int *)(param_1 + 0x34) = iVar8;
      *(short *)(param_1 + 0x30) = (short)(((uint)param_1[0x10] * 0x900) / 0x90);
      *(short *)(param_1 + 0x32) = (short)(((uint)param_1[0x11] * 0x8e8) / 0x90);
      param_1[0x38] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

