// FUN_000091f0

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000091f0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        halt_baddata();
      }
      if (*(char *)(*(int *)(param_1 + 0x10) + 4) != '\x02') {
        return 0;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
      DAT_800bfa57 = DAT_800bfa57 + '\x01';
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (-1 < *(short *)(param_1 + 0x74)) {
      *(undefined1 *)(param_1 + 0x7a) = *(undefined1 *)(param_1 + 0x74);
    }
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  iVar2 = func_0x0007def8((int)(short)(*(ushort *)(param_1 + 0x72) | 0x1000),
                          *(undefined1 *)(param_1 + 0x7a),3);
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  DAT_800bfa56 = DAT_800bfa56 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

