// FUN_08011fc4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011fc4(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  puVar3 = _DAT_1f80013c;
  DAT_1f800182 = DAT_1f800144;
  do {
    while( true ) {
      do {
        if (DAT_1f800182 == '\0') {
          return;
        }
        pbVar2 = (byte *)*puVar3;
        DAT_1f800182 = DAT_1f800182 + -1;
        puVar3 = puVar3 + 1;
      } while ((*pbVar2 & 1) == 0);
      if (pbVar2[2] != 0x6a) break;
      func_0x00109458(param_1,pbVar2);
    }
  } while ((pbVar2[2] != 0xd3) || (iVar1 = func_0x00022f04(param_1,pbVar2), iVar1 == 0));
  if ((pbVar2[0x46] & 1) == 0) {
    *(char *)(param_1 + 0x2b) = (char)(*(ushort *)(param_1 + 0x140) >> 4);
    func_0x00022d08(param_1,pbVar2,1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

