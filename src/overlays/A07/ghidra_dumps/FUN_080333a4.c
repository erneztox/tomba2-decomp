// FUN_080333a4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080333a4(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 5);
  iVar3 = *(int *)(param_1 + 0x10);
  if (bVar1 == 1) {
    func_0x00074590(0xf,10,0);
    iVar5 = (int)((0x2c94 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10;
    iVar4 = (int)((0x23be - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
    sVar2 = func_0x00085690(iVar5,iVar4);
    *(short *)(param_1 + 0x56) = -sVar2;
    iVar3 = func_0x00083f50((int)-sVar2);
    *(short *)(param_1 + 0x48) = (short)(iVar3 >> 4);
    iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x4c) = (short)(-iVar3 >> 4);
    sVar2 = func_0x00084080(iVar4 * iVar4 + iVar5 * iVar5);
    iVar3 = func_0x00085690((int)((-0x9f6 - (uint)*(ushort *)(param_1 + 0x32)) * 0x10000) >> 0x10,
                            (int)sVar2);
    iVar3 = func_0x00083e80(-iVar3);
    *(short *)(param_1 + 0x4a) = (short)(-iVar3 >> 4);
    *(undefined2 *)(param_1 + 0x60) = 0xdc00;
    *(undefined2 *)(param_1 + 0x62) = 0x1e0;
    *(undefined2 *)(param_1 + 0x52) = 0x60;
    *(undefined2 *)(param_1 + 0x44) = 0x1680;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(short *)(param_1 + 0x2e) =
           (short)((*(int *)(*(int *)(iVar3 + 0xd0) + 0x2c) +
                   *(int *)(*(int *)(iVar3 + 0xdc) + 0x2c)) / 2);
      *(short *)(param_1 + 0x32) =
           (short)((*(int *)(*(int *)(iVar3 + 0xd0) + 0x30) +
                   *(int *)(*(int *)(iVar3 + 0xdc) + 0x30)) / 2);
      *(short *)(param_1 + 0x36) =
           (short)((*(int *)(*(int *)(iVar3 + 0xd0) + 0x34) +
                   *(int *)(*(int *)(iVar3 + 0xdc) + 0x34)) / 2);
    }
  }
  else if (bVar1 == 2) {
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) +
         (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) +
         (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
    if (*(short *)(param_1 + 0x36) < 0x2c95) {
      *(undefined2 *)(param_1 + 0x2e) = 0x23be;
      *(undefined2 *)(param_1 + 0x36) = 0x2c94;
    }
    sVar2 = *(short *)(param_1 + 0x60) + *(short *)(param_1 + 0x62);
    *(short *)(param_1 + 0x60) = sVar2;
    *(int *)(param_1 + 0x30) =
         *(int *)(param_1 + 0x30) +
         (int)*(short *)(param_1 + 0x4a) * (int)*(short *)(param_1 + 0x44);
    if (0x2800 < sVar2) {
      *(undefined2 *)(param_1 + 0x60) = 0x2800;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x60) * 0x100;
    if (-0x9f7 < *(short *)(param_1 + 0x32)) {
      func_0x00074590(0x31,0xffffffec,0);
      *(undefined2 *)(param_1 + 0x32) = 0xf60a;
      *(undefined1 *)(param_1 + 0x5e) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

