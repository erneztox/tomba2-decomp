
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8008dfa0(void)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  
  puVar6 = (undefined2 *)&DAT_1f801d80;
  iVar3 = 0;
  puVar5 = &DAT_800ac400;
  do {
    uVar1 = *puVar5;
    puVar5 = puVar5 + 1;
    iVar3 = iVar3 + 1;
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
  } while (iVar3 < 0x10);
  FUN_80093650(0x18);
  iVar7 = 0;
  iVar3 = -0x7fefb350;
  do {
    iVar4 = 0xf;
    puVar2 = (undefined4 *)(iVar3 + 0x3c);
    do {
      *puVar2 = 0;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar4);
    iVar7 = iVar7 + 1;
    iVar3 = iVar3 + 0x40;
  } while (iVar7 < 0x20);
  _DAT_80104c2c = 0x3c;
  _DAT_80104c28 = 0;
  _DAT_80104c24 = 0;
  return;
}

