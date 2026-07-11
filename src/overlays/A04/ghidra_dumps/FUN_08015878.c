// FUN_08015878

/* WARNING: Control flow encountered bad instruction data */

void FUN_08015878(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x2e) -
                ((uint)*(ushort *)(param_2 + 0x2e) + (uint)*(ushort *)(param_2 + 0x60))) * 0x10000)
          >> 0x10;
  iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x36) -
                ((uint)*(ushort *)(param_2 + 0x36) + (uint)*(ushort *)(param_2 + 100))) * 0x10000)
          >> 0x10;
  uVar7 = func_0x00084080(iVar5 * iVar5 + iVar6 * iVar6);
  bVar4 = false;
  if ((int)(uVar7 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    bVar4 = (int)(((uint)*(ushort *)(param_1 + 0x32) -
                  ((uint)*(ushort *)(param_2 + 0x32) + (uint)*(ushort *)(param_2 + 0x62))) +
                  (uint)*(ushort *)(param_2 + 0x84) +
                  ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84)) & 0xffff)
            <= (int)(short)*(ushort *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86);
  }
  if (bVar4) {
    if (*(char *)(param_2 + 0x5f) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar6 = (int)((*(ushort *)(param_1 + 0x60) + 0x800) * 0x10000) >> 0x10;
    iVar5 = func_0x00083f50(iVar6);
    sVar1 = *(short *)(param_1 + 0x80);
    sVar2 = *(short *)(param_2 + 0x80);
    iVar6 = func_0x00083e80(iVar6);
    sVar3 = *(short *)(param_2 + 0x80);
    *(short *)(param_1 + 0x2e) =
         (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc) +
         *(short *)(param_2 + 0x2e) + *(short *)(param_2 + 0x60);
    *(short *)(param_1 + 0x36) =
         (*(short *)(param_2 + 0x36) + *(short *)(param_2 + 100)) -
         (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
  }
  return;
}

