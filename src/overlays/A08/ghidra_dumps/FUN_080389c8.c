// FUN_080389c8

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080389c8(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        sVar2 = func_0x00085690((int)((0x1750 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >>
                                0x10,(int)((0x3332 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000)
                                     >> 0x10);
        *(short *)(param_1 + 0x56) = -sVar2;
        iVar3 = func_0x00083f50((int)-sVar2);
        *(short *)(param_1 + 0x48) = (short)(iVar3 >> 4);
        iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
        *(short *)(param_1 + 0x4c) = (short)(-iVar3 >> 4);
        *(undefined2 *)(param_1 + 0x4a) = 0xe800;
        *(undefined2 *)(param_1 + 0x50) = 0x1a0;
        *(undefined2 *)(param_1 + 0x44) = 0xc00;
        func_0x00041718(param_1,0xb,8);
        *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
        halt_baddata();
      }
    }
    else if (bVar1 == 2) {
      iVar3 = (-0x21cc - (uint)*(ushort *)(param_1 + 0x32)) * 0x10000;
      sVar2 = (short)(iVar3 >> 0x14);
      if (-0x10 < iVar3 >> 0x14) {
        sVar2 = -0x10;
      }
      sVar2 = *(ushort *)(param_1 + 0x32) + sVar2;
      *(short *)(param_1 + 0x32) = sVar2;
      if (-0x21cc < sVar2) {
        return 0;
      }
      *(undefined2 *)(param_1 + 0x32) = 0xde34;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
  if (*(short *)(param_1 + 0x2e) < 0x3333) {
    *(undefined2 *)(param_1 + 0x2e) = 0x3332;
    *(undefined2 *)(param_1 + 0x36) = 0x1750;
  }
  sVar2 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x4a) = sVar2;
  if (0x37ff < sVar2) {
    *(undefined2 *)(param_1 + 0x4a) = 0x3800;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  if (-0x2105 < *(short *)(param_1 + 0x32)) {
    *(undefined2 *)(param_1 + 0x2e) = 0x3332;
    *(undefined2 *)(param_1 + 0x32) = 0xdefc;
    *(undefined2 *)(param_1 + 0x36) = 0x1750;
    func_0x00041718(param_1,0,8);
    func_0x00074590(7,2,0);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x46;
    func_0x000312d4(0x90a,param_1 + 0x2c,0xfffffff6);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x46;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

