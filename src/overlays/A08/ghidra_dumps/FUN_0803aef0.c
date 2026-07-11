// FUN_0803aef0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803aef0(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = func_0x00135158();
  if (iVar3 == -1) {
    return;
  }
  func_0x00135574(param_1,0x14,200);
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        iVar3 = func_0x00134814(param_1);
        if (iVar3 != 0) {
          *(undefined1 *)(param_1 + 5) = 3;
          *(undefined1 *)(param_1 + 6) = 0;
        }
        return;
      }
      iVar3 = func_0x00134904(param_1);
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined1 *)(param_1 + 6) = 1;
        *(undefined2 *)(param_1 + 0x40) = 0x1e;
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 == 1) {
        iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x7c) - (uint)*(ushort *)(param_1 + 0x2e)) *
                     0x10000) >> 0x10;
        iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x7e) - (uint)*(ushort *)(param_1 + 0x36)) *
                     0x10000) >> 0x10;
        *(undefined2 *)(param_1 + 0x78) = 1;
        iVar3 = func_0x00084080(iVar5 * iVar5 + iVar4 * iVar4);
        *(short *)(param_1 + 0x40) = (short)(iVar3 / 0x18);
        sVar2 = func_0x00085690(iVar5,iVar4);
        iVar3 = func_0x00077768((int)-sVar2,(int)*(short *)(param_1 + 0x56),0);
        if (iVar3 == 0) {
          *(undefined2 *)(param_1 + 0x6e) = 0;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 5) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x00135630(param_1,2,(int)*(short *)(param_1 + 0x40));
  }
  *(undefined2 *)(param_1 + 0x40) = 0x5a;
  *(undefined1 *)(param_1 + 6) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

