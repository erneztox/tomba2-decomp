// FUN_08024e9c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08024e9c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short *psVar3;
  short sVar4;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar4 = *(short *)(param_1 + 0x42) + -1;
    *(short *)(param_1 + 0x42) = sVar4;
    if (sVar4 == -1) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    *(ushort *)(*(int *)(param_1 + 0xc0) + 2) = (_DAT_1f80017c & 1) * 6;
    uVar2 = func_0x0009a450();
    psVar3 = *(short **)(param_1 + 0xc0);
    sVar4 = ((uVar2 & 3) - 2) * 6;
    psVar3[2] = sVar4;
    *psVar3 = sVar4;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bfa3a < 5) {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined2 *)(param_1 + 0x42) = 0x10;
    }
  }
  else if (bVar1 == 2) {
    func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0xa00,8);
    func_0x00074590(0xc,0,0);
    func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x800,0x18);
    func_0x00074590(0xc,0,0);
    *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40) = 0;
    *(undefined1 *)(param_1 + 0xbf) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

