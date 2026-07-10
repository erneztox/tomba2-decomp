// FUN_000029f0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000029f0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  short local_12;
  undefined2 local_e;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(param_1 + 0x78) = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x3c;
    iVar1 = func_0x00072ddc(param_1,0,3,0x10);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x1c) = 0x8010ca1c;
      *(undefined1 *)(iVar1 + 3) = 3;
    }
  }
  else if (*(char *)(param_1 + 0x78) != '\x01') {
    halt_baddata();
  }
  uVar2 = *(ushort *)(param_1 + 0x40) - 1;
  *(short *)(param_1 + 0x40) = (short)uVar2;
  if ((int)(uVar2 * 0x10000) >> 0x10 == -1) {
    func_0x0004d4c4(0x58,1);
    func_0x0004b2e8();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((uVar2 & 1) != 0) {
    local_16 = _DAT_1f800160;
    local_e = _DAT_1f800164;
    local_12 = _DAT_1f800162 + -200;
    func_0x0003116c(0x2c,auStack_18,0xffffffe0);
  }
  if (((int)*(short *)(param_1 + 0x40) % 0x14 & 0xffffU) == 0) {
    func_0x00074590(0x38,0x1e,0);
  }
  return 0;
}

