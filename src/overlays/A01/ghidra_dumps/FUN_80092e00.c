// FUN_80092e00

undefined4 FUN_80092e00(ushort param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x18) {
    FUN_8009a170((int)(short)param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

