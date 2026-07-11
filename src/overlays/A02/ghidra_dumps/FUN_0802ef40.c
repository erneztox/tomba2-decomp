// FUN_0802ef40

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802ef40(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      iVar2 = func_0x001278d8(param_1);
      if (iVar2 == 0) {
        *(undefined2 *)(param_1 + 0x80) = 0x50;
        *(undefined2 *)(param_1 + 0x82) = 0xa0;
        *(undefined2 *)(param_1 + 0x84) = 0x96;
        *(undefined2 *)(param_1 + 0x86) = 0x96;
        iVar2 = 0;
        *param_1 = 1;
        param_1[0x29] = 0;
        param_1[0xbf] = 0;
        param_1[4] = param_1[4] + '\x01';
        puVar3 = param_1;
        if (param_1[9] != '\0') {
          do {
            *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 8) = 0xf00;
            iVar2 = iVar2 + 1;
            puVar3 = puVar3 + 4;
          } while (iVar2 < (int)(uint)(byte)param_1[9]);
          halt_baddata();
        }
      }
    }
    else if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
    }
    return;
  }
  if (DAT_800bf816 == '\0') {
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 != 0) {
      func_0x00127a20(param_1);
      func_0x000517f8(param_1);
      param_1[0x29] = 0;
      halt_baddata();
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x2e) = _DAT_80138a18;
    *(undefined2 *)(param_1 + 0x32) = _DAT_80138a1a;
    *(undefined2 *)(param_1 + 0x36) = _DAT_80138a1c;
  }
  param_1[0x29] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

