// FUN_080340c4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080340c4(int param_1)

{
  byte bVar1;
  ushort uVar2;
  
  if (*(char *)(param_1 + 0x71) != -1) goto LAB_08034120;
  bVar1 = *(byte *)(param_1 + 0x5e);
  if (bVar1 == 2) {
LAB_0803410c:
    *(char *)(param_1 + 0x5e) = *(char *)(param_1 + 0x5e) + '\x01';
  }
  else {
    if (bVar1 < 3) {
      if (bVar1 != 0) {
        *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0803410c;
    }
    if (bVar1 == 4) goto LAB_0803410c;
  }
  *(undefined1 *)(param_1 + 5) = 0;
LAB_08034120:
  if (*(char *)(param_1 + 0x5e) != '\x02') {
    return;
  }
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined2 *)(param_1 + 0x42) = 6;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) == '\x02') {
    uVar2 = *(short *)(param_1 + 0x42) - 1;
    *(ushort *)(param_1 + 0x42) = uVar2;
    if (0 < (int)((uint)uVar2 << 0x10)) {
      return;
    }
    *(undefined2 *)(param_1 + 0x42) = 6;
    func_0x00074590(8,6,0xffffffe2);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

