// FUN_080164b4

/* WARNING: Control flow encountered bad instruction data */

bool FUN_080164b4(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  undefined1 uVar6;
  int iVar5;
  
  uVar6 = 2;
  iVar5 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  sVar4 = (short)iVar5;
  if (*(char *)(param_1 + 0xbf) == '\0') {
    func_0x00083f50((int)*(short *)(param_3 + 10));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = func_0x00083f50((int)*(short *)(param_3 + 10));
  sVar2 = (short)((uint)(iVar3 * 0x19) >> 7);
  iVar5 = iVar5 * 0x10000 >> 0x10;
  if (iVar5 < 0) {
    sVar2 = -sVar2;
  }
  iVar3 = func_0x00083f50((int)*(short *)(param_3 + 8));
  sVar2 = (short)(iVar3 * sVar2 >> 0xc);
  if (iVar5 < 0) {
    if (iVar5 < sVar2) {
      uVar6 = 0;
      *(short *)(param_1 + 0x2e) = *(short *)(param_3 + 0x2c) + sVar2;
      sVar4 = sVar2;
    }
  }
  else if (sVar2 < iVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = func_0x00083e80((int)*(short *)(param_3 + 10));
  iVar3 = func_0x00083e80((int)*(short *)(param_3 + 8));
  *(short *)(param_1 + 0x36) = *(short *)(param_3 + 0x34) + (short)(-(iVar5 * sVar4) >> 0xc);
  iVar5 = ((uint)*(ushort *)(param_3 + 0x30) - (iVar3 * sVar4 >> 0xc)) -
          (((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84)) + 100);
  bVar1 = iVar5 * 0x10000 >> 0x10 <= (int)*(short *)(param_1 + 0x32);
  if (bVar1) {
    *(short *)(param_1 + 0x32) = (short)iVar5;
    *(undefined1 *)(param_1 + 0x29) = 1;
    *(undefined1 *)(param_1 + 0x5f) = uVar6;
  }
  return bVar1;
}

