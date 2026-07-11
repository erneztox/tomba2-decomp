// FUN_0803e7e4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803e7e4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 0x80) {
    if (0x80 < bVar1) {
      if (bVar1 != 0x81) {
        halt_baddata();
      }
      if (*(char *)(param_1 + 0x5e) != '\0') {
        *(undefined1 *)(param_1 + 0xbf) = 1;
        func_0x00077cfc(param_1,0x80149588,0,8);
        func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
        uVar2 = _DAT_1f8001a4;
        *(undefined1 *)(param_1 + 6) = 3;
        *(undefined1 *)(param_1 + 4) = 1;
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined2 *)(param_1 + 0x40) = 0x3c;
        *(undefined2 *)(param_1 + 0x7a) = uVar2;
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xbf;
    func_0x00026100(0xc);
  }
  func_0x00074590(0x8f,0,0);
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x00077cfc(param_1,0x80149588,0x16,4);
  *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

