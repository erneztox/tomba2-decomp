// FUN_080133dc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_080133dc(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c)) * 0x10000)
          >> 0x10;
  iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar1 = func_0x00084080(iVar6 * iVar6 + iVar5 * iVar5);
  uVar2 = 0xffffffff;
  if ((int)(uVar1 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar4 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
    if ((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
        (int)(iVar4 + (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x84) & 0xffff
             )) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1f80009c = func_0x00085690(-iVar5,iVar6);
    iVar5 = ((uint)*(ushort *)(param_1 + 0x80) + (uint)*(ushort *)(param_2 + 0x80)) - uVar1;
    if (iVar4 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar6 = (uint)*(ushort *)(param_1 + 0x84) << 0x10;
    iVar3 = (((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84)) +
            ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84))) - iVar4;
    if ((int)(short)iVar4 < -((iVar6 >> 0x10) - (iVar6 >> 0x1f) >> 1)) {
      uVar2 = iVar5 * 0x10000 < iVar3 * 0x10000 ^ 1;
    }
    else {
      uVar2 = 2;
      if (iVar3 * 0x10000 <= iVar5 * 0x10000) {
        halt_baddata();
      }
    }
  }
  return uVar2;
}

