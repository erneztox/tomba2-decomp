// FUN_80137910

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80137910(int param_1)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_1 + 6) == '\0') {
    if (((int)_DAT_800e7ffe & 0x8200U) == 0) {
      sVar4 = *(short *)(param_1 + 0x60);
      sVar3 = func_0x800782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
      bVar1 = ((sVar4 - sVar3) + 0x400U & 0xfff) < 0x801;
      if ((*(ushort *)(param_1 + 0x62) & 1) == 0) {
        bVar2 = true;
        if (bVar1) {
          bVar2 = false;
        }
      }
      else {
        bVar2 = false;
        if (bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      if (bVar2) {
        *(undefined2 *)(param_1 + 6) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  else {
    if (*(char *)(param_1 + 6) != '\x01') {
      *(undefined2 *)(param_1 + 6) = 2;
      uVar5 = FUN_801409a4();
      return uVar5;
    }
    sVar4 = func_0x801460e8(param_1);
    if (sVar4 == 0) goto LAB_801379f4;
  }
  *(undefined2 *)(param_1 + 6) = 2;
LAB_801379f4:
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
  FUN_801406e4();
  return 0;
}

