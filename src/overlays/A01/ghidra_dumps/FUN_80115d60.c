// FUN_80115d60

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_80115d60(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 in_zero;
  ushort uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int *in_t1;
  int in_t2;
  uint in_t4;
  int iVar10;
  int in_t5;
  uint *in_t6;
  int *in_t7;
  undefined1 *unaff_s1;
  uint in_t8;
  
  bVar1 = *(byte *)(param_1 + 5);
  iVar6 = param_1;
  if (bVar1 == 1) {
    func_0x8007778c(param_1);
    unaff_s1 = &DAT_800bf870;
    uVar5 = 0xff;
    if (DAT_800bf8bf == 0xff) {
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 0xbf) = 1;
    }
    else {
      if ((*(char *)(param_1 + 1) == '\0') || (*(char *)(param_1 + 0x2b) != '\x03'))
      goto LAB_80115f00;
      func_0x80042354(1,1);
      if ((DAT_800bf9f0 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x7a) = 1;
        puVar7 = (uint *)FUN_8011ee54();
        return puVar7;
      }
      DAT_800bf9f0 = DAT_800bf9f0 | 1;
      *(undefined1 *)(param_1 + 0x7a) = 0;
      iVar6 = param_1;
      func_0x80040d68(param_1,0x80136808);
      *(undefined1 *)(param_1 + 0x70) = 2;
      uVar5 = *(byte *)(param_1 + 5) + 1;
      *(char *)(param_1 + 5) = (char)uVar5;
    }
  }
  else {
    uVar5 = 2;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x8007778c(param_1);
        uVar5 = (ushort)DAT_800bf8bf;
        if (DAT_800bf8bf == 0) {
          if ((((*(char *)(param_1 + 1) == '\0') || (DAT_1f800207 != '\x10')) ||
              (_DAT_1f800164 < 0x399e)) || (iVar6 = func_0x8005308c(), iVar6 == 0))
          goto LAB_80115f00;
          func_0x80042354(1,1);
          iVar6 = param_1;
          func_0x80040d68(param_1,0x8013687c);
          uVar5 = 2;
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(undefined1 *)(param_1 + 5) = 2;
        }
        else {
          *(undefined1 *)(param_1 + 5) = 1;
        }
      }
    }
    else {
      uVar5 = 0xff;
      if (bVar1 == 2) {
        if (*(char *)(param_1 + 0x70) == -1) {
          *(undefined1 *)(param_1 + 5) = 1;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        func_0x80077e7c(param_1);
LAB_80115f00:
        func_0x80041098(param_1);
        puVar7 = (uint *)func_0x8004190c(param_1);
        return puVar7;
      }
    }
  }
  *(ushort *)(*(int *)(param_1 + 0xc0) + 2) = ((uVar5 & 3) - 2) * 0xc;
  sVar2 = *(short *)(param_1 + 0x42);
  *(short *)(param_1 + 0x42) = sVar2 + -1;
  if (sVar2 != 1) {
    return (uint *)0x0;
  }
  DAT_800e807e = 0;
  do {
    setCopReg(2,0x2800,in_t4);
    uVar8 = *in_t6;
    *(uint *)(param_4 + -0x2d) = uVar8 & 0xfff0f0f0;
    copFunction(2,0x280030);
    *(uint *)(param_4 + -0x21) = uVar8 << 4 & in_t8;
    uVar8 = *(uint *)(in_t5 + -0xc);
    iVar10 = getCopControlWord(2,0xf800);
    *in_t7 = iVar10;
    if (-1 < *in_t7) {
      copFunction(2,0x1400006);
      *(undefined4 *)(param_4 + -0x25) = *(undefined4 *)(in_t5 + -8);
      iVar10 = getCopReg(2,0x18);
      *in_t7 = iVar10;
      if (0 < *in_t7) {
        uVar4 = getCopReg(2,0xc);
        *(undefined4 *)(in_t2 + 8) = uVar4;
        uVar4 = getCopReg(2,0xd);
        *(undefined4 *)(in_t2 + 0x14) = uVar4;
        uVar4 = getCopReg(2,0xe);
        *(undefined4 *)(in_t2 + 0x20) = uVar4;
        setCopReg(2,in_zero,in_t6[10]);
        setCopReg(2,0x800,in_t6[9] >> 0x10);
        *(uint *)(param_4 + -0x15) = uVar8 & in_t8;
        copFunction(2,0x180001);
        *(uint *)(param_4 + -9) = uVar8 << 4 & in_t8;
        *(undefined4 *)(param_4 + -0x19) = *(undefined4 *)(in_t5 + -4);
        iVar10 = getCopControlWord(2,0xf800);
        *in_t7 = iVar10;
        if (-1 < *in_t7) {
          uVar4 = getCopReg(2,0xe);
          *(undefined4 *)(in_t2 + 0x2c) = uVar4;
          if (((((*(ushort *)(param_4 + -0x29) < 0x140) || (*(ushort *)(param_4 + -0x1d) < 0x140))
               || ((*(ushort *)(param_4 + -0x11) < 0x140 || (*(ushort *)(param_4 + -5) < 0x140))))
              && (((*(ushort *)(param_4 + -0x27) < 0xf0 || (*(ushort *)(param_4 + -0x1b) < 0xf0)) ||
                  ((*(ushort *)(param_4 + -0xf) < 0xf0 || (*(ushort *)(param_4 + -3) < 0xf0)))))) &&
             (((uVar8 >> 0x18 & 0x40) == 0 || (_DAT_1f80009c == 0)))) {
            _DAT_1f800084 = getCopReg(2,0x10);
            _DAT_1f800088 = getCopReg(2,0x11);
            _DAT_1f80008c = getCopReg(2,0x12);
            _DAT_1f800090 = getCopReg(2,0x13);
            uVar8 = uVar8 >> 0x18 & 3;
            iVar6 = _DAT_1f800090;
            if (uVar8 == 1) {
              iVar10 = *(int *)(unaff_s1 + 0x88);
              if (*(int *)(unaff_s1 + 0x88) < _DAT_00000085) {
                iVar10 = _DAT_00000085;
              }
              bVar3 = _DAT_1f800090 < iVar10;
              if (_DAT_1f800090 < *(int *)(param_1 + 0x8c)) {
                puVar7 = (uint *)FUN_80131074();
                return puVar7;
              }
            }
            else {
              if (uVar8 != 2) {
                halt_baddata();
              }
              iVar10 = *(int *)(unaff_s1 + 0x88);
              if (_DAT_00000085 < *(int *)(unaff_s1 + 0x88)) {
                iVar10 = _DAT_00000085;
              }
              iVar9 = *(int *)(param_1 + 0x8c);
              bVar3 = iVar10 < _DAT_1f800090;
              if (iVar9 < _DAT_1f800090) {
                bVar3 = iVar10 < iVar9;
                iVar6 = iVar9;
              }
            }
            if (bVar3) {
              iVar6 = iVar10;
            }
            *in_t1 = iVar6 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
    }
    in_t5 = in_t5 + 0x2c;
    if (param_3 == 0) {
      _DAT_800bf544 = in_t2;
      return in_t6 + 0xb;
    }
    setCopReg(2,in_zero,in_t6[0x10]);
    setCopReg(2,0x800,in_t6[0x11]);
    setCopReg(2,0x1800,in_t6[0x11] >> 0x10);
    setCopReg(2,param_3,in_t6[0x12]);
    in_t4 = in_t6[0x14];
    setCopReg(2,iVar6,in_t6[0x13]);
    param_3 = param_3 + -1;
    in_t6 = in_t6 + 0xb;
  } while( true );
}

