// FUN_0802e220

/* WARNING: Control flow encountered bad instruction data */

bool FUN_0802e220(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x60);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x62);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 100);
  *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
  sVar1 = *(short *)(param_1 + 0x40) + -1;
  *(short *)(param_1 + 0x40) = sVar1;
  if (param_2 == 0) {
    iVar2 = (int)sVar1 * (int)*(short *)(param_1 + 0x66);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    iVar3 = (int)*(short *)(param_1 + 0x40) * (int)*(short *)(param_1 + 0x68);
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(iVar2 >> 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    iVar2 = (int)*(short *)(param_1 + 0x40) * (int)*(short *)(param_1 + 0x6a);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)(iVar3 >> 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)(iVar2 >> 4);
    func_0x00083e80((int)*(short *)(param_1 + 0x4a));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = (int)sVar1 * (int)*(short *)(param_1 + 0x66);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x3f;
  }
  iVar3 = (int)*(short *)(param_1 + 0x40) * (int)*(short *)(param_1 + 0x68);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(iVar2 >> 6);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x3f;
  }
  iVar2 = (int)*(short *)(param_1 + 0x40) * (int)*(short *)(param_1 + 0x6a);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)(iVar3 >> 6);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x3f;
  }
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)(iVar2 >> 6);
  iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x4a));
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) - (short)(iVar2 >> 4);
  return *(short *)(param_1 + 0x40) == 0;
}

