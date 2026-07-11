// FUN_0801e624

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801e624(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = *(int *)(param_1 + 0xc0);
  DAT_1f800007 = 0x2d;
  iVar5 = (uint)*(ushort *)(param_1 + 0x6c) << 0x10;
  sVar4 = (short)((iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1);
  sVar9 = -sVar4;
  _DAT_1f800016 = *(undefined2 *)(param_1 + 0x60);
  _DAT_1f80000e = *(undefined2 *)(param_1 + 0x62);
  uVar2 = *(undefined2 *)(param_1 + 0x68);
  uVar3 = *(undefined2 *)(param_1 + 0x6a);
  DAT_1f80000d = (char)((ushort)uVar2 >> 8);
  DAT_1f800015 = (char)((ushort)uVar3 >> 8);
  _DAT_1f80001c = CONCAT11(DAT_1f80000d + '\n',(char)uVar2);
  _DAT_1f800024 = CONCAT11(DAT_1f800015 + '\n',(char)uVar3);
  _DAT_1f80002a = *(undefined2 *)(iVar13 + 0x3a);
  _DAT_1f80002c = 0;
  _DAT_1f800032 = *(undefined2 *)(iVar13 + 0x3a);
  _DAT_1f800034 = 0;
  _DAT_1f80003c = 0x14;
  _DAT_1f80003a = *(short *)(iVar13 + 0x3a) + 0x32;
  _DAT_1f800042 = *(short *)(iVar13 + 0x3a) + 0x32;
  _DAT_1f800044 = 0x14;
  _DAT_1f80000c = uVar2;
  _DAT_1f800014 = uVar3;
  _DAT_1f800028 = sVar9;
  _DAT_1f800030 = sVar4;
  _DAT_1f800038 = sVar9;
  _DAT_1f800040 = sVar4;
  func_0x0003b320(0x1f800000,&DAT_1f800028,0);
  _DAT_1f80000c = *(undefined2 *)(param_1 + 100);
  _DAT_1f800014 = *(undefined2 *)(param_1 + 0x66);
  _DAT_1f80001c = *(undefined2 *)(param_1 + 0x68);
  _DAT_1f800024 = *(undefined2 *)(param_1 + 0x6a);
  _DAT_1f80003c = 0;
  _DAT_1f800044 = 0;
  _DAT_1f80002a = *(short *)(iVar13 + 0x3a) + -0x50;
  _DAT_1f800032 = *(short *)(iVar13 + 0x3a) + -0x50;
  _DAT_1f80003a = *(short *)(iVar13 + 0x3a);
  _DAT_1f800042 = *(short *)(iVar13 + 0x3a);
  iVar12 = 0;
  uVar6 = *(ushort *)(iVar13 + 0x3a) / 0x50;
  iVar11 = uVar6 + 1;
  iVar5 = 0x800;
  do {
    if (*(short *)(param_1 + 0x7e) != 0) {
      iVar7 = func_0x00083e80((int)*(short *)(param_1 + 0x7c));
      if (iVar11 == 0) {
        trap(0x1c00);
      }
      if ((iVar11 == -1) && (iVar5 == -0x80000000)) {
        trap(0x1800);
      }
      sVar1 = *(short *)(param_1 + 0x7e);
      iVar8 = func_0x00083e80(iVar5 / iVar11);
      if (iVar11 == 0) {
        trap(0x1c00);
      }
      if ((iVar11 == -1) && (iVar12 << 0xb == -0x80000000)) {
        trap(0x1800);
      }
      iVar10 = (int)(short)(sVar1 * iVar7 >> 0xc);
      _DAT_1f800030 = (short)(iVar10 * iVar8 >> 0xc);
      _DAT_1f800028 = _DAT_1f800030 + sVar9;
      _DAT_1f800030 = _DAT_1f800030 + sVar4;
      iVar7 = func_0x00083e80((iVar12 << 0xb) / iVar11);
      sVar1 = (short)(iVar10 * iVar7 >> 0xc);
      _DAT_1f800038 = sVar1 + sVar9;
      _DAT_1f800040 = sVar1 + sVar4;
      if (*(char *)(param_1 + 0x29) != '\0') {
        if ((*(int *)(iVar13 + 0x30) + (int)_DAT_1f80002a <= (int)_DAT_1f800162) &&
           ((int)_DAT_1f800162 < *(int *)(iVar13 + 0x30) + (int)_DAT_1f80003a)) {
          if ((DAT_800e7fc7 & 1) == 0) {
            _DAT_800e7fd2 = *(short *)(param_1 + 0x82) - (*(short *)(param_1 + 0x80) + sVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          _DAT_800e7fd2 = *(short *)(param_1 + 0x80) + sVar1;
        }
      }
    }
    func_0x0003b320(0x1f800000,&DAT_1f800028,0);
    _DAT_1f80002a = _DAT_1f80002a + -0x50;
    _DAT_1f800032 = _DAT_1f800032 + -0x50;
    _DAT_1f80003a = _DAT_1f80003a + -0x50;
    _DAT_1f800042 = _DAT_1f800042 + -0x50;
    iVar12 = iVar12 + 1;
    iVar5 = iVar5 + 0x800;
  } while (iVar12 <= (int)(uVar6 + 2));
  func_0x0003b320(0x1f800000,&DAT_1f800028,0);
  return;
}

