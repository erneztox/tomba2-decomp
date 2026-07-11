// FUN_0802dd88

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802dd88(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte abStack_4010 [16384];
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  
  local_10 = _DAT_8010a4a4;
  local_c = DAT_8010a4a8;
  local_b = DAT_8010a4a9;
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x52) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0xfffe;
    *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  iVar3 = ((int)*(short *)(param_1 + 0x54) - (int)*(short *)(param_1 + 0x2e)) + -200;
  iVar3 = -(iVar3 * iVar3 >> 8);
  iVar4 = iVar3 + 0x112;
  if (iVar4 < 0) {
    iVar4 = iVar3 + 0x121;
  }
  *(short *)(param_1 + 0x56) = (short)(iVar4 >> 4);
  if ((iVar4 >> 4) << 0x10 < 1) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + *(short *)(param_1 + 0x58);
    *(short *)(param_1 + 0x58) =
         *(short *)(param_1 + 0x58) + (short)(-0x19 - *(short *)(param_1 + 0x58) >> 1);
    sVar2 = *(short *)(param_1 + 0x52) + 1;
    *(short *)(param_1 + 0x52) = sVar2;
    if (0xb < sVar2) {
      *(undefined2 *)(param_1 + 0x52) = 0;
    }
    *(ushort *)(param_1 + 0x50) =
         (ushort)*(byte *)((int)&local_10 +
                          ((int)((uint)*(ushort *)(param_1 + 0x52) << 0x10) >> 0x11));
    *(undefined1 *)(param_1 + 1) = 1;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x44;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

