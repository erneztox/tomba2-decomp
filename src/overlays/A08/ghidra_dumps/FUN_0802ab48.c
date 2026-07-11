// FUN_0802ab48

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802ab48(undefined1 *param_1)

{
  short sVar1;
  
  param_1[1] = 1;
  func_0x00077ebc();
  if (param_1[5] == '\0') {
    *(undefined2 *)(param_1 + 0x2e) = 0x3a4c;
    *(undefined2 *)(param_1 + 0x32) = 0xdd0f;
    *(undefined2 *)(param_1 + 0x36) = 0x23fa;
    *(undefined2 *)(param_1 + 0x4a) = 0xd800;
    param_1[5] = param_1[5] + '\x01';
  }
  else if (param_1[5] == '\x01') {
    sVar1 = *(short *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x4a) = sVar1 + 0x380;
    if (0x2800 < (short)(sVar1 + 0x380)) {
      *(undefined2 *)(param_1 + 0x4a) = 0x2800;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    if ((-1 < *(short *)(param_1 + 0x4a)) && (-0x22f2 < *(short *)(param_1 + 0x32))) {
      func_0x00074590(0x38,0x16,0);
      func_0x00074590(0x2a,0x14,0);
      *(undefined2 *)(param_1 + 0x32) = 0xdd0f;
      *param_1 = 1;
      param_1[3] = 3;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

