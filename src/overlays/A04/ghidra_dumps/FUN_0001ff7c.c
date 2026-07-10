// FUN_0001ff7c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0001ff7c(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_s0;
  int iVar6;
  int unaff_s3;
  
  if (*(char *)(unaff_s0 + 0x2b) != '\0') {
    *(undefined4 *)(unaff_s3 + 0x10) = 0;
    *(undefined2 *)(unaff_s3 + 0x74) = 0;
    halt_baddata();
  }
  sVar1 = *(short *)(unaff_s3 + 0x74);
  if (sVar1 == 1) {
    if (900 < (int)(((uint)*(ushort *)(unaff_s3 + 0x32) - (*(ushort *)(unaff_s0 + 0x32) - 0x46)) *
                   0x10000) >> 0x10) {
      return 0;
    }
    *(undefined2 *)(unaff_s3 + 0x74) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (1 < sVar1) {
    if (sVar1 == 2) {
      iVar2 = (int)(((uint)*(ushort *)(unaff_s3 + 0x2e) - (uint)*(ushort *)(unaff_s0 + 0x2e)) *
                   0x10000) >> 0x10;
      iVar3 = (int)(((uint)*(ushort *)(unaff_s3 + 0x36) - (uint)*(ushort *)(unaff_s0 + 0x36)) *
                   0x10000) >> 0x10;
      if (640000 < iVar2 * iVar2 + iVar3 * iVar3) {
        return 0;
      }
      *(undefined2 *)(unaff_s3 + 0x74) = 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (sVar1 == 0) {
    iVar2 = func_0x00129998();
    if (iVar2 == 0) {
      return 0;
    }
    *(int *)(unaff_s3 + 0x10) = iVar2;
    uVar5 = (uint)*(ushort *)(unaff_s3 + 0x32) - (*(ushort *)(iVar2 + 0x32) - 0x46);
    if ((int)(uVar5 & 0xffff) <= (int)*(short *)(unaff_s3 + 0x6e)) {
      iVar4 = (uint)*(ushort *)(unaff_s3 + 0x2e) - (uint)*(ushort *)(iVar2 + 0x2e);
      iVar3 = (uint)*(ushort *)(unaff_s3 + 0x36) - (uint)*(ushort *)(iVar2 + 0x36);
      if (*(char *)(iVar2 + 0x46) == '\b') {
        iVar2 = iVar4 * 0x10000 >> 0x10;
        iVar3 = iVar3 * 0x10000 >> 0x10;
        if (iVar2 * iVar2 + iVar3 * iVar3 < 0x9c41) {
          if (900 < (int)(uVar5 * 0x10000) >> 0x10) {
            *(short *)(unaff_s3 + 0x74) = *(short *)(unaff_s3 + 0x74) + 1;
            halt_baddata();
          }
          return 1;
        }
      }
      else if ((int)(uVar5 * 0x10000) >> 0x10 < 0x2a9) {
        iVar6 = iVar3 * 0x10000 >> 0x10;
        iVar3 = iVar4 * 0x10000 >> 0x10;
        sVar1 = func_0x00085690(iVar6,iVar3);
        iVar2 = func_0x00077768((int)*(short *)(iVar2 + 0x56),(int)-sVar1,1);
        if (iVar2 != 0) {
          if (640000 < iVar3 * iVar3 + iVar6 * iVar6) {
            *(undefined2 *)(unaff_s3 + 0x74) = 2;
            halt_baddata();
          }
          halt_baddata();
        }
      }
    }
    *(undefined2 *)(unaff_s3 + 0x74) = 0xffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  halt_baddata();
}

