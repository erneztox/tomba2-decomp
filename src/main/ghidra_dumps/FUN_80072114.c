
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80072114(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_80072ddc(param_1,0x80,3,0xd);
  if (iVar1 != 0) {
    *(code **)(iVar1 + 0x1c) = FUN_80072520;
    *(undefined1 *)(iVar1 + 3) = 2;
    *(undefined2 *)(iVar1 + 0xe) = param_2;
    *(undefined2 *)(iVar1 + 0x5c) = 0x7c7e;
    FUN_80074590(8,5,0);
    if (_DAT_800bf83c != 0) {
      *(undefined1 *)(_DAT_800bf83c + 4) = 3;
    }
    _DAT_800bf83c = iVar1;
    if (_DAT_800e7fee < (short)(ushort)DAT_800bf87d) {
      *(undefined1 *)(iVar1 + 7) = 1;
    }
    else {
      *(undefined1 *)(iVar1 + 7) = 0;
    }
  }
  return;
}

