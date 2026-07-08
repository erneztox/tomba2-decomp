
undefined2 * FUN_80018a00(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = DAT_8002677c;
  puVar1 = DAT_80026778;
  puVar3 = (undefined2 *)0x0;
  if (DAT_800256ec == 0) {
    *DAT_8002677c = 0;
    *puVar1 = *puVar2;
    *DAT_80026780 = 0x33333333;
    FUN_80018708(&DAT_800256ec,0x41a);
    iVar4 = FUN_8001f05c(&DAT_80025724);
    if (iVar4 != 0) {
      FUN_800182d8();
    }
    DAT_80025728 = &DAT_80026704;
    FUN_8001876c(&DAT_80025724);
    DAT_800256ec = 1;
    uVar5 = FUN_8001877c();
    *(undefined4 *)(DAT_80026774 + 0x14) = uVar5;
    uVar5 = FUN_8001889c();
    *(undefined4 *)(DAT_80026774 + 4) = uVar5;
    FUN_80018734();
    puVar3 = &DAT_800256ec;
    FUN_80017cfc();
  }
  return puVar3;
}

