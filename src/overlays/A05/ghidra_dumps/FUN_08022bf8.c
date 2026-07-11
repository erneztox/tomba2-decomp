// FUN_08022bf8

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08022bf8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x72) == 0) {
    func_0x00077768((int)*(short *)(param_1 + 0x6c),(int)*(short *)(param_1 + 0x56),1);
    if (*(char *)(param_1 + 0xbe) != '\0') {
      *(undefined2 *)(param_1 + 0x4e) = 0xff00;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x4e) = 0x100;
    *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x56) + 0x800;
    *(undefined2 *)(param_1 + 0x68) = 1;
    *(short *)(param_1 + 0x72) = *(short *)(param_1 + 0x72) + 1;
  }
  else if (*(short *)(param_1 + 0x72) != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x56) + *(short *)(param_1 + 0x4e);
  *(short *)(param_1 + 0x56) = sVar1;
  if (*(char *)(param_1 + 0xbe) == '\0') {
    uVar2 = 0;
    if (*(short *)(param_1 + 0x6c) <= sVar1) {
      uVar2 = 1;
      *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x6c);
      *(undefined2 *)(param_1 + 0x72) = 0xffff;
      *(undefined2 *)(param_1 + 0x68) = 0;
      *(short *)(param_1 + 0x58) = 0x1000 - *(short *)(param_1 + 0x58);
    }
  }
  else {
    uVar2 = 0;
    if (sVar1 <= *(short *)(param_1 + 0x6c)) {
      *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x6c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return uVar2;
}

