// FUN_8009c3f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_8009c3f4(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    FUN_8009a340(&DAT_80106198,0x80);
    iVar1 = iVar3 * 0x20;
    FUN_8009a340((undefined4 *)(iVar1 + -0x7fefa098),0x20);
    *(undefined4 *)(iVar1 + -0x7fefa098) = 0xa0;
    *(undefined4 *)(iVar1 + -0x7fefa094) = 0;
    *(undefined2 *)(iVar1 + -0x7fefa090) = 0xffff;
    _DAT_80106198 = *(undefined4 *)(iVar1 + -0x7fefa098);
    _DAT_8010619c = *(undefined4 *)(iVar1 + -0x7fefa094);
    _DAT_801061a0 = *(undefined4 *)(iVar1 + -0x7fefa090);
    _DAT_801061a4 = *(undefined4 *)(iVar1 + -0x7fefa08c);
    _DAT_801061a8 = *(undefined4 *)(iVar1 + -0x7fefa088);
    _DAT_801061ac = *(undefined4 *)(iVar1 + -0x7fefa084);
    _DAT_801061b0 = *(undefined4 *)(iVar1 + -0x7fefa080);
    _DAT_801061b4 = *(undefined4 *)(iVar1 + -0x7fefa07c);
    iVar3 = iVar3 + 1;
    iVar1 = FUN_8009c2b0(param_1,iVar3,&DAT_80106198);
    if (iVar1 != 1) {
      return false;
    }
  } while (iVar3 < 0xf);
  iVar3 = 0;
  puVar2 = (undefined4 *)&DAT_80106148;
  do {
    *puVar2 = 0xffffffff;
    FUN_8009a340(&DAT_80106198,0x80);
    _DAT_80106198 = *puVar2;
    iVar1 = FUN_8009c2b0(param_1,iVar3 + 0x10,&DAT_80106198);
    iVar3 = iVar3 + 1;
    if (iVar1 != 1) {
      return false;
    }
    puVar2 = puVar2 + 1;
  } while (iVar3 < 0x14);
  FUN_8009a340(&DAT_80106198,0x80);
  _DAT_80106198 = CONCAT22(DAT_80106198_2,0x434d);
  iVar3 = FUN_8009c2b0(param_1,0);
  return iVar3 == 1;
}

