// FUN_08021170

/* WARNING: Control flow encountered bad instruction data */

void FUN_08021170(int param_1)

{
  byte bVar1;
  short sVar2;
  
  if (DAT_800bf9fe == '\x01') {
    *(undefined1 *)(param_1 + 5) = 2;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 0x40) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((((*(char *)(param_1 + 0x2b) == '\x01') && (DAT_800bf80a == '\x01')) &&
      (((byte)(DAT_800bf80b + 0x81) < 2 || (DAT_800bf80b == 0x92)))) &&
     (sVar2 = func_0x00119dec(param_1), bVar1 = DAT_800bf80b, sVar2 != 0)) {
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(undefined2 *)(param_1 + 0x40) = 1;
    *(ushort *)(param_1 + 0x60) = (ushort)bVar1;
    DAT_800bf9fe = -0x7f;
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
  }
  return;
}

