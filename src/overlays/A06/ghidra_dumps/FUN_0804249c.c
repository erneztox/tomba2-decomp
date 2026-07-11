// FUN_0804249c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0804249c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x00077b5c(param_1);
    func_0x0004766c(param_1);
    iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x4a));
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 100) + (short)(iVar4 >> 6);
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x40;
    func_0x0007778c(param_1);
    if (*(short *)(param_1 + 0x60) == 0) {
      if (param_1[1] != '\0') {
        return;
      }
      *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 1;
      *(undefined2 *)(param_1 + 0x62) = 0x5a;
    }
    else if (*(short *)(param_1 + 0x60) == 1) {
      if (param_1[1] == '\0') {
        sVar2 = *(short *)(param_1 + 0x62);
        *(ushort *)(param_1 + 0x62) = sVar2 - 1U;
        if (-1 < (int)((uint)(ushort)(sVar2 - 1U) << 0x10)) {
          return;
        }
        DAT_800bf9d4 = 0;
        param_1[4] = 3;
      }
      else {
        *(undefined2 *)(param_1 + 0x60) = 0;
      }
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1[4] = 1;
      uVar3 = _DAT_800ecf80;
      param_1[0xb] = 0x10;
      param_1[0xd] = 0;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      param_1[8] = 0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      param_1[0x5e] = 1;
      param_1[3] = 4;
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      func_0x00077b38(param_1,0x8014cef0,10);
      param_1[0x47] = 0;
      func_0x0004766c(param_1);
      *(undefined2 *)(param_1 + 0x80) = 0x1e;
      *(undefined2 *)(param_1 + 0x82) = 0x3c;
      *(undefined2 *)(param_1 + 0x84) = 0x3c;
      *(undefined2 *)(param_1 + 0x86) = 0x5a;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      param_1[5] = 1;
      param_1[6] = 2;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x32);
    }
  }
  else if (bVar1 == 2) {
    if ((1 < (byte)param_1[5]) && ((byte)param_1[5] < 4)) {
      DAT_800bf9d4 = 0;
      DAT_800bf936 = DAT_800bf936 | 0x10;
      func_0x0004d4c4(0x43,1);
      func_0x0004b0d8(param_1);
      param_1[4] = 3;
    }
    func_0x0007778c(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

