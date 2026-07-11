// FUN_0804458c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0804458c(int param_1)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0x66;
  if (*(short *)(param_1 + 0x72) == 0) {
    sVar1 = 0x2c;
  }
  if (*(char *)(param_1 + 0x78) == '\0') {
    func_0x00074590(7,0xfffffffa,0);
    *(short *)(param_1 + 100) = *(short *)(param_1 + 0x56) + 0x800;
    if (*(short *)(param_1 + 0x72) != 0) {
      func_0x00041718(param_1,2,4);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    uVar2 = *(short *)(param_1 + 0x56) + sVar1;
    *(ushort *)(param_1 + 0x56) = uVar2;
    if ((short)uVar2 < *(short *)(param_1 + 100)) {
      return 0;
    }
    *(ushort *)(param_1 + 0x56) = uVar2 & 0xfff;
    func_0x00041718(param_1,0,4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

