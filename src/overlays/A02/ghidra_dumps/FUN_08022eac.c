// FUN_08022eac

/* WARNING: Control flow encountered bad instruction data */

void FUN_08022eac(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (DAT_800bf816 == '\0') {
      param_1[4] = 3;
    }
    else {
      func_0x0011bc0c(param_1);
      iVar3 = func_0x0007778c(param_1);
      if (iVar3 == 0) {
        return;
      }
      func_0x000517f8(param_1);
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
      iVar3 = func_0x00051b70(param_1,0xc,0x37);
      if (iVar3 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x82) = 200;
      *(undefined2 *)(param_1 + 0x86) = 200;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x80) = 100;
      *(undefined2 *)(param_1 + 0x84) = 100;
      param_1[0x2b] = 0;
      iVar3 = (uint)(byte)param_1[3] * 6;
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar3 + -0x7fed5df8);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar3 + -0x7fed5df6);
      uVar2 = *(undefined2 *)(iVar3 + -0x7fed5df4);
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x40) = 0;
      param_1[4] = param_1[4] + '\x01';
      *(undefined2 *)(param_1 + 0x36) = uVar2;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

