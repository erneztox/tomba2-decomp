// FUN_08030ac0

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030ac0(int param_1)

{
  byte bVar1;
  
  if (DAT_800bf922 == -1) {
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      *(short *)(*(int *)(param_1 + 0xc4) + 8) = *(short *)(*(int *)(param_1 + 0xc4) + 8) + -0x40;
      if (*(short *)(*(int *)(param_1 + 0xc4) + 8) < -0x6ff) {
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        DAT_800bfa50 = 0x1f;
      }
    }
    else if (((bVar1 < 2) && (bVar1 == 0)) && (0x1d < DAT_800bfa50)) {
      *(undefined1 *)(param_1 + 5) = 1;
      func_0x00074590(0x1a,0x1b,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x000517f8(param_1);
  }
  return;
}

