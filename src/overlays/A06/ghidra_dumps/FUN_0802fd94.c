// FUN_0802fd94

/* WARNING: Control flow encountered bad instruction data */

bool FUN_0802fd94(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined2 *)(param_1 + 0x72) = 0;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x72) + 1;
  *(short *)(param_1 + 0x72) = sVar1;
  if (((int)sVar1 % 6 & 0xffffU) == 0) {
    func_0x00074590(8,6,0xffffffe2);
  }
  return 0x29 < *(short *)(param_1 + 0x72);
}

