// FUN_08011ba0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011ba0(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined1 auStack_28 [2];
  short local_26;
  short local_1e;
  
  sVar5 = -_DAT_1f8000ee;
  iVar3 = func_0x00083f50(param_3 & 0xfff);
  sVar2 = *(short *)(param_2 + 0x2e);
  iVar4 = func_0x00083e80(param_3 & 0xfff);
  local_1e = *(short *)(param_2 + 0x36) - (short)(iVar4 * sVar5 >> 0xc);
  local_26 = sVar2 + (short)(iVar3 * sVar5 >> 0xc);
  func_0x0010f7b0(auStack_28,400);
  sVar2 = _DAT_1f800240;
  _DAT_1f8000d2 = local_26;
  _DAT_1f8000da = local_1e;
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    *(short *)(param_1 + 0x86) = _DAT_1f8000e2 + _DAT_1f800240;
    sVar5 = _DAT_1f8000d6;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined1 *)(param_1 + 5) = 2;
    *(short *)(param_1 + 0x88) = sVar5 + sVar2;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      _DAT_1f8000d6 = *(short *)(*(int *)(param_2 + 0x10) + 0x32) + -500;
      *(undefined1 *)(param_1 + 0x66) = 3;
    }
  }
  else if (bVar1 == 2) {
    iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x6a));
    _DAT_1f8000e2 = (*(short *)(param_1 + 0x86) + (short)(iVar3 >> 7)) - _DAT_1f800240;
    iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x6a));
    _DAT_1f8000d6 = (*(short *)(param_1 + 0x88) + (short)(iVar3 >> 7)) - _DAT_1f800240;
    sVar2 = *(short *)(param_1 + 0x6a) + 0x100;
    *(short *)(param_1 + 0x6a) = sVar2;
    if (0x1000 < sVar2) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    func_0x000521f4(0,0,0x81,6);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

