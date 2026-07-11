// FUN_0801eb10

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801eb10(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    func_0x0007e9c8(0xffffff,1,4);
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 != -1) {
      return;
    }
    *(undefined2 *)(param_1 + 0x40) = 0xf0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bfa20 < 8) {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 1;
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
    }
  }
  else if (bVar1 == 2) {
    uVar3 = (uint)*(byte *)(param_1 + 0x40);
    func_0x0007e9c8(uVar3 << 0x10 | uVar3 << 8 | uVar3,1,4);
    if (*(short *)(param_1 + 0x40) < 0x21) {
      func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x48);
      DAT_800bfa20 = 9;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      return;
    }
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -0x20;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

