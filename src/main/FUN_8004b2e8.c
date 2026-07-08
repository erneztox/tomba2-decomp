
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004b2e8(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar3 = FUN_800310f4(0x1f,0xffffff74);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
    uVar2 = _DAT_1f800164;
    uVar1 = _DAT_1f800162;
    *(undefined2 *)(iVar3 + 0x2c) = _DAT_1f800160;
    *(undefined2 *)(iVar3 + 0x2e) = uVar1;
    *(undefined2 *)(iVar3 + 0x30) = uVar2;
  }
  FUN_80074590(0x28,0,0);
  return;
}

