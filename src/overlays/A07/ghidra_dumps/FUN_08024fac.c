// FUN_08024fac

/* WARNING: Control flow encountered bad instruction data */

bool FUN_08024fac(int param_1)

{
  ushort uVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined2 *)(param_1 + 0x40) = 0x3c;
    *(undefined2 *)(param_1 + 0x42) = 6;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *(short *)(param_1 + 0x42) - 1;
  *(ushort *)(param_1 + 0x42) = uVar1;
  if ((int)((uint)uVar1 << 0x10) < 1) {
    *(undefined2 *)(param_1 + 0x42) = 6;
    func_0x00074590(8,6,0xffffffe2);
  }
  uVar1 = *(short *)(param_1 + 0x40) - 1;
  *(ushort *)(param_1 + 0x40) = uVar1;
  return (int)((uint)uVar1 << 0x10) < 1;
}

