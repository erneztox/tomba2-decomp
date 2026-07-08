
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800716b4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  _DAT_1f800214 = param_1;
  iVar2 = FUN_800519e0(param_1,0xc,_DAT_800ecf98,&DAT_800a4bc8);
  uVar1 = _DAT_800ecf9c;
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xb) = 0xf;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 0x200;
    *(undefined2 *)(param_1 + 0xba) = 0x200;
    *(undefined2 *)(param_1 + 0xb8) = 0x200;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 0x7b) = 0;
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    FUN_80040cdc(param_1,&PTR_DAT_8001b860,&DAT_800a3cd0);
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  }
  return;
}

