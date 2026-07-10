// FUN_000064a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000064a0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  ushort uVar4;
  
  iVar1 = _DAT_1f800214;
  uVar4 = *(ushort *)(param_1 + 0x72) & 0xfffe;
  if ((*(ushort *)(param_1 + 0x72) & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar2 = func_0x00085690((int)*(short *)(_DAT_1f800214 + 0x36) -
                            (int)*(short *)(_DAT_1f800248 + 0x36),
                            (int)*(short *)(_DAT_1f800248 + 0x2e) -
                            (int)*(short *)(_DAT_1f800214 + 0x2e));
    uVar3 = (undefined2)(uVar2 & 0xfff);
    *(undefined2 *)(param_1 + 100) = uVar3;
    if (((int)(short)uVar4 <= (int)((uVar2 & 0xfff) - (int)*(short *)(iVar1 + 0x56) & 0xfff)) &&
       (0 < (short)uVar4)) {
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(iVar1 + 0x56) = uVar3;
  }
  else if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x00041438(_DAT_1f800214,(int)*(short *)(param_1 + 100),(int)(short)uVar4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

