// FUN_0802be7c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802be7c(int param_1)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  
  func_0x00124a08();
  if (((int)_DAT_800e7ffe & 0x8200U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar3 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
  bVar1 = ((*(short *)(param_1 + 0x60) - sVar3) + 0x400U & 0xfff) < 0x801;
  if ((*(ushort *)(param_1 + 0x62) & 1) == 0) {
    bVar2 = false;
    if (bVar1) goto LAB_0802bf20;
  }
  else if (!bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = true;
LAB_0802bf20:
  if (bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x02';
  *(undefined1 *)(param_1 + 7) = 0;
  return 0;
}

