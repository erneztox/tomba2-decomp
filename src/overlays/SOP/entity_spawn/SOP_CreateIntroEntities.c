// SOP_CreateIntroEntities (SOP_CreateIntroEntities) - Creates 3 intro entities from data table at 0x8010C98C using Entity_AllocByPoolId

void SOP_CreateIntroEntities(void)

{
  int iVar1;
  s32 *puVar2;
  s16 *puVar3;
  int iVar4;
  
  puVar3 = (s16 *)&DAT_8010c98c;
  iVar4 = 0;
  puVar2 = (s32 *)&DAT_8010c994;
  do {
    iVar1 = Entity_AllocByPoolId(3,3,1);
    iVar1->pos_y = *puVar3;
    puVar3 = puVar3 + 6;
    *(s16 *)(iVar1 + 0x32) = *(s16 *)((int)puVar2 + -6);
    iVar4 = iVar4 + 1;
    iVar1->pos_z = *(s16 *)(puVar2 + -1);
    *(s32 *)(iVar1 + 0x1c) = *puVar2;
    puVar2 = puVar2 + 3;
  } while (iVar4 < 3);
  return;
}

