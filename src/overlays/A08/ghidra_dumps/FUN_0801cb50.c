// FUN_0801cb50

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801cb50(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = DAT_800bfb54 != '\0';
  if (DAT_800bfb55 != '\0') {
    cVar2 = cVar2 + '\x01';
  }
  if (DAT_800bfb56 != '\0') {
    cVar2 = cVar2 + '\x01';
  }
  if (DAT_800bfb57 != '\0') {
    cVar2 = cVar2 + '\x01';
  }
  if (cVar2 == '\x03') {
    iVar1 = func_0x00040c00(0x2c);
    if (-1 < iVar1) {
      func_0x0004d4c4((int)*(short *)(param_1 + 0x68),1);
      func_0x0004d650(0xa0,1);
      func_0x0004d650(0xa1,1);
      func_0x0004d650(0xa2,1);
      func_0x0004d650(0xa3,1);
      func_0x0004d4f4(0xa4,1);
      func_0x0004ed94(0x71,0x41);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    func_0x0004d4c4((int)*(short *)(param_1 + 0x68),1);
  }
  return;
}

