// FUN_08039734

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08039734(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 1) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 6) != '\0') {
    if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar3;
    if (0 < (int)((uint)uVar3 << 0x10)) {
      return;
    }
    func_0x00041768(param_1,0,8);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + -1;
    return;
  }
  iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)_DAT_1f800160) * 0x10000) >> 0x10;
  iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)_DAT_1f800164) * 0x10000) >> 0x10;
  iVar4 = func_0x00084080(iVar4 * iVar4 + iVar5 * iVar5);
  if ((iVar4 < 600) || (iVar4 < 0x44c)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = -1;
  if (iVar4 < 0x640) {
    iVar5 = 0;
  }
  if ((*(char *)(param_1 + 3) == '\x01') && (*(char *)(param_1 + 0x2a) != DAT_1f800207)) {
    iVar5 = -1;
  }
  if (-1 < iVar5) {
    iVar5 = iVar5 * 3;
    bVar2 = func_0x0009a450();
    bVar2 = bVar2 & 0xf;
    bVar1 = *(byte *)(param_1 + 0xbe);
    uVar6 = func_0x00085690(-((int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(param_1 + 0x36)) *
                                   0x10000) >> 0x10),
                            (int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(param_1 + 0x2e)) *
                                 0x10000) >> 0x10);
    uVar6 = func_0x00077768(uVar6 & 0xfff,(int)*(short *)(param_1 + 0x60),0);
    if (bVar1 == uVar6) {
      if (bVar2 <= *(byte *)(iVar5 + -0x7febe208)) {
LAB_08039910:
        *(undefined1 *)(param_1 + 5) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar2 <= *(byte *)(iVar5 + -0x7febe207)) {
        if ((*(char *)(param_1 + 3) != '\0') && (uVar6 = func_0x0009a450(param_1), (uVar6 & 1) != 0)
           ) goto LAB_08039910;
        func_0x00041768(param_1,1,8);
      }
    }
    else if (bVar2 <= *(byte *)(iVar5 + -0x7febe207)) {
      *(undefined1 *)(param_1 + 5) = 1;
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (*(char *)(param_1 + 5) != '\0') {
    return;
  }
  uVar3 = func_0x0009a450();
  *(ushort *)(param_1 + 0x40) = (uVar3 & 0x1f) + 0x10;
  if (*(char *)(param_1 + 0x46) != '\0') {
    func_0x00041768(param_1,0,8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

