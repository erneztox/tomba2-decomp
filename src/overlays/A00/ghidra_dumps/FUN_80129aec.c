// FUN_80129aec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80129c54) */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80129aec(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_lo;
  
  sVar2 = *(short *)(param_1 + 0x76);
  uVar5 = (uint)*(ushort *)(param_1 + 0x76);
  if (sVar2 != 1) {
    if (sVar2 < 2) {
      if (sVar2 == 0) {
        if (*(char *)(param_1 + 0x2b) == '\0') {
          return;
        }
        *(ushort *)(param_1 + 0x76) = *(ushort *)(param_1 + 0x76) + 1;
      }
    }
    else if (sVar2 == 2) {
      *(short *)(*(int *)(param_1 + 0xc0) + 0xc) =
           *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + *(short *)(param_1 + 0x4c);
      uVar5 = *(uint *)(param_1 + 0xc0);
      if (((int)*(short *)(uVar5 + 0xc) < -(int)*(short *)(param_1 + 0x48)) ||
         ((int)*(short *)(param_1 + 0x48) < (int)*(short *)(uVar5 + 0xc))) {
        iVar4 = -(uint)*(ushort *)(param_1 + 0x48);
        if (0 < *(short *)(param_1 + 0x4c)) {
          *(ushort *)(uVar5 + 0xc) = *(ushort *)(param_1 + 0x48);
          *(int *)(param_1 + 0x34) = iVar4 + in_lo;
          func_0x8004766c();
          func_0x80048750(param_1);
          *(short *)(param_1 + 0xb8) = *(short *)(param_1 + 0xb8) + -0x80;
          *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + -0x80;
          *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + -0x80;
          if (0x100 < *(ushort *)(param_1 + 0xb8)) {
            return;
          }
          DAT_00000005 = DAT_00000005 + '\x01';
          FUN_8013bcb4();
          return;
        }
        *(short *)(uVar5 + 0xc) = (short)iVar4;
        sVar2 = *(short *)(param_1 + 0x48) + -0x18;
        *(short *)(param_1 + 0x48) = sVar2;
        if (sVar2 < 1) {
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
          *(undefined2 *)(param_1 + 0x76) = 0;
          goto LAB_80132d30;
        }
        if (sVar2 < 0xa1) {
          *(undefined1 *)(param_1 + 0x5f) = 0;
        }
        *(short *)(param_1 + 0x4c) = -*(short *)(param_1 + 0x4c);
        *(short *)(param_1 + 0x52) = -*(short *)(param_1 + 0x52);
      }
      sVar2 = *(short *)(param_1 + 0x4c) + *(short *)(param_1 + 0x52);
      *(short *)(param_1 + 0x4c) = sVar2;
      if (0x5e < (ushort)(sVar2 - 1U)) {
        if ((sVar2 < 0) && (-0x60 < sVar2)) {
          *(undefined2 *)(param_1 + 0x4c) = 0xffa0;
        }
        if (*(char *)(param_1 + 0x2b) != '\0') {
          *(undefined2 *)(param_1 + 0x76) = 1;
        }
        return;
      }
      FUN_80132d2c();
      return;
    }
    goto LAB_80132d30;
  }
  if ((*(byte *)(param_1 + 0x2b) & 0x80) == 0) {
    *(undefined2 *)(param_1 + 0x4c) = 0x180;
    *(undefined2 *)(param_1 + 0x48) = 0x180;
LAB_80129be8:
    if (*(short *)(param_1 + 0x62) == 0) goto LAB_80129bf8;
  }
  else {
    *(undefined2 *)(param_1 + 0x4c) = 0x200;
    *(undefined2 *)(param_1 + 0x48) = 0x200;
    if (*(short *)(param_1 + 0x62) != 0) {
      if ((*(byte *)(param_1 + 3) & 0xc0) != 0) {
        FUN_80132b44();
        return;
      }
      if (*(short *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7feb5928) != -1) {
        iVar4 = param_1;
        iVar3 = func_0x8004cbd8(param_1);
        sVar2 = func_0x80085690(-((int)((iVar4 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >>
                                 0x10),(int)(((uint)*(ushort *)(iVar3 + 0x2e) -
                                             (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10);
        cVar1 = func_0x80077768((int)sVar2,(int)*(short *)(iVar3 + 0x60),0);
        *(char *)(iVar3 + 0x46) = cVar1;
        if (cVar1 != '\0') {
          *(undefined2 *)(iVar3 + 0x44) = 0xf800;
          FUN_8013bcb4();
          return;
        }
        *(undefined2 *)(iVar3 + 0x44) = 0x800;
        FUN_8013bcb4();
        return;
      }
      goto LAB_80129be8;
    }
LAB_80129bf8:
    *(short *)(param_1 + 0x4c) = *(short *)(param_1 + 0x4c) + -0x80;
    *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + -0x80;
  }
  *(undefined2 *)(param_1 + 0x52) = 0xfff8;
  uVar5 = (uint)*(byte *)(param_1 + 0x46) << 4;
  iVar4 = func_0x80077768(uVar5,(int)*(short *)(param_1 + 0x56),1);
  if (iVar4 != 0) {
    *(short *)(param_1 + 0x4c) = -*(short *)(param_1 + 0x4c);
    *(short *)(param_1 + 0x52) = -*(short *)(param_1 + 0x52);
  }
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  if (*(char *)(param_1 + 1) != '\0') {
    func_0x80074590(0xf,0xfffffffb,0);
    return;
  }
  *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x76) + 1;
LAB_80132d30:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(uVar5 + 5)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return;
  }
}

