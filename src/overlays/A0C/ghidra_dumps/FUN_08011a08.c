// FUN_08011a08

/* WARNING: Control flow encountered bad instruction data */

void FUN_08011a08(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = func_0x00020db8();
  if (-1 < iVar5) {
    if (*(char *)(param_1 + 0x5f) == '\x10') {
      bVar4 = *(byte *)(param_1 + 0x46) >> 1;
      if (bVar4 == 2) {
        if (iVar5 != 3) {
          iVar5 = func_0x00083f50(*(short *)(param_1 + 0x68) + 0x800);
          sVar1 = *(short *)(param_1 + 0x80);
          sVar2 = *(short *)(param_2 + 0x80);
          iVar6 = func_0x00083e80(*(short *)(param_1 + 0x68) + 0x800);
          sVar3 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) =
               *(short *)(param_3 + 0x2c) + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
          *(short *)(param_1 + 0x36) =
               *(short *)(param_3 + 0x34) -
               (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (bVar4 < 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar4 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *(short *)(param_1 + 0x32) =
           *(short *)(param_1 + 0x84) +
           *(short *)(param_3 + 0x30) + (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0001e860(param_1,param_2,param_3,0);
  }
  return;
}

