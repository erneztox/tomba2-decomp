// FUN_080216dc

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080216dc(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x72) + 1;
      *(short *)(param_1 + 0x72) = sVar2;
      if (0x3c < sVar2) {
        return 1;
      }
      return 0;
    }
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x72) = 0;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  if (((*(ushort *)(param_1 + 0x72) & 1) == 0) &&
     (iVar4 = 0, 0 < ((int)((uint)*(ushort *)(param_1 + 0x72) << 0x10) >> 0x12) + 1)) {
    do {
      iVar3 = func_0x000310f4(0x608,0xffffffec);
      if (iVar3 != 0) {
        *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < ((int)((uint)*(ushort *)(param_1 + 0x72) << 0x10) >> 0x12) + 1);
  }
  sVar2 = *(short *)(param_1 + 0x72) + 1;
  *(short *)(param_1 + 0x72) = sVar2;
  if (sVar2 < 0x23) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x72) = 0;
  *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

