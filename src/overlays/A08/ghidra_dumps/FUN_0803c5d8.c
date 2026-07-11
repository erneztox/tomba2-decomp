// FUN_0803c5d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0803c5d8(int param_1,short param_2,short param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = _DAT_1f80017c & 0x3f;
  uVar4 = _DAT_1f80017c & 0x3f;
  if ((*(char *)(param_1 + 1) != '\0') &&
     ((((_DAT_1f80017c & 0x3f) == 0 || (uVar4 == 0x20)) &&
      (iVar2 = func_0x0011b344(param_1 + 0x2c,0xfffffff6,(int)param_2,(int)param_3), iVar2 != 0))))
  {
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x7a);
  }
  iVar2 = func_0x00083e80(uVar4 << 6);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x7a) + (short)(iVar2 >> 7) + 0x28;
  if ((uVar1 == 0) || (uVar3 = 0, uVar4 == 0x20)) {
    uVar3 = 1;
  }
  return uVar3;
}

