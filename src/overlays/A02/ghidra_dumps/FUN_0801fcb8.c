// FUN_0801fcb8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801fcb8(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  undefined1 auStack_28 [2];
  short local_26;
  short local_22;
  undefined2 local_1e;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    iVar5 = func_0x0006cdcc(0x800e8008);
    if (iVar5 == 0) {
      return;
    }
    DAT_800e807e = bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((DAT_800bf9fe & 0x80) != 0) {
        if (*(short *)(param_1 + 0x60) == 0x80) {
          if ((DAT_800bfa0f & 1) == 0) {
            DAT_800bfa0f = DAT_800bfa0f & 0xfd;
          }
          else {
            DAT_800bfa0f = DAT_800bfa0f & 0xfe;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(short *)(param_1 + 0x60) == 0x92) {
          *(undefined2 *)(param_1 + 0x60) = 0x93;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (DAT_800bfa16 == '\0') {
          func_0x0009a450();
          DAT_800bfa16 = DAT_800bfa16 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (DAT_800bfa16 == '\x01') {
          DAT_800bfa16 = '\x03';
          *(undefined2 *)(param_1 + 0x60) = 0x4a;
        }
        else {
          uVar3 = func_0x0009a450(param_1);
          uVar3 = uVar3 & 0xf;
          psVar4 = (short *)(uVar3 * 2 + -0x7fed5ee0);
          iVar5 = (int)*psVar4;
          if (((iVar5 == 0x60) || (iVar5 == 0x5c)) && (*(char *)(iVar5 + -0x7ff4054c) == '\0')) {
            *(short *)(param_1 + 0x60) = *psVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (3 < uVar3) {
            uVar3 = (uint)*(short *)((uVar3 - 4) * 2 + -0x7fed5ec0);
            if (((int)(uint)_DAT_800bf9d0 >> (uVar3 & 0x1f) & 3U) != 0) {
              _DAT_800bf9d0 = _DAT_800bf9d0 - (short)(1 << (uVar3 & 0x1f));
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            uVar3 = 0;
          }
          *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(uVar3 * 2 + -0x7fed5ee0);
          if (0xb < uVar3) {
            func_0x00119e68(param_1,2);
            *(undefined2 *)(param_1 + 0x42) = 6;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined2 *)(param_1 + 0x62) = 1;
          *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 0x80;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00119e68(param_1,0);
      *(undefined2 *)(param_1 + 0x60) = 0xffff;
      DAT_800bf9fe = 2;
      *(undefined2 *)(param_1 + 0x42) = 6;
      DAT_800e807e = 1;
      *(undefined1 *)(param_1 + 6) = 2;
    }
  }
  else if (bVar1 == 2) {
    if ((_DAT_1f80017c & 7) == 0) {
      func_0x00074590(0x85,0,0);
      uVar3 = func_0x0009a450();
      if ((uVar3 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      local_26 = *(short *)(param_1 + 0x2e) + -0xb4;
      local_1e = *(undefined2 *)(param_1 + 0x36);
      local_22 = *(short *)(param_1 + 0x32) + -0x32;
      iVar5 = func_0x0003116c(8,auStack_28,0);
      if (iVar5 != 0) {
        *(byte *)(iVar5 + 0x28) = *(byte *)(iVar5 + 0x28) | 0x80;
      }
    }
    iVar5 = func_0x00076d68(param_1);
    if (iVar5 != 1) {
      return;
    }
    sVar2 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    DAT_800e807e = 0;
    if ((DAT_800bf9fe & 0x80) == 0) {
      *(undefined1 *)(param_1 + 5) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0006cc1c(0x800e8008,0x80129ddc,0x1e);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar1 == 3) {
    iVar5 = func_0x0006cdcc(0x800e8008);
    if (iVar5 != 0) {
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

