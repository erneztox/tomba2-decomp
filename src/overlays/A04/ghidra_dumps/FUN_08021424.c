// FUN_08021424

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08021424(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if ((2 < DAT_800bf9bb) && ((_DAT_1f80017c & 1) != 0)) {
      sVar2 = *(short *)(param_1 + 0x4e) + 2;
      *(short *)(param_1 + 0x4e) = sVar2;
      *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) - sVar2;
      if (0x3f < *(short *)(param_1 + 0x4e)) {
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        halt_baddata();
      }
      if (0x1f < *(short *)(param_1 + 0x4e)) {
        DAT_800bf9bb = 4;
        halt_baddata();
      }
    }
LAB_08021530:
    *(undefined1 *)(param_1 + 1) = 1;
    *(ushort *)(param_1 + 0x54) = *(ushort *)(param_1 + 0x54) & 0xfff;
    func_0x000517f8(param_1);
    if (*(char *)(param_1 + 0xbf) == '\0') {
      if (*(short *)(param_1 + 0x54) < 0x701) {
        func_0x00074590(0x18,0x14,0xffffffdd);
        *(undefined1 *)(param_1 + 0xbf) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (0xeff < *(short *)(param_1 + 0x54)) {
      func_0x00074590(0x18,0x14,0xffffffdd);
      *(undefined1 *)(param_1 + 0xbf) = 0;
    }
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bf9bb != 0) {
        *(undefined1 *)(param_1 + 5) = 2;
        *(undefined1 *)(param_1 + 0xbf) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined2 *)(param_1 + 0x4e) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + -0x40;
    goto LAB_08021530;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

