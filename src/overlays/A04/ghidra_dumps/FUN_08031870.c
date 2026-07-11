// FUN_08031870

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08031a6c) */
/* WARNING: Removing unreachable block (ram,0x0012aa54) */
/* WARNING: Removing unreachable block (ram,0x08031aac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08031870(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + (*(short *)(param_1 + 0x44) >> 5);
  *(short *)(param_1 + 100) = *(short *)(param_1 + 100) + (*(short *)(param_1 + 0x44) >> 5);
  if (DAT_800e7fc7 == param_1[0xbe]) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = (int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x15;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  _DAT_800e7ed8 = _DAT_800e7ed8 - (short)iVar3;
  if (param_1[0x29] != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00041a1c(param_1,1);
  func_0x00041ac0(param_1);
  if (param_1[0x5f] == '\0') {
    if (-1 < *(short *)(param_1 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = func_0x00045cac(param_1,(int)-*(short *)(param_1 + 0x80),
                            (int)((((uint)*(ushort *)(param_1 + 0x86) -
                                   (uint)*(ushort *)(param_1 + 0x84)) + -0x18) * 0x10000) >> 0x10,
                            (int)*(short *)(param_1 + 0x60));
    if (iVar3 != 0) {
      param_1[0x5f] = param_1[0xbe] + '\x02';
    }
  }
  func_0x0012a480(param_1);
  bVar1 = param_1[0x5f];
  if (((bVar1 & 0x80) == 0) && ((bVar1 == 0 || ((bVar1 & 1) != param_1[0xbe])))) {
    sVar2 = *(short *)(param_1 + 0x6a);
    *(ushort *)(param_1 + 0x6a) = sVar2 - 4U;
    if (0 < (int)((uint)(ushort)(sVar2 - 4U) << 0x10)) {
      iVar3 = func_0x00083e80((int)*(short *)(param_1 + 100));
      _DAT_800e7eb2 =
           *(short *)(param_1 + 0x32) + (short)(iVar3 * *(short *)(param_1 + 0x6a) >> 0xc);
      iVar3 = func_0x00083f50((int)*(short *)(param_1 + 100));
      sVar2 = *(short *)(param_1 + 0x6a);
      iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
      iVar5 = (int)(short)(iVar3 * sVar2 >> 0xc);
      iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
      _DAT_800e7eae = *(short *)(param_1 + 0x2e) + (short)(iVar4 * iVar5 >> 0xc);
      _DAT_800e7eb6 = *(short *)(param_1 + 0x36) - (short)(iVar3 * iVar5 >> 0xc);
      DAT_800e7eaa = param_1[0x2a];
      return;
    }
    *(undefined2 *)(param_1 + 0x6a) = 0;
    _DAT_800e7eae = *(undefined2 *)(param_1 + 0x2e);
    _DAT_800e7eb2 = *(undefined2 *)(param_1 + 0x32);
    _DAT_800e7eb6 = *(undefined2 *)(param_1 + 0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = 2;
  param_1[4] = 2;
  param_1[6] = 0;
  if ((param_1[0x5f] & 0x80) != 0) {
    param_1[5] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[5] = 2;
  if (param_1[0xbe] != '\0') {
    param_1[0x2b] = (char)(*(ushort *)(param_1 + 0x60) >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

