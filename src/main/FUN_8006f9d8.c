
undefined4 FUN_8006f9d8(undefined4 param_1,int param_2,int param_3,undefined2 param_4)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined **ppuVar6;
  
  *(code **)(param_2 + 0x1c) = FUN_80070018;
  *(undefined4 *)(param_2 + 0x10) = param_1;
  *(undefined2 *)(param_2 + 0x5c) = 0;
  *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) | 0x80;
  uVar2 = *(undefined2 *)(param_3 + 4);
  bVar1 = *(byte *)(param_3 + 2);
  uVar3 = *(ushort *)(param_3 + 2);
  uVar5 = uVar3 & 0x7f;
  *(byte *)(param_2 + 0x5f) = bVar1 & 0x80;
  if ((bVar1 & 0x80) == 0) {
    iVar4 = FUN_80051b70(param_2,uVar5,uVar2);
    if (iVar4 != 0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(&DAT_800ecf58 + uVar5 * 4);
    if ((uVar3 & 0x7f) == 0) {
      ppuVar6 = &PTR_DAT_80017334;
    }
    else {
      ppuVar6 = *(undefined ***)(&DAT_800a58fc + (uint)DAT_800bf870 * 4);
    }
    FUN_80077b38(param_2,ppuVar6,uVar2);
    *(undefined1 *)(param_2 + 0xb) = 0x10;
    *(undefined1 *)(param_2 + 0xd) = 0;
    *(undefined1 *)(param_2 + 0x47) = 0;
    *(undefined2 *)(param_2 + 0x5a) = 0;
    *(undefined1 *)(param_2 + 8) = 0xf0;
  }
  *(undefined2 *)(param_2 + 0x60) = 0xffe0;
  *(undefined2 *)(param_2 + 0x68) = param_4;
  *(undefined2 *)(param_2 + 0x62) = 0;
  *(undefined2 *)(param_2 + 0x54) = 0;
  *(undefined2 *)(param_2 + 0x56) = 0;
  *(undefined2 *)(param_2 + 0x58) = 0;
  if (DAT_800bf816 == '\0') {
    *(undefined1 *)(param_2 + 0xbe) = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0xbe) = 1;
  }
  *(undefined2 *)(param_2 + 0x74) = 0;
  return 1;
}

