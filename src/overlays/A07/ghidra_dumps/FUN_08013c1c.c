// FUN_08013c1c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013c1c(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = _DAT_1f800148;
  cVar2 = DAT_1f800150;
  do {
    while( true ) {
      do {
        puVar5 = _DAT_1f80013c;
        DAT_1f800182 = DAT_1f800144;
        if (cVar2 == '\0') goto joined_r0x08013d18;
        pbVar3 = (byte *)*puVar4;
        DAT_1f800182 = cVar2 + -1;
        puVar4 = puVar4 + 1;
        cVar2 = DAT_1f800182;
      } while ((*pbVar3 & 1) == 0);
      bVar1 = pbVar3[2];
      if (bVar1 == 0x32) goto LAB_08013cc0;
      if (bVar1 < 0x33) break;
      if (bVar1 == 0x4a) {
        func_0x0010b1e0(param_1);
        halt_baddata();
      }
      if (bVar1 != 0x4c) {
        halt_baddata();
      }
      func_0x0010b3f8(param_1);
      cVar2 = DAT_1f800182;
    }
  } while ((0xf < bVar1) || (bVar1 < 0xe));
LAB_08013cc0:
  func_0x000241fc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
joined_r0x08013d18:
  do {
    do {
      if (DAT_1f800182 == '\0') {
        return;
      }
      pbVar3 = (byte *)*puVar5;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar5 = puVar5 + 1;
    } while ((*pbVar3 & 1) == 0);
    if (pbVar3[0xc] == 9) {
      func_0x0010ca60(param_1);
      halt_baddata();
    }
  } while (pbVar3[0xc] != 2);
  bVar1 = pbVar3[2];
  if (bVar1 == 0x53) {
    func_0x0010aaa8(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 != 8) goto LAB_08013db4;
  if (*(char *)(param_1 + 2) != '\x05') {
    func_0x0002423c(param_1);
    halt_baddata();
  }
  goto LAB_08013dbc;
LAB_08013db4:
  if (bVar1 == 0x54) {
LAB_08013dbc:
    func_0x000241fc(param_1);
  }
  goto joined_r0x08013d18;
}

