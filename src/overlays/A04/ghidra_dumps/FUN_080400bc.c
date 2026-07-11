// FUN_080400bc

/* WARNING: Control flow encountered bad instruction data */

void FUN_080400bc(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = 1;
    func_0x00040b48(0x6c);
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *(short *)(param_1 + 0x4e) + 0x100U & 0xfff;
  *(ushort *)(param_1 + 0x4e) = uVar1;
  if (uVar1 == 0) {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x4e));
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x66) + (short)((iVar2 << 6) >> 0xc);
  return;
}

