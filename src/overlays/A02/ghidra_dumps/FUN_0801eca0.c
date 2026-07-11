// FUN_0801eca0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801eca0(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar4 = func_0x0007778c(param_1);
    if (iVar4 == 0) {
      return;
    }
    func_0x000517f8(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar4 = func_0x00051b70(param_1,0xc,(int)*(short *)((uint)(byte)param_1[3] * 2 + -0x7fed63e0))
      ;
      if (iVar4 != 0) {
        return;
      }
      *param_1 = 1;
      param_1[0x29] = 0;
      param_1[4] = param_1[4] + '\x01';
      iVar4 = (*(short *)((uint)(byte)param_1[3] * 2 + -0x7fed63e0) + -0xb) * 4;
      uVar2 = *(ushort *)(iVar4 + -0x7fed63c0);
      *(ushort *)(param_1 + 0x80) = uVar2;
      *(short *)(param_1 + 0x82) = (short)((int)((uint)uVar2 << 0x10) >> 0xf);
      uVar3 = *(undefined2 *)(iVar4 + -0x7fed63be);
      *(undefined2 *)(param_1 + 0x84) = uVar3;
      *(undefined2 *)(param_1 + 0x86) = uVar3;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

