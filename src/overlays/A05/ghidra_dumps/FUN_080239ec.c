// FUN_080239ec

/* WARNING: Control flow encountered bad instruction data */

void FUN_080239ec(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0x8011a95c;
  param_1[2] = 0x2d;
  param_1[5] = 3;
  param_1[6] = 4;
  param_1[0xbf] = 2;
  *(undefined2 *)(param_1 + 0x50) = 0x180;
  *(undefined2 *)(param_1 + 0x42) = 3;
  param_1[4] = 1;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0x2f;
  func_0x000518fc();
  func_0x0011b9ec(param_1,7);
  param_1[3] = 1;
  *param_1 = 1;
  *(undefined2 *)(param_1 + 0x80) = 0x60;
  *(undefined2 *)(param_1 + 0x82) = 0xc0;
  *(undefined2 *)(param_1 + 0x84) = 0x60;
  *(undefined2 *)(param_1 + 0x86) = 0xc0;
  *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(param_1 + 0x56);
  if (param_1[0xbe] != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_1 + 0x56);
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x5f] = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined2 *)(param_1 + 0x72) = 0xffff;
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_1 + 0x2e);
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x36);
  if (param_1[1] != '\0') {
    func_0x00074590(0x8c,0,0);
  }
  return;
}

