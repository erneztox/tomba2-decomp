// FUN_80092e3c

undefined4 FUN_80092e3c(ushort param_1,undefined2 param_2,undefined2 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 < 0x18) {
    iVar3 = (int)(short)param_1;
    *(undefined2 *)(&DAT_80105a2a + iVar3 * 0x10) = param_3;
    bVar1 = (&DAT_80105a08)[iVar3];
    uVar2 = 0;
    *(undefined2 *)(&DAT_80105a28 + iVar3 * 0x10) = param_2;
    (&DAT_80105a08)[iVar3] = bVar1 | 3;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

