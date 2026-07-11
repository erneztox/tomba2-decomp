// FUN_08026568

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08026568(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0011f23c(param_1);
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x000518fc(param_1);
    }
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      func_0x00040cdc(param_1,0x80139240,0x800a3d18);
      if ((_DAT_800bfe56 & 4) == 0) {
        *(undefined1 *)(param_1 + 0x5e) = 0;
      }
      else {
        if (DAT_800bf93b == -1) {
          *(undefined1 *)(param_1 + 0x5e) = 2;
          *(undefined1 *)(param_1 + 0x7b) = 0;
          func_0x00041718(param_1,0,0);
          *(undefined2 *)(param_1 + 0x56) = 0xc02;
          *(undefined1 **)(param_1 + 0x14) = &DAT_8012b380;
          *(undefined1 *)(param_1 + 0x5f) = DAT_8012b380;
          uVar2 = DAT_8012b382;
          *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
          *(undefined1 *)(param_1 + 0x7b) = uVar2;
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 0x5e) = 1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

