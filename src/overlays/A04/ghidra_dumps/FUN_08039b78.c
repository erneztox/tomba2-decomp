// FUN_08039b78

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_08039b78(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  *(short *)(iVar6 + 0x48) = (short)(iVar3 >> 4);
  iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  *(short *)(iVar6 + 0x4c) = (short)(-iVar3 >> 4);
  *(undefined2 *)(iVar6 + 0x60) = 0xe800;
  uVar5 = (uint)_DAT_1f800164;
  *(undefined2 *)(iVar6 + 0x62) = 0x380;
  uVar5 = func_0x00085690(-((int)((uVar5 - *(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10),
                          (int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000)
                          >> 0x10);
  uVar5 = func_0x00077768(uVar5 & 0xfff,(int)*(short *)(param_1 + 0x60),0);
  if (uVar5 == *(byte *)(param_1 + 0xbe)) {
    iVar3 = (int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(iVar6 + 0x2e)) * 0x10000) >> 0x10;
    iVar4 = (int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(iVar6 + 0x36)) * 0x10000) >> 0x10;
    sVar1 = func_0x00084080(iVar3 * iVar3 + iVar4 * iVar4);
    iVar3 = func_0x00085690((int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(iVar6 + 0x32)) * 0x10000)
                            >> 0x10,(int)sVar1);
    iVar3 = func_0x00083e80(-iVar3);
    sVar1 = (short)(-iVar3 >> 4);
    *(short *)(iVar6 + 0x4a) = sVar1;
    if ((0xb3 < sVar1) && (uVar5 = func_0x0009a450(), (uVar5 & 7) != 0)) {
      *(short *)(iVar6 + 0x4a) = *(short *)(iVar6 + 0x4a) << 1;
      *(short *)(iVar6 + 0x48) = *(short *)(iVar6 + 0x48) >> 2;
      *(short *)(iVar6 + 0x4c) = *(short *)(iVar6 + 0x4c) >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = func_0x0009a450();
    *(ushort *)(iVar6 + 0x4a) = *(short *)(iVar6 + 0x4a) + -0x46 + (uVar2 & 0xff);
    if (0x7f < *(short *)(iVar6 + 0x4a)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(undefined2 *)(iVar6 + 0x4a) = 0;
  }
  *(undefined2 *)(param_1 + 0x66) = 1;
  func_0x00074590(0x8e,0,0);
  *(undefined2 *)(iVar6 + 0x44) = 0x3400;
  return (int)*(short *)(param_1 + 0x66);
}

