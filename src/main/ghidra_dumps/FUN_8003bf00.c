
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003bf00(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  sVar1 = _DAT_1f80015c;
  piVar4 = _DAT_1f800154;
  if (DAT_1f800136 == '\0') {
    _DAT_1f80015c = 0;
    _DAT_1f800154 = (int *)&DAT_800f2738;
    _DAT_1f80015e = sVar1;
    _DAT_1f800158 = piVar4;
  }
  iVar3 = (int)_DAT_1f80015e;
  piVar4 = _DAT_1f800158;
  while (iVar3 != 0) {
    iVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
    if (*(char *)(iVar2 + 1) != '\0') {
      switch(*(undefined1 *)(iVar2 + 0xb)) {
      case 0:
      case 0xf:
        FUN_8003cca4();
        break;
      case 0x10:
        FUN_8003c2d4();
        break;
      case 0x11:
        FUN_8003c464();
        break;
      case 0x12:
        FUN_8003c5f8();
        break;
      case 0x13:
        FUN_8003c788();
        break;
      case 0x1f:
        if (DAT_800bf870 == '\x14') {
          func_0x8010fc70();
        }
        else {
          FUN_8004cc88();
        }
      }
    }
  }
  return;
}

