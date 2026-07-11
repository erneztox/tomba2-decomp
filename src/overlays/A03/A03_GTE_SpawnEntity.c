// A03_GTE_SpawnEntity - Spawns entity with GTE position via Entity_Spawn

/* WARNING: Control flow encountered bad instruction data */

void A03_GTE_SpawnEntity(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  u16 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar10 = *(int *)(param_1 + 0x60);
  iVar11 = Entity_SpawnNoPos(0x400,0xffffffd8);
  if ((iVar11 != 0) && (param_1->state == '\x01')) {
    sVar1 = *(short *)(param_1 + 0xa2);
    sVar2 = *(short *)(param_1 + 0xa8);
    sVar3 = *(short *)(param_1 + 0x32);
    sVar4 = param_1->pos_z;
    sVar5 = *(short *)(param_1 + 0x9e);
    sVar6 = *(short *)(param_1 + 0xa4);
    sVar7 = *(short *)(param_1 + 0xa0);
    sVar8 = *(short *)(param_1 + 0xa6);
    iVar11->pos_x =
         param_1->pos_y + (short)(*(short *)(param_1 + 0x9c) * param_2 >> 0xc) +
         (short)(*(short *)(param_1 + 0x98) * -0x6e >> 0xc) +
         (short)(*(short *)(param_1 + 0x9a) * 3 >> 6);
    iVar11->pos_y =
         sVar3 + (short)(sVar1 * param_2 >> 0xc) + (short)(sVar5 * -0x6e >> 0xc) +
         (short)(sVar7 * 3 >> 6);
    *(short *)(iVar11 + 0x30) =
         sVar4 + (short)(sVar2 * param_2 >> 0xc) + (short)(sVar6 * -0x6e >> 0xc) +
         (short)(sVar8 * 3 >> 6);
    iVar12 = Math_Random();
    iVar15 = (iVar12 >> 8) + 0x300;
    iVar12 = Math_Random();
    iVar13 = Math_Random();
    if (param_2 < 0) {
      Math_Random();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar14 = Math_Random();
    iVar14 = (iVar14 >> 8) + -0x40;
    *(short *)(iVar11 + 0x34) =
         (short)(((int)((uint)*(u16 *)(iVar10 + 0x14) << 0x10) >> 0x14) * iVar15 >> 0xc);
    iVar11->pos_z =
         (short)(((int)((uint)*(u16 *)(iVar10 + 0x1a) << 0x10) >> 0x14) * iVar15 >> 0xc);
    uVar9 = *(u16 *)(iVar10 + 0x20);
    iVar11->pos_z =
         iVar11->pos_z - (short)(((iVar12 * iVar13 >> 0x10) + 0x3e00) * 0xd >> 0xc);
    *(short *)(iVar11 + 0x38) = (short)(((int)((uint)uVar9 << 0x10) >> 0x14) * iVar15 >> 0xc);
    *(short *)(iVar11 + 0x34) =
         *(short *)(iVar11 + 0x34) +
         (short)(((int)((uint)*(u16 *)(iVar10 + 0x10) << 0x10) >> 0x13) * iVar14 >> 0xc);
    iVar11->pos_z =
         iVar11->pos_z +
         (short)(((int)((uint)*(u16 *)(iVar10 + 0x16) << 0x10) >> 0x13) * iVar14 >> 0xc);
    *(short *)(iVar11 + 0x38) =
         *(short *)(iVar11 + 0x38) +
         (short)(((int)((uint)*(u16 *)(iVar10 + 0x1c) << 0x10) >> 0x13) * iVar14 >> 0xc);
  }
  return;
}

