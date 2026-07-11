// FUN_080153d0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080153d0(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  
  puVar6 = _DAT_1f80014c;
  DAT_1f800182 = DAT_1f800152;
  do {
    while( true ) {
      do {
        do {
          if (DAT_1f800182 == '\0') {
            return _DAT_1f800080;
          }
          pbVar5 = (byte *)*puVar6;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar6 = puVar6 + 1;
        } while ((*pbVar5 & 1) == 0);
        bVar1 = pbVar5[2];
      } while (bVar1 < 0x2f);
      if (0x30 < bVar1) break;
      func_0x0010e240(param_1,pbVar5);
    }
  } while (((bVar1 != 0x41) || (pbVar5[0x5e] != 0)) ||
          (iVar4 = func_0x00024338(param_1,pbVar5), iVar3 = _DAT_1f80008c, iVar4 == 0));
  pbVar5[0x29] = 1;
  pbVar5[0x2b] = (byte)(iVar3 + 0x800 >> 4);
  *(undefined2 *)(param_1 + 0x156) = 0xffe5;
  sVar2 = *(short *)(pbVar5 + 0x80);
  *(undefined1 *)(param_1 + 0x164) = 1;
  *(undefined1 *)(param_1 + 0x15c) = 0;
  DAT_1f800182 = 0;
  _DAT_1f800080 = pbVar5;
  *(short *)(param_1 + 0x152) = sVar2 + *(short *)(param_1 + 0x80) + -0xc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

