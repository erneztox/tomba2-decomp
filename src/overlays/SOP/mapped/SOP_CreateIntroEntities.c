// SOP_CreateIntroEntities (SOP_CreateIntroEntities) - Creates 3 intro entities from data table at 0x8010C98C using Entity_AllocByPoolId

void SOP_CreateIntroEntities(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  
  puVar3 = (undefined2 *)&DAT_8010c98c;
  iVar4 = 0;
  puVar2 = (undefined4 *)&DAT_8010c994;
  do {
    iVar1 = func_0x0007a980(3,3,1);
    *(undefined2 *)(iVar1 + 0x2e) = *puVar3;
    puVar3 = puVar3 + 6;
    *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)((int)puVar2 + -6);
    iVar4 = iVar4 + 1;
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(puVar2 + -1);
    *(undefined4 *)(iVar1 + 0x1c) = *puVar2;
    puVar2 = puVar2 + 3;
  } while (iVar4 < 3);
  return;
}

