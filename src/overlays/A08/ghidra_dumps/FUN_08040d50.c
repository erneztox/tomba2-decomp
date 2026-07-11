// FUN_08040d50

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08040d50(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    if (*(short *)(param_1 + 0x2e) < 0x3138) {
      DAT_800bfa42 = 0x85;
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      DAT_800bfa42 = 0x84;
      sVar2 = func_0x00085690((int)((0x11d7 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10,
                              (int)((0x30d4 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10)
      ;
      *(short *)(param_1 + 0x56) = -sVar2;
      iVar3 = func_0x00083f50((int)-sVar2);
      *(short *)(param_1 + 0x48) = (short)(iVar3 >> 4);
      iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x4c) = (short)(-iVar3 >> 4);
      *(undefined2 *)(param_1 + 0x44) = 0x800;
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
  }
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
  if (*(short *)(param_1 + 0x2e) < 0x30d5) {
    *(undefined2 *)(param_1 + 0x2e) = 0x30d4;
    *(undefined2 *)(param_1 + 0x36) = 0x11d7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

