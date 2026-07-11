// FUN_0803a20c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803a20c(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_28 [2];
  short local_26;
  short local_22;
  short local_1e;
  short local_18;
  short local_16;
  short local_14;
  
  iVar3 = func_0x00135158();
  if (iVar3 == -1) {
    return;
  }
  func_0x00135574(param_1,0x14,200);
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    *(undefined2 *)(param_1 + 0x40) = 0xf;
    func_0x00135194(param_1);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sVar2 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar2 + -1;
        if (sVar2 != 1) {
          return;
        }
        local_16 = *(short *)(param_1 + 0x32) -
                   *(short *)(*(short *)(param_1 + 0x72) * 2 + -0x7feb91b4);
        sVar2 = *(short *)(*(short *)(param_1 + 0x72) * 2 + -0x7feb91ac);
        iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
        iVar4 = (int)sVar2;
        local_18 = *(short *)(param_1 + 0x2e) + (short)(iVar3 * iVar4 >> 0xc);
        iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
        local_14 = *(short *)(param_1 + 0x36) + (short)(-iVar3 * iVar4 >> 0xc);
        func_0x0012e61c((int)((*(ushort *)(param_1 + 0x72) + 1) * 0x10000) >> 0x10,param_1,&local_18
                       );
        if (*(char *)(param_1 + 1) != '\0') {
          func_0x00074590(0x88,0x1d,0x1e);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        if (*(short *)(param_1 + 0x6a) != 1) {
          return;
        }
      }
      *(undefined1 *)(param_1 + 5) = 10;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined2 *)(param_1 + 0x40) = 6;
      return;
    }
    if (bVar1 == 0) {
      func_0x00135630(param_1,7,6);
      *(undefined2 *)(param_1 + 0x40) = 0x2d;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
      local_26 = *(short *)(param_1 + 0x2e) + (short)(iVar3 * 0x5a >> 0xc);
      local_22 = *(short *)(param_1 + 0x32) + -0x28;
      iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
      local_1e = *(short *)(param_1 + 0x36) + (short)(iVar3 * -0x5a >> 0xc);
      iVar3 = func_0x000313a0(0x905,auStack_28,0xfffffff6,param_1 + 0x54);
      if (iVar3 == 0) {
        return;
      }
      *(int *)(iVar3 + 0x10) = param_1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

