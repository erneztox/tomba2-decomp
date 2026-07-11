// FUN_08027a64

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08027a64(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined2 *puVar3;
  
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 == 1) {
    bVar2 = *(byte *)(param_1 + 0x5e);
    if (bVar2 == 1) {
      func_0x00120344(param_1);
    }
    else if (bVar2 < 2) {
      if (bVar2 == 0) {
        func_0x00120120(param_1);
      }
    }
    else if (bVar2 == 2) {
      func_0x001207ac(param_1);
      if (*(char *)(param_1 + 1) != '\0') {
        func_0x000518fc(param_1);
      }
      *(undefined1 *)(param_1 + 0x2b) = 0;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar2 < 2) {
    if (bVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00040cdc(param_1,0x8014005c,0x800a3d18);
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    if (DAT_800bf8d8 == '\0') {
      func_0x00051b04(*(undefined4 *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0),0x21,0);
      puVar3 = *(undefined2 **)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0);
      puVar3[3] = 7;
      puVar3[5] = 0x40;
      puVar3[6] = 0xe10;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[4] = 0;
      puVar3[0x1c] = 0x1000;
      puVar3[0x1d] = 0x1000;
      puVar3[0x1e] = 0x1000;
      *(undefined1 *)(param_1 + 0x5e) = 0;
    }
    else {
      _DAT_800ed098 = _DAT_800ed098 + 1;
      *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + -1;
      puVar1 = (undefined4 *)(_DAT_800e7e74 + -4);
      _DAT_800e7e74 = _DAT_800e7e74 + -4;
      *puVar1 = *(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 9) * 4 + 0xc0);
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 9);
      if (10 < DAT_800bf9d6) {
        *(undefined1 *)(param_1 + 0x5e) = 2;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x5e) = 1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar2 != 2) {
    if (bVar2 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

