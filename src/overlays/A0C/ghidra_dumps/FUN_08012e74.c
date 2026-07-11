// FUN_08012e74

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012e74(undefined4 param_1)

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
    if (bVar1 == 0x11) {
      func_0x00109aa0(param_1,pbVar2,*(undefined4 *)(pbVar2 + 0xc0));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 0x12) break;
    if (bVar1 == 0x12) {
      func_0x0002311c(param_1);
      halt_baddata();
    }
    if (bVar1 != 0x47) {
      halt_baddata();
    }
    func_0x001097bc(param_1,pbVar2,*(undefined4 *)(pbVar2 + 0xc0));
  }
  if (bVar1 == 1) {
    func_0x0001f650(param_1,pbVar2,*(undefined4 *)(pbVar2 + 0xc0));
    halt_baddata();
  }
  if (bVar1 != 8) {
    halt_baddata();
  }
  func_0x00109e04(param_1,pbVar2,*(undefined4 *)(pbVar2 + 0xc0));
  halt_baddata();
}

