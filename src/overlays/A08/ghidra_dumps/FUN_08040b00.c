// FUN_08040b00

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08040b00(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    if (0 < *(short *)(param_1 + 0x4a)) {
      func_0x00041718(param_1,0x67,8);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    }
LAB_08040c38:
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) +
         (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) +
         (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
    if (*(short *)(param_1 + 0x2e) < 0x3276) {
      *(undefined2 *)(param_1 + 0x2e) = 0x3275;
      *(undefined2 *)(param_1 + 0x36) = 0x10f3;
    }
    sVar3 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(short *)(param_1 + 0x4a) = sVar3;
    if (0x37ff < sVar3) {
      *(undefined2 *)(param_1 + 0x4a) = 0x3800;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    if (*(short *)(param_1 + 0x32) < -0x1410) {
      func_0x0006cba8(param_1 + 0x2c);
      return 0;
    }
    func_0x00074590(0x17,0xfffffff8,0);
    *(undefined2 *)(param_1 + 0x2e) = 0x3275;
    *(undefined2 *)(param_1 + 0x32) = 0xebf0;
    *(undefined2 *)(param_1 + 0x36) = 0x10f3;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x80;
    func_0x00041718(param_1,0x68,8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x3f;
      DAT_800e806c = 8;
      sVar3 = func_0x00085690((int)((0x10f3 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10,
                              (int)((0x3275 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10)
      ;
      *(short *)(param_1 + 0x56) = -sVar3;
      iVar4 = func_0x00083f50((int)-sVar3);
      *(short *)(param_1 + 0x48) = (short)(iVar4 >> 4);
      iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x4c) = (short)(-iVar4 >> 4);
      *(undefined2 *)(param_1 + 0x4a) = 0xe800;
      *(undefined2 *)(param_1 + 0x50) = 0x1a0;
      *(undefined2 *)(param_1 + 0x44) = 0xc00;
      uVar2 = _DAT_800ecf68;
      *(undefined4 *)(param_1 + 0x7c) = 0x80017fe8;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      func_0x00041718(param_1,0x66,0);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    }
  }
  else if (bVar1 == 2) goto LAB_08040c38;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

