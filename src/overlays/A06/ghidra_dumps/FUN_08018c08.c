// FUN_08018c08

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018c08(byte *param_1,undefined1 *param_2)

{
  int iVar1;
  
  if (((((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) && (param_1[0x78] == 0)) &&
      (param_1[0x144] < 2)) &&
     ((((*param_1 & 6) == 0 && (DAT_1f800137 == '\0')) && (iVar1 = func_0x00022f04(), iVar1 != 0))))
  {
    if (*(short *)(param_1 + 0x16e) < 2) {
      param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
      func_0x00022d08(param_1,param_2,1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_2[0x29] = 1;
    *param_2 = 2;
    *param_1 = 6;
    param_1[5] = 0x18;
    param_1[6] = 0;
    param_1[7] = 0;
    DAT_1f800182 = 0;
  }
  return;
}

