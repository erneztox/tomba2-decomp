// FUN_80105dc4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

int FUN_80105dc4(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
          >> 0x10;
  iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
          >> 0x10;
  uVar5 = func_0x80084080(iVar3 * iVar3 + iVar4 * iVar4);
  iVar3 = -1;
  if ((int)(uVar5 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar4 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
    iVar3 = ((uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x86)) -
            (uint)*(ushort *)(param_1 + 0x84);
    if ((int)(short)*(ushort *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
        (int)(iVar4 + iVar3 & 0xffffU)) {
      func_0x80133cac(0);
      uVar2 = *(ushort *)(unaff_s2 + 0x42);
      *(ushort *)(unaff_s2 + 0x42) = uVar2 - 1;
      if (0 < (int)((uint)uVar2 << 0x10)) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(*(undefined1 *)(unaff_s2 + 3)) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        sVar1 = *(short *)(unaff_s2 + 0x32);
        iVar3 = func_0x80083f50((int)*(short *)(unaff_s3 + 0x10));
        iVar4 = func_0x8009a450();
        *(short *)(unaff_s3 + 0x10) = *(short *)(unaff_s3 + 0x10) + (short)(iVar4 >> 9);
        iVar3 = ((int)sVar1 + (iVar3 >> 5)) - (int)*(short *)(unaff_s2 + 0x32);
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0xf;
        }
        *(short *)(unaff_s2 + 0x32) = *(short *)(unaff_s2 + 0x32) + (short)(iVar3 >> 4);
        return unaff_s4;
      }
      if (*(char *)(unaff_s2 + 0x46) != '\b') {
        *(undefined1 *)(unaff_s2 + 0x46) = 8;
        *(int *)(*(int *)(unaff_s2 + 0xc4) + 0x40) = _DAT_800ecfc4 + *(int *)(_DAT_800ecfc4 + 8);
        func_0x80077cfc();
      }
      *(undefined2 *)(unaff_s2 + 0x42) = 0x3c;
      iVar3 = *(byte *)(unaff_s2 + 7) + 1;
      *(char *)(unaff_s2 + 7) = (char)iVar3;
      return iVar3;
    }
    if (iVar4 * 0x10000 < 0) {
      iVar3 = FUN_8010ee6c(iVar3,-iVar3);
      return iVar3;
    }
    iVar6 = (uint)*(ushort *)(param_1 + 0x84) +
            ((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84));
    iVar3 = 0;
    if (((iVar6 - iVar4) * 0x10000 <=
         (int)((((uint)*(ushort *)(param_1 + 0x80) + (uint)*(ushort *)(param_2 + 0x80)) - uVar5) *
              0x10000)) && (iVar3 = 2, 0 < iVar6 * 0x10000)) {
      iVar3 = 3;
    }
  }
  return iVar3;
}

