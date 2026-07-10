// FUN_8007e110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8007e110(undefined2 param_1,undefined1 param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  
  iVar3 = FUN_8007a5a8(3);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    *(undefined1 *)(iVar3 + 0x47) = 2;
    *(undefined1 *)(iVar3 + 3) = param_2;
    *(code **)(iVar3 + 0x1c) = FUN_8007dde0;
    *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
    puVar2 = _DAT_800ecf60;
    *(ushort **)(iVar3 + 0x48) = _DAT_800ecf60;
    puVar4 = _DAT_800ecf60 + 8;
    *(ushort **)(iVar3 + 0x4c) = puVar4;
    uVar1 = *puVar2;
    *(undefined2 *)(iVar3 + 0x5c) = 0xffff;
    *(undefined2 *)(iVar3 + 0x5e) = param_1;
    *(ushort **)(iVar3 + 0x50) = puVar4 + (uint)uVar1 * 2;
  }
  return iVar3;
}

