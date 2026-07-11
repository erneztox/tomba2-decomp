// FUN_08011904

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011904(undefined4 param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  
  puVar2 = _DAT_1f800148;
  DAT_1f800182 = DAT_1f800150;
  do {
    while( true ) {
      do {
        if (DAT_1f800182 == '\0') {
          return;
        }
        pbVar1 = (byte *)*puVar2;
        DAT_1f800182 = DAT_1f800182 + -1;
        puVar2 = puVar2 + 1;
      } while ((*pbVar1 & 1) == 0);
      if (pbVar1[2] != 0x13) break;
      func_0x00109c00(param_1,pbVar1,*(undefined4 *)(pbVar1 + 0xc4));
    }
  } while (pbVar1[2] != 0x17);
  if (pbVar1[0x47] == 2) {
    func_0x001097fc(param_1,pbVar1,*(undefined4 *)(pbVar1 + 0xc0));
  }
  else {
    func_0x0001f650(param_1,pbVar1,*(undefined4 *)(pbVar1 + 0xc0));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

