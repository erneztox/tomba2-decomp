// FUN_801394a0

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_801394a0(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
    FUN_801406e4(param_1);
    sVar2 = *(short *)(param_1 + 0x42) + -1;
    *(short *)(param_1 + 0x42) = sVar2;
    uVar3 = 0;
    if (sVar2 != -1) goto LAB_80139638;
    if (*(char *)(param_1 + 4) == '\x02') {
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        *(undefined1 *)(param_1 + 0x29) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfffb;
      *(undefined2 *)(param_1 + 0x58) = 0;
      if (*(short *)(param_1 + 4) == 0x402) {
        *(undefined1 *)(param_1 + 7) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Subroutine does not return */
      FUN_801402b8(param_1,2,3);
    }
    if (bVar1 == 2) {
      uVar3 = func_0x8009a450();
      return uVar3;
    }
    if (bVar1 != 3) {
      *(undefined1 *)(param_1 + 0x29) = 0;
      halt_baddata();
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
    FUN_801406e4(param_1);
    sVar2 = *(short *)(param_1 + 0x42) + -1;
    *(short *)(param_1 + 0x42) = sVar2;
    uVar3 = 0;
    if (sVar2 != -1) goto LAB_80139638;
  }
  uVar3 = 1;
LAB_80139638:
  *(undefined1 *)(param_1 + 0x29) = 0;
  return uVar3;
}

