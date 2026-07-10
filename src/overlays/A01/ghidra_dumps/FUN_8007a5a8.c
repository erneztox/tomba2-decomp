// FUN_8007a5a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_8007a5a8(undefined1 param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  puVar2 = _DAT_800e8098;
  if (_DAT_800e8098 != (undefined1 *)0x0) {
    uVar3 = *(undefined4 *)(_DAT_800e8098 + 0x24);
    *(undefined4 *)(_DAT_800e8098 + 0x24) = 0;
    DAT_800e7e7c = DAT_800e7e7c + -1;
    piVar1 = (int *)(_DAT_800e8098 + 0x20);
    _DAT_800e8098 = (undefined1 *)uVar3;
    *piVar1 = (int)_DAT_800f239c;
    if (_DAT_800f239c == (undefined1 *)0x0) {
      _DAT_800f2624 = puVar2;
    }
    else {
      *(undefined1 **)((int)_DAT_800f239c + 0x24) = puVar2;
    }
    _DAT_800f239c = puVar2;
    puVar2[10] = 1;
    *puVar2 = 2;
    puVar2[0xc] = param_1;
    return puVar2;
  }
  return (undefined1 *)0x0;
}

