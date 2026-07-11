// FUN_0803bf20

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803bf20(int param_1)

{
  short sVar1;
  
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4c);
  if (*(char *)(param_1 + 0xbf) == '\x01') {
    if (-1 < *(short *)(param_1 + 0x4a)) {
      *(undefined1 *)(param_1 + 0xbf) = 2;
    }
  }
  else if (*(char *)(param_1 + 0xbf) != '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x4a) = sVar1;
  if (0x2800 < sVar1) {
    *(undefined2 *)(param_1 + 0x4a) = 0x2800;
  }
  *(short *)(param_1 + 0x32) =
       *(short *)(param_1 + 0x32) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x4a) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

