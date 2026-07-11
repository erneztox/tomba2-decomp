// FUN_0802ff50

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0802ff50(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    *(undefined2 *)(param_1 + 0x74) = 0;
  }
  else if (*(char *)(iVar5 + 0x2b) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x74) = 0;
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x74);
  if (sVar1 == 1) {
    if (900 < (int)(((uint)*(ushort *)(param_1 + 0x32) - (*(ushort *)(iVar5 + 0x32) - 0x46)) *
                   0x10000) >> 0x10) {
      return 0;
    }
    *(undefined2 *)(param_1 + 0x74) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (1 < sVar1) {
    if (sVar1 == 2) {
      iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar5 + 0x2e)) * 0x10000)
              >> 0x10;
      iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar5 + 0x36)) * 0x10000)
              >> 0x10;
      if (640000 < iVar2 * iVar2 + iVar5 * iVar5) {
        return 0;
      }
      *(undefined2 *)(param_1 + 0x74) = 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (sVar1 == 0) {
    iVar5 = func_0x00129998();
    if (iVar5 == 0) {
      return 0;
    }
    *(int *)(param_1 + 0x10) = iVar5;
    uVar4 = (uint)*(ushort *)(param_1 + 0x32) - (*(ushort *)(iVar5 + 0x32) - 0x46);
    if ((int)(uVar4 & 0xffff) <= (int)*(short *)(param_1 + 0x6e)) {
      iVar3 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar5 + 0x2e);
      iVar2 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar5 + 0x36);
      if (*(char *)(iVar5 + 0x46) == '\b') {
        iVar5 = iVar3 * 0x10000 >> 0x10;
        iVar2 = iVar2 * 0x10000 >> 0x10;
        if (iVar5 * iVar5 + iVar2 * iVar2 < 0x9c41) {
          if (900 < (int)(uVar4 * 0x10000) >> 0x10) {
            *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x74) + 1;
            halt_baddata();
          }
          return 1;
        }
      }
      else if ((int)(uVar4 * 0x10000) >> 0x10 < 0x2a9) {
        iVar6 = iVar2 * 0x10000 >> 0x10;
        iVar2 = iVar3 * 0x10000 >> 0x10;
        sVar1 = func_0x00085690(iVar6,iVar2);
        iVar5 = func_0x00077768((int)*(short *)(iVar5 + 0x56),(int)-sVar1,1);
        if (iVar5 != 0) {
          if (640000 < iVar2 * iVar2 + iVar6 * iVar6) {
            *(undefined2 *)(param_1 + 0x74) = 2;
            halt_baddata();
          }
          halt_baddata();
        }
      }
    }
    *(undefined2 *)(param_1 + 0x74) = 0xffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  halt_baddata();
}

