// FUN_08013800

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08013800(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = _DAT_1f800138;
  uVar1 = *(ushort *)(_DAT_1f800138 + 0x54);
  if (uVar1 != 1) {
    if (1 < uVar1) {
      halt_baddata();
    }
    if (uVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(_DAT_1f800138 + 0x6e) = 0;
    _DAT_8010d394 = 0xe0;
    *(undefined2 *)(iVar3 + 0x54) = 1;
    _DAT_8010d398 = 0;
  }
  iVar3 = _DAT_8010d394 + -1;
  if (_DAT_8010d394 + 0x30b < -0x10) {
    _DAT_8010d394 = iVar3;
    *(short *)(_DAT_1f800138 + 0x54) = *(short *)(_DAT_1f800138 + 0x54) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = iVar3 + _DAT_8010d398 * 0x1e;
  if (iVar5 < -0x10) {
    iVar5 = iVar3 + (_DAT_8010d398 + 1) * 0x1e;
    _DAT_8010d398 = _DAT_8010d398 + 1;
  }
  iVar6 = 0;
  _DAT_8010d394 = iVar3;
  while ((*(int *)((_DAT_8010d398 + iVar6) * 4 + -0x7fef2ce0) != 0 && (iVar5 < 0xf0))) {
    iVar3 = func_0x00079528();
    sVar4 = (short)iVar5;
    iVar5 = iVar5 + 0x1e;
    iVar2 = _DAT_8010d398 + iVar6;
    iVar6 = iVar6 + 1;
    func_0x00079374((0xa0 - ((iVar3 << 3) >> 1)) * 0x10000 >> 0x10,(int)sVar4,0,
                    *(undefined4 *)(iVar2 * 4 + -0x7fef2ce0),1);
    if (0xc < iVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0;
}

