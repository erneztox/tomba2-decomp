// FUN_08027f6c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08027f6c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) =
           *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + -0x200;
      if (*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) < 0x200) {
        param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (param_1[0x29] != '\0') {
          param_1[5] = 1;
        }
        *(undefined2 *)(param_1 + 0x84) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) =
           *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + 0x200;
      if (0xfff < *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a)) {
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0x1000;
        param_1[5] = 0;
        param_1[0x29] = 0;
      }
    }
    if (param_1[0x29] == '\x01') {
      iVar2 = -((int)((uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) * 7) >> 7);
      iVar3 = iVar2 + 0xe0;
      if (iVar3 < 0) {
        iVar3 = iVar2 + 0xe3;
      }
      *(short *)(param_1 + 0x84) = (short)(iVar3 >> 2);
    }
    if (DAT_800e800b == '\x14') {
      param_1[1] = 1;
      func_0x00077ebc(param_1);
    }
    else {
      iVar2 = func_0x0007778c(param_1);
      if (iVar2 == 0) {
        return;
      }
      func_0x00051844(param_1);
    }
  }
  else {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 0) {
      iVar2 = func_0x00051b70(param_1,0xc,0x18);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = func_0x0007aae8();
      *(int *)(param_1 + 0xc4) = iVar2;
      if (iVar2 == 0) {
        param_1[4] = 3;
      }
      else {
        param_1[8] = 2;
        param_1[9] = 2;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 6) = 0xffff;
        **(undefined2 **)(param_1 + 0xc4) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 4) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = 0xc00;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38) = 0x1000;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3a) = 0x1000;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3c) = 0x1000;
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0xc,0x17);
        *(undefined2 *)(param_1 + 0x80) = 0xa0;
        *(undefined2 *)(param_1 + 0x82) = 0x140;
        *(undefined2 *)(param_1 + 0x86) = 0xe0;
        *param_1 = 1;
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 0x84) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0xffa0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        param_1[4] = param_1[4] + '\x01';
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

