// FUN_08044c68

/* WARNING: Control flow encountered bad instruction data */

void FUN_08044c68(int param_1)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0013d874(param_1);
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    if (0x13 < DAT_800bfa50) {
      if ((*(char *)(param_1 + 3) == '\0') && (*(short *)(param_1 + 0x60) < 7)) {
        uVar2 = *(short *)(param_1 + 0x42) + 1;
        *(ushort *)(param_1 + 0x42) = uVar2;
        if ((uVar2 & 3) != 0) {
          return;
        }
        func_0x00074590(0x38,(*(short *)(param_1 + 0x60) * 2 + 10) * 0x1000000 >> 0x18,0);
        *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 1;
      }
      else {
        *(undefined1 *)(param_1 + 4) = 3;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0xb) = 0x16;
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0x8011bc14;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined2 *)(param_1 + 0x42) = 0;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      halt_baddata();
    }
    if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

