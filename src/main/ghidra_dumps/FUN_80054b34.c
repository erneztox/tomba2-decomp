
void FUN_80054b34(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_800535d4();
  if (iVar1 - 7U < 3) {
    uVar2 = (&PTR_DAT_800a4544)[param_2][param_3];
    if (param_2 == 0) {
      uVar3 = 5;
    }
    else {
      uVar3 = 5;
    }
  }
  else {
    uVar2 = (&PTR_DAT_800a4524)[param_2 * 3 + param_3]
            [(uint)*(byte *)(param_1 + 0xbe) + (*(byte *)(param_1 + 0x14a) & 6)];
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 5;
    }
  }
  FUN_80054d14(param_1,uVar2,uVar3);
  return;
}

