// FUN_801147b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_801147b8(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 in_zero;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_v1;
  uint uVar6;
  undefined4 uVar7;
  undefined4 in_t4;
  int iVar8;
  int unaff_s2;
  int *unaff_s3;
  int unaff_s6;
  undefined4 *unaff_s7;
  undefined4 *puVar9;
  undefined4 extraout_f0;
  
  iVar8 = *(int *)(param_1 + 0x10);
  iVar3 = func_0x80083f50((int)*(short *)(*(int *)(param_1 + 0xcc) + 0xc));
  *(short *)(param_1 + 0x62) = (short)((uint)(iVar3 * -5) >> 8);
  iVar3 = func_0x80083e80((int)*(short *)(*(int *)(param_1 + 0xcc) + 0xc));
  *(short *)(param_1 + 0x60) = (short)((uint)(iVar3 * 5) >> 8);
  iVar3 = func_0x80083e80((int)*(short *)(param_1 + 0x56));
  *(short *)(param_1 + 100) = (short)(-iVar3 * (int)*(short *)(param_1 + 0x60) >> 0xc);
  iVar3 = func_0x80083f50((int)*(short *)(param_1 + 0x56));
  iVar3 = iVar3 * *(short *)(param_1 + 0x60) >> 0xc;
  *(short *)(param_1 + 0x60) = (short)iVar3;
  *(short *)(iVar8 + 0x2e) =
       *(short *)(*(int *)(param_1 + 0xcc) + 0x2c) + (short)((iVar3 << 0x10) >> 0xe);
  *(short *)(iVar8 + 0x32) =
       *(short *)(*(int *)(param_1 + 0xcc) + 0x30) + *(short *)(param_1 + 0x62) * 2;
  *(short *)(iVar8 + 0x36) =
       *(short *)(*(int *)(param_1 + 0xcc) + 0x34) + *(short *)(param_1 + 100) * 4;
  *(undefined2 *)(iVar8 + 0x58) = *(undefined2 *)(*(int *)(param_1 + 0xcc) + 0xc);
  if ((*(byte *)(iVar8 + 3) & 0x80) == 0) {
    func_0x800518fc(iVar8);
    puVar5 = (undefined4 *)(*(ushort *)(iVar8 + 0xb8) - 0x80);
    if (0xa00 < *(ushort *)(iVar8 + 0xb8)) {
      *(short *)(iVar8 + 0xb8) = (short)puVar5;
      if (((uint)puVar5 & 0xffff) < 0xa00) {
        *(undefined2 *)(iVar8 + 0xb8) = 0xa00;
      }
      uVar1 = *(ushort *)(iVar8 + 0xb8);
      puVar5 = (undefined4 *)(uint)uVar1;
      *(ushort *)(iVar8 + 0xba) = uVar1;
      *(ushort *)(iVar8 + 0xbc) = uVar1;
    }
    return puVar5;
  }
  iVar3 = iVar8;
  iVar4 = func_0x800517f8();
  if (iVar4 == 0) {
    if (extraout_v1 != 2) {
      puVar5 = (undefined4 *)FUN_80126a14();
      return puVar5;
    }
    iVar3 = (param_3 << 0x10) >> 0x10;
    uVar6 = (param_3 << 0x10) >> 0x1f;
    if (*(char *)(param_1 + 0x46) == '\0') {
      puVar5 = (undefined4 *)((ulonglong)((longlong)iVar3 * -0x7bdef7bd) >> 0x20);
      uVar7 = *(undefined4 *)(param_1 + 0xc4);
      do {
        *puVar5 = in_t4;
        if (-1 < _DAT_1f800000) {
          copFunction(2,0x1400006);
          *(uint *)(param_1 + -0x15) = uVar6 & 0xf0f0f0;
          uVar2 = getCopReg(2,0x18);
          *puVar5 = uVar2;
          if (0 < _DAT_1f800000) {
            uVar2 = getCopReg(2,0xc);
            *(undefined4 *)(unaff_s2 + 8) = uVar2;
            uVar2 = getCopReg(2,0xd);
            *(undefined4 *)(unaff_s2 + 0x14) = uVar2;
            uVar2 = getCopReg(2,0xe);
            *(undefined4 *)(unaff_s2 + 0x20) = uVar2;
            if ((((*(ushort *)(param_1 + -0x1d) < 0x140) || (*(ushort *)(param_1 + -0x11) < 0x140))
                || (*(ushort *)(param_1 + -5) < 0x140)) &&
               (((*(ushort *)(param_1 + -0x1b) < 0xf0 || (*(ushort *)(param_1 + -0xf) < 0xf0)) ||
                (*(ushort *)(param_1 + -3) < 0xf0)))) {
              *(uint *)(param_1 + -9) = (uVar6 & 0xf0f0f) << 4;
              _DAT_1f800084 = getCopReg(2,0x11);
              _DAT_1f800088 = getCopReg(2,0x12);
              _DAT_1f80008c = getCopReg(2,0x13);
              uVar6 = uVar6 >> 0x18 & 3;
              iVar8 = _DAT_1f80008c >> 2;
              if (uVar6 == 1) {
                if (_DAT_1f800084 <= _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (_DAT_1f80008c < _DAT_1f800084) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                if (uVar6 != 2) {
                  puVar5 = (undefined4 *)FUN_8012fb58();
                  return puVar5;
                }
                if (_DAT_1f800084 < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (_DAT_1f800088 < _DAT_1f80008c) {
                  iVar8 = _DAT_1f800088 >> 2;
                }
              }
              *unaff_s3 = iVar8;
              *(undefined4 *)(param_1 + 0x393f) = extraout_f0;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
        puVar9 = unaff_s7 + 9;
        if (unaff_s6 == 0) {
          _DAT_800bf544 = unaff_s2;
          return puVar9;
        }
        setCopReg(2,in_zero,unaff_s7[0xd]);
        setCopReg(2,unaff_s6,unaff_s7[0xf]);
        setCopReg(2,0x800,unaff_s7[0xe]);
        setCopReg(2,uVar6,unaff_s7[0x10]);
        setCopReg(2,0x1800,(uint)unaff_s7[0xe] >> 0x10);
        setCopReg(2,uVar7,unaff_s7[0x11]);
        *(undefined4 *)(param_1 + -0x21) = *puVar9;
        copFunction(2,0x280030);
        *(undefined4 *)(param_1 + -0x19) = *(undefined4 *)(iVar8 + 0xc);
        puVar5 = (undefined4 *)&DAT_1f800000;
        *(undefined4 *)(param_1 + -0xd) = *(undefined4 *)(iVar8 + 0x10);
        uVar6 = *(uint *)(iVar8 + 8);
        in_t4 = getCopControlWord(2,0xf800);
        iVar8 = iVar8 + 0x24;
        unaff_s6 = unaff_s6 + -1;
        unaff_s7 = puVar9;
      } while( true );
    }
    *(short *)(*(int *)(param_1 + 0xc4) + 0xc) =
         *(short *)(*(int *)(param_1 + 0xc4) + 0xc) - (short)(iVar3 / 0x3e);
    if (*(char *)(param_1 + 0x5e) == '\0') {
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  else {
    if (extraout_v1 != 0) {
      puVar5 = (undefined4 *)FUN_80126a14();
      return puVar5;
    }
    if (param_3 != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 2;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x46) = *(undefined1 *)(param_1 + 0x46);
      *(char *)(param_1 + 5) = (char)iVar3;
      puVar5 = (undefined4 *)FUN_80126a14();
      return puVar5;
    }
    if (*(char *)(param_1 + 0x5e) == '\x02') {
      *(undefined1 *)(param_1 + 5) = 2;
      puVar5 = (undefined4 *)FUN_80126a14();
      return puVar5;
    }
  }
  puVar5 = (undefined4 *)0x1;
  if ((1 < *(byte *)(param_1 + 3) - 7) || (*(char *)(param_1 + 0x47) == '\x01')) {
    iVar8 = func_0x800777fc(param_1);
    puVar5 = (undefined4 *)&DAT_1f800000;
    if (iVar8 != 0) {
      *(short *)(*(int *)(param_1 + 200) + 10) = -*(short *)(param_1 + 0x56) - _DAT_1f8000f2;
      puVar5 = (undefined4 *)func_0x800517f8(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
    }
  }
  return puVar5;
}

