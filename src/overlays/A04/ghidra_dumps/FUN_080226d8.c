// FUN_080226d8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080226d8(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_800bfa00 == '\x02') {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    else {
      if (DAT_800e7eee != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 1) = DAT_800e7e81;
      func_0x00051614(param_1,param_1 + 0x88,0,0);
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
      iVar2 = func_0x00051b70(param_1,0xc,0x2f);
      if (iVar2 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x88) = 0xffa6;
      *(undefined2 *)(param_1 + 0x8a) = 0x4b;
      *(undefined2 *)(param_1 + 0x80) = 0x3c;
      *(undefined2 *)(param_1 + 0x82) = 0x78;
      *(undefined2 *)(param_1 + 0x84) = 0x96;
      *(undefined2 *)(param_1 + 0x8c) = 0;
      *(undefined2 *)(param_1 + 0x86) = 100;
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      func_0x000517f8(param_1);
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

