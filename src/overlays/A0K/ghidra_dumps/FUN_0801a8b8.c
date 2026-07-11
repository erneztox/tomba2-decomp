// FUN_0801a8b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801a8b8(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(param_1 + 0x78) = 1;
    func_0x00054d14(&DAT_800e7e80,99,0);
    *(undefined2 *)(param_1 + 0x4a) = 0xd000;
    *(undefined2 *)(param_1 + 0x40) = 0x22;
    iVar3 = ((int)*(short *)(param_1 + 0x2e) - (int)_DAT_800e7eae) * 0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x1f;
    }
    *(short *)(param_1 + 0x4e) = (short)(iVar3 >> 5);
    iVar3 = (((int)*(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x8a) + -100) -
            (int)_DAT_800e7eb2) * 0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x1f;
    }
    *(short *)(param_1 + 0x50) = (short)(iVar3 >> 5);
    iVar3 = ((int)*(short *)(param_1 + 0x36) - (int)_DAT_800e7eb6) * 0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x1f;
    }
    *(short *)(param_1 + 0x52) = (short)(iVar3 >> 5);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    _DAT_800e7eac = _DAT_800e7eac + *(short *)(param_1 + 0x4e) * 0x100;
    _DAT_800e7eb0 = _DAT_800e7eb0 + *(short *)(param_1 + 0x50) * 0x100;
    _DAT_800e7eb4 = _DAT_800e7eb4 + *(short *)(param_1 + 0x52) * 0x100;
    uVar4 = 0;
    if (*(char *)(param_1 + 3) == '\x04') {
      uVar4 = 0xc00;
    }
    _DAT_800e7ed6 = func_0x000776f8(uVar4,(int)_DAT_800e7ed6,0x40);
    _DAT_800e7eb0 = _DAT_800e7eb0 + *(short *)(param_1 + 0x4a) * 0x100;
    uVar2 = *(short *)(param_1 + 0x4a) + 0x300;
    *(ushort *)(param_1 + 0x4a) = uVar2;
    if ((0 < (int)((uint)uVar2 << 0x10)) &&
       ((int)*(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x8a) + -100 <= (int)_DAT_800e7eb2))
    {
      *(undefined2 *)(param_1 + 0x40) = 1;
    }
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if (sVar1 != 1) {
      return 0;
    }
    _DAT_800e7eac = CONCAT22(*(undefined2 *)(param_1 + 0x2e),_DAT_800e7eac);
    _DAT_800e7eb0 =
         CONCAT22(*(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x8a) + -100,_DAT_800e7eb0);
    _DAT_800e7eb4 = CONCAT22(*(undefined2 *)(param_1 + 0x36),_DAT_800e7eb4);
    func_0x00054d14(&DAT_800e7e80,0xe7,5);
    if (*(char *)(param_1 + 3) == '\x04') {
      _DAT_800e7ed6 = 0xc00;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_800e7ed6 = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

