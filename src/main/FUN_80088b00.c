
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80088b00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  DAT_800abe70 = 0;
  DAT_800abe84 = 0;
  FUN_80089160();
  iVar7 = -0x7fefdb00;
  DAT_800abe38 = FUN_80088cc8;
  DAT_800abe3c = &LAB_80088c60;
  DAT_800abe40 = &LAB_80088dcc;
  DAT_800abe44 = FUN_80088e88;
  DAT_800abe48 = &LAB_80089104;
  DAT_800abe4c = &LAB_8008913c;
  DAT_800abe6c = 0x80102500;
  DAT_800abe5c = FUN_80088dbc;
  FUN_8009a340(0x80102500,0x1e0);
  iVar6 = 0;
  piVar2 = (int *)&DAT_80102540;
  iVar5 = -0x7fefdb48;
  iVar4 = -0x7fefdb90;
  _DAT_80102530 = param_1;
  _DAT_80102620 = param_2;
  do {
    puVar3 = (undefined1 *)(iVar7 + 0x5d);
    piVar2[-0xd] = 0;
    piVar2[-0xc] = iVar7;
    *(undefined1 *)piVar2[-4] = 0xff;
    iVar1 = 5;
    *(undefined1 *)(piVar2[-4] + 1) = 0;
    piVar2[-1] = iVar4;
    *piVar2 = iVar5;
    do {
      *puVar3 = 0xff;
      iVar1 = iVar1 + -1;
      puVar3 = puVar3 + 1;
    } while (-1 < iVar1);
    iVar5 = iVar5 + 0x23;
    iVar4 = iVar4 + 0x23;
    iVar6 = iVar6 + 1;
    piVar2 = piVar2 + 0x3c;
    iVar7 = iVar7 + 0xf0;
  } while (iVar6 < 2);
  FUN_80086738();
  DAT_800abe70 = 1;
  return;
}

