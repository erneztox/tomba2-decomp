// FUN_08035f2c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08035f2c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0012fb28(param_1);
    if (DAT_800bf809 != '\0') {
      return;
    }
    if (DAT_1f800137 != '\0') {
      return;
    }
    if ((byte)param_1[5] < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0803614c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef5f40))();
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00051b70(param_1,0xc,0x6a);
      *(short *)(*(int *)(param_1 + 0xc0) + 2) = *(short *)(*(int *)(param_1 + 0xc0) + 2) + -0x46;
      *(undefined2 *)(param_1 + 0x80) = 0x96;
      *(undefined2 *)(param_1 + 0x82) = 300;
      *(undefined2 *)(param_1 + 0x84) = 0x46;
      *(undefined2 *)(param_1 + 0x86) = 0x8c;
      param_1[4] = param_1[4] + '\x01';
      if (param_1[3] == '\0') {
        param_1[0xd] = param_1[0xd] | 4;
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 5;
        *(undefined2 *)(param_1 + 0x2e) = 0x24ba;
        *(undefined2 *)(param_1 + 0x32) = 0xdb3c;
        *(undefined2 *)(param_1 + 0x36) = 0x22a4;
        param_1[0x2a] = 0x1c;
        *(undefined2 *)(param_1 + 0x56) = 0x2d2;
        if (param_1[0x47] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x44) = 0x1800;
        *(undefined2 *)(param_1 + 0x7c) = 0xe3c0;
        *(undefined2 *)(param_1 + 0x7e) = 0x25ec;
        param_1[0x46] = 1;
        param_1[0xbe] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x3318;
      *(undefined2 *)(param_1 + 0x32) = 0xec80;
      *(undefined2 *)(param_1 + 0x36) = 0x10b4;
      param_1[0x2a] = 0x23;
      *(undefined2 *)(param_1 + 0x56) = 0x12e;
      if (param_1[0x47] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x44) = 0xe800;
      *(undefined2 *)(param_1 + 0x7c) = 0xf400;
      param_1[0xbe] = 1;
      *(undefined2 *)(param_1 + 0x7e) = 0x1f54;
      param_1[0x46] = 0;
      *param_1 = 1;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x48) = (short)(iVar2 >> 4);
      *(undefined2 *)(param_1 + 0x4a) = 0;
      iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x4c) = (short)(-iVar2 >> 4);
      *(undefined2 *)(param_1 + 0x50) = 0;
      *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x32);
    }
  }
  else if (bVar1 == 2) {
    func_0x0007778c(param_1);
    if (param_1[5] == '\x01') {
      if ((param_1[6] == '\0') && (DAT_800e7fc5 != '\0')) {
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x69);
        param_1[6] = param_1[6] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      func_0x0012f5f0(param_1);
    }
    param_1[0x29] = 0;
    param_1[0x5f] = 0;
    if (param_1[1] == '\0') {
      return;
    }
    func_0x000517f8(param_1);
  }
  else if (bVar1 == 3) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + (uint)(byte)param_1[0x5e] * 4 + 0xc) = 0;
    func_0x0007a624();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

