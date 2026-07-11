// A0H_GridSpawner - Grid entity spawner: nested loops

void A0H_GridSpawner(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  
  iVar6 = 0;
  sVar5 = -400;
  do {
    iVar4 = 0;
    do {
      iVar1 = Entity_SpawnChild(param_1,1,4,0x20);
      if (iVar1 != 0) {
        iVar1->sub_type = (char)(iVar4 + 1);
        *(s32 *)(iVar1 + 0x1c) = 0x8010a918;
        iVar1->rot_y = (short)(iVar4 + 1) * 0x200 + 0xf1a;
        uVar2 = Math_Random();
        iVar3 = (iVar1->rot_y - 0x1f) + (uVar2 & 0x3f);
        iVar1->rot_y = (short)iVar3;
        iVar3 = Math_CosGTE(iVar3 * 0x10000 >> 0x10);
        iVar1->pos_y = param_1->pos_y + (short)(iVar3 >> 4);
        *(short *)(iVar1 + 0x32) = *(short *)(param_1 + 0x32) + sVar5;
        iVar3 = Math_Cos((int)iVar1->rot_y);
        iVar1->pos_z = param_1->pos_z + (short)(-iVar3 >> 4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    iVar6 = iVar6 + 1;
    sVar5 = sVar5 + 200;
  } while (iVar6 < 4);
  return;
}

