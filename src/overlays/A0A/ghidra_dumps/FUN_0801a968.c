// FUN_0801a968

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801a968(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x40) = 0x8011eabc;
    *(undefined4 *)(param_1 + 0x50) = 0x8011ea8c;
    *(undefined2 *)(param_1 + 0x2c) = 0x12e0;
    *(undefined2 *)(param_1 + 0x2e) = 0xfc14;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x30) = 0x11a0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    func_0x00074590(0x8b,0,0);
  }
  bVar1 = *(char *)(param_1 + 7) + 1;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x40);
  *(byte *)(param_1 + 7) = bVar1;
  *(uint *)(param_1 + 0x54) = (uint)*(byte *)((uint)bVar1 * 2 + -0x7fee1520);
  *(uint *)(param_1 + 0x58) = (uint)*(byte *)((uint)*(byte *)(param_1 + 7) * 2 + -0x7fee151f);
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

