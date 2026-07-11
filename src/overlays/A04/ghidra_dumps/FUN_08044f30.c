// FUN_08044f30

/* WARNING: Control flow encountered bad instruction data */

void FUN_08044f30(byte *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x42);
      *(short *)(param_1 + 0x42) = sVar2 + 0x22;
      iVar3 = func_0x00083e80((int)(short)(sVar2 + 0x22));
      iVar3 = (iVar3 + 0x1000) * 0x8000;
      *(short *)(param_1 + 0x54) = (short)(iVar3 >> 0x15);
      sVar2 = *(short *)(param_1 + 0x50);
      *(short *)(param_1 + 0x58) = (short)((iVar3 >> 0x10) * 5 >> 2);
      *(ushort *)(param_1 + 0x50) = sVar2 + 0x200U;
      *(int *)(param_1 + 0x30) =
           *(int *)(param_1 + 0x30) + ((int)((uint)(ushort)(sVar2 + 0x200U) << 0x10) >> 8);
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1[0x50] = 0;
    param_1[0x51] = 0xc4;
    param_1[0x42] = 0;
    param_1[0x43] = 0xfc;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[5] = 1;
    *param_1 = *param_1 | 8;
  }
  *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 0x22;
  if (0 < *(short *)(param_1 + 0x50)) {
    param_1[5] = param_1[5] + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

