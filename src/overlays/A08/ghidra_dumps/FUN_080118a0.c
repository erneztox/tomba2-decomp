// FUN_080118a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080118a0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  
  puVar6 = _DAT_1f800158;
  DAT_1f800182 = DAT_1f80015e;
  do {
    do {
      if (DAT_1f800182 == '\0') {
        return 0;
      }
      pbVar5 = (byte *)*puVar6;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar6 = puVar6 + 1;
    } while ((((*pbVar5 & 1) == 0) || (pbVar5[2] != 1)) || (pbVar5[3] != 0));
    iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(pbVar5 + 0x2e)) * 0x10000)
            >> 0x10;
    iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(pbVar5 + 0x36)) * 0x10000)
            >> 0x10;
    uVar4 = func_0x00084080(iVar2 * iVar2 + iVar3 * iVar3);
    bVar1 = false;
    if ((int)(uVar4 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(pbVar5 + 0x80)) {
      bVar1 = (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(pbVar5 + 0x32)) +
                    (((uint)*(ushort *)(pbVar5 + 0x84) + (uint)*(ushort *)(param_1 + 0x86)) -
                    (uint)*(ushort *)(param_1 + 0x84)) & 0xffff) <=
              (int)(short)*(ushort *)(param_1 + 0x86) + (int)*(short *)(pbVar5 + 0x86);
    }
  } while (!bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

