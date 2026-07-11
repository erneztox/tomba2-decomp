// FUN_08011754

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011754(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  puVar3 = _DAT_1f800148;
  DAT_1f800182 = DAT_1f800150;
  while( true ) {
    do {
      if (DAT_1f800182 == '\0') {
        return;
      }
      pbVar2 = (byte *)*puVar3;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar3 = puVar3 + 1;
    } while ((*pbVar2 & 1) == 0);
    bVar1 = pbVar2[2];
    if (bVar1 < 0x10) {
      if (bVar1 < 0xe) {
        if (bVar1 == 0xc) {
          func_0x00020868(param_1);
        }
      }
      else {
        func_0x00109ac8(param_1);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 0x1f) {
      func_0x00023764(param_1);
      halt_baddata();
    }
    if (bVar1 < 0x20) break;
    if (bVar1 != 0x4b) {
      halt_baddata();
    }
    func_0x0010996c(param_1);
  }
  if (bVar1 != 0x12) {
    halt_baddata();
  }
  func_0x0002311c(param_1);
  halt_baddata();
}

