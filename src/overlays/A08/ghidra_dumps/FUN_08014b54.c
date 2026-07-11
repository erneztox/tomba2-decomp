// FUN_08014b54

/* WARNING: Control flow encountered bad instruction data */

void FUN_08014b54(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar4 = *(undefined2 *)(param_2 + 0x86);
  *(short *)(param_2 + 0x86) = *(short *)(param_2 + 0x84) * 2 + 0x46;
  iVar6 = func_0x00022f04();
  if (iVar6 == 0) {
    *(undefined2 *)(param_2 + 0x86) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_2 + 0x86) = uVar4;
  if (*(char *)(param_1 + 0x5f) == '\x10') {
    bVar5 = *(byte *)(param_1 + 0x46) >> 1;
    if (bVar5 < 2) {
      iVar6 = func_0x00083f50(*(short *)(param_1 + 0x68) + 0x800);
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(param_2 + 0x80);
      iVar7 = func_0x00083e80(*(short *)(param_1 + 0x68) + 0x800);
      sVar3 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_2 + 0x2e) + (short)(iVar6 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(param_2 + 0x36) -
           (short)(iVar7 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
      *(short *)(param_1 + 0x32) = *(short *)(param_2 + 0x32) + *(short *)(param_1 + 0x84);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar5 < 4) {
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_2 + 0x2e);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_2 + 0x36);
      *(short *)(param_1 + 0x32) =
           *(short *)(param_1 + 0x84) +
           *(short *)(param_2 + 0x32) + (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84));
    }
  }
  uVar8 = func_0x0001e860(param_1,param_2,0,0x200);
  *(undefined1 *)(param_2 + 0x2b) = 1;
  if ((uVar8 & 0x80) == 0) {
    DAT_1f800182 = 0;
  }
  return;
}

