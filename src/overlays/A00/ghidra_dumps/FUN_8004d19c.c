// FUN_8004d19c

int FUN_8004d19c(undefined4 param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_80072ddc(0,*param_2,param_2[1],param_2[2] & 0x7f);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *(code **)(iVar2 + 0x1c) = FUN_8004aac4;
    *(int *)(iVar2 + 0x2c) = (int)*(short *)(param_2 + 4) << 0x10;
    *(int *)(iVar2 + 0x30) = (int)*(short *)(param_2 + 6) << 0x10;
    *(int *)(iVar2 + 0x34) = (int)*(short *)(param_2 + 8) << 0x10;
    uVar1 = param_2[3];
    *(undefined2 *)(iVar2 + 0x60) = 1;
    *(undefined1 *)(iVar2 + 3) = uVar1;
    *(undefined2 *)(iVar2 + 0x62) = *(undefined2 *)(param_2 + 10);
    uVar1 = param_2[0xd];
    *(undefined2 *)(iVar2 + 100) = 1;
    *(undefined1 *)(iVar2 + 0x5e) = uVar1;
    if ((param_2[2] & 0x80) != 0) {
      *(undefined2 *)(iVar2 + 100) = 5;
    }
    *(undefined2 *)(iVar2 + 0x66) = 0;
    FUN_8004aac4(iVar2);
    if (param_3 == 0) {
      *(undefined1 *)(iVar2 + 4) = 2;
    }
  }
  return iVar2;
}

