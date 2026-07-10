// FUN_80092c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80092c30(short param_1,short param_2,int param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + -0x7fefa2e8) == '\x01') {
    FUN_800962b0((int)param_1,(int)param_2);
    iVar2 = (param_3 + DAT_80105cff * 0x10) * 0x10000 >> 0xb;
    *(undefined1 *)(iVar2 + _DAT_80105ce8) = *param_4;
    *(undefined1 *)(iVar2 + _DAT_80105ce8 + 1) = param_4[1];
    *(undefined1 *)(iVar2 + _DAT_80105ce8 + 2) = param_4[2];
    *(undefined1 *)(iVar2 + _DAT_80105ce8 + 3) = param_4[3];
    *(undefined1 *)(iVar2 + _DAT_80105ce8 + 4) = param_4[4];
    *(undefined1 *)(iVar2 + _DAT_80105ce8 + 5) = param_4[5];
    *(undefined1 *)(iVar2 + _DAT_80105ce8 + 7) = param_4[7];
    *(undefined1 *)(iVar2 + _DAT_80105ce8 + 6) = param_4[6];
    *(undefined1 *)(iVar2 + _DAT_80105ce8 + 8) = param_4[8];
    *(undefined1 *)(iVar2 + _DAT_80105ce8 + 9) = param_4[9];
    *(undefined1 *)(iVar2 + _DAT_80105ce8 + 10) = param_4[10];
    *(undefined1 *)(iVar2 + _DAT_80105ce8 + 0xb) = param_4[0xb];
    *(undefined1 *)(iVar2 + _DAT_80105ce8 + 0xc) = param_4[0xc];
    *(undefined1 *)(iVar2 + _DAT_80105ce8 + 0xd) = param_4[0xd];
    iVar2 = iVar2 + _DAT_80105ce8;
    *(undefined2 *)(iVar2 + 0x10) = *(undefined2 *)(param_4 + 0x10);
    *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(param_4 + 0x12);
    *(undefined2 *)(iVar2 + 0x14) = *(undefined2 *)(param_4 + 0x14);
    uVar1 = 0;
    *(undefined2 *)(iVar2 + 0x16) = *(undefined2 *)(param_4 + 0x16);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

