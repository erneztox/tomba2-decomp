// FUN_08018634

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08018634(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar4 = func_0x00022e04();
  uVar5 = 0;
  if (iVar4 != 0) {
    if (0x61 < *(byte *)(param_2 + 3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x5f) == '\x10') {
      iVar4 = func_0x00083f50(*(short *)(param_1 + 0x68) + 0x800);
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(param_2 + 0x80);
      iVar6 = func_0x00083e80(*(short *)(param_1 + 0x68) + 0x800);
      sVar3 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_3 + 0x2c) + (short)(iVar4 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(param_3 + 0x34) -
           (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
    }
    iVar4 = func_0x0001e860(param_1,param_2,param_3,0x1200);
    if ((*(char *)(param_2 + 3) != '\x03') || (iVar4 == 0)) {
      *(undefined1 *)(param_2 + 0x2b) = 1;
    }
    DAT_1f800182 = 0;
    uVar5 = 1;
  }
  return uVar5;
}

