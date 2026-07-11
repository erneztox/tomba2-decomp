// FUN_08036c18

undefined4 FUN_08036c18(int param_1,short param_2,short param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x50);
  uVar4 = uVar1 & 0xfff;
  if ((*(char *)(param_1 + 1) != '\0') &&
     ((((uVar1 & 0xfff) == 0 || (uVar4 == 0x800)) &&
      (iVar2 = func_0x0011b344(param_1 + 0x2c,0xfffffff6,(int)param_2,(int)param_3), iVar2 != 0))))
  {
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x7a);
  }
  *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 0x40;
  iVar2 = func_0x00083e80(uVar4);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x7a) + (short)(iVar2 >> 7);
  if (((uVar1 & 0xfff) == 0) || (uVar3 = 0, uVar4 == 0x800)) {
    uVar3 = 1;
  }
  return uVar3;
}

