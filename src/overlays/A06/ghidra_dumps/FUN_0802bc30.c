// FUN_0802bc30

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0802bc30(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  
  if (*(byte *)(param_1 + 3) < 3) {
    if (*(short *)(param_1 + 0x60) == 0x400) {
      if (DAT_1f800207 - 1 < 0xd) {
        return 0;
      }
      if (DAT_800bf871 == '\x13') {
        return 0;
      }
    }
    sVar1 = *(short *)(param_1 + 0x2e);
    sVar2 = *(short *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x2c);
    sVar3 = *(short *)(param_1 + 0x32);
    sVar4 = *(short *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x30);
    sVar5 = *(short *)(param_1 + 0x36);
    sVar6 = *(short *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x34);
    iVar7 = func_0x00077a4c(param_1,0,0,0);
    if (iVar7 == 0) {
      func_0x00077a4c(param_1,(int)(short)(sVar2 - sVar1),(int)(short)(sVar4 - sVar3),
                      (int)(short)(sVar6 - sVar5));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 1;
}

