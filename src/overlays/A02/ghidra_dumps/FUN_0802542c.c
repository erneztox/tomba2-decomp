// FUN_0802542c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0802542c(int param_1)

{
  bool bVar1;
  ushort uVar2;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    DAT_800e807e = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x5a;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  else if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((_DAT_1f80017c & 7) == 0) {
    func_0x00074590(0x86,0,0);
  }
  uVar2 = *(short *)(param_1 + 0x40) - 1;
  *(ushort *)(param_1 + 0x40) = uVar2;
  bVar1 = (int)((uint)uVar2 << 0x10) < 0;
  if (bVar1) {
    DAT_800e807e = 0;
  }
  return bVar1;
}

