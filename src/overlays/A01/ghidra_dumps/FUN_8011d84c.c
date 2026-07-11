// FUN_8011d84c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80126990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_8011d84c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 in_zero;
  short sVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 in_t4;
  int unaff_s1;
  int unaff_s2;
  int *unaff_s3;
  int unaff_s6;
  undefined4 *unaff_s7;
  undefined4 *puVar10;
  undefined4 in_f0;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar2 = *(ushort *)(*(int *)(param_1 + 0x14) + 0x4a);
  if (bVar1 == 1) {
    iVar6 = (int)((uint)uVar2 << 0x10) >> 0x10;
    if (*(char *)(param_1 + 0x46) == '\0') {
      puVar5 = (undefined4 *)
               FUN_801268f0((int)((uint)uVar2 << 0x10) >> 0x1f,*(undefined4 *)(param_1 + 0xc4),uVar2
                            ,(int)((ulonglong)((longlong)iVar6 * -0x7bdef7bd) >> 0x20));
      return puVar5;
    }
    iVar8 = (int)(short)uVar2;
    *(short *)(*(int *)(param_1 + 0xc4) + 0xc) =
         *(short *)(*(int *)(param_1 + 0xc4) + 0xc) - (short)(iVar6 / 0x3e);
    if (iVar8 == 0) {
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 0;
      puVar5 = (undefined4 *)FUN_80126a14();
      return puVar5;
    }
    if (iVar8 < 0x1f00) {
      sVar4 = *(short *)(param_1 + 0x60) + 1;
      *(short *)(param_1 + 0x60) = sVar4;
      if ((0x1f00 - iVar8 >> 7) + 7 <= (int)sVar4) {
        func_0x80074590(0x82,0,0);
        *(undefined2 *)(param_1 + 0x60) = 0;
        puVar5 = (undefined4 *)FUN_80126a14();
        return puVar5;
      }
    }
    else {
      sVar4 = *(short *)(param_1 + 0x60) + 1;
      *(short *)(param_1 + 0x60) = sVar4;
      if (6 < sVar4) {
        _DAT_800bf544 = unaff_s2;
        return unaff_s7;
      }
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      puVar5 = (undefined4 *)FUN_80126a14();
      return puVar5;
    }
    if (uVar2 != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 2;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x46) = *(undefined1 *)(param_1 + 0x46);
      *(undefined1 *)(param_1 + 5) = 1;
      puVar5 = (undefined4 *)FUN_80126a14();
      return puVar5;
    }
    if (*(char *)(param_1 + 0x5e) == '\x02') {
      *(undefined1 *)(param_1 + 5) = 2;
      puVar5 = (undefined4 *)FUN_80126a14();
      return puVar5;
    }
  }
  else {
    if (bVar1 != 2) {
      puVar5 = (undefined4 *)FUN_80126a14();
      return puVar5;
    }
    iVar6 = (int)((uint)uVar2 << 0x10) >> 0x10;
    uVar7 = (int)((uint)uVar2 << 0x10) >> 0x1f;
    if (*(char *)(param_1 + 0x46) == '\0') {
      puVar5 = (undefined4 *)((ulonglong)((longlong)iVar6 * -0x7bdef7bd) >> 0x20);
      uVar9 = *(undefined4 *)(param_1 + 0xc4);
      do {
        *puVar5 = in_t4;
        if (-1 < _DAT_1f800000) {
          copFunction(2,0x1400006);
          *(uint *)(param_1 + -0x15) = uVar7 & 0xf0f0f0;
          uVar3 = getCopReg(2,0x18);
          *puVar5 = uVar3;
          if (0 < _DAT_1f800000) {
            uVar3 = getCopReg(2,0xc);
            *(undefined4 *)(unaff_s2 + 8) = uVar3;
            uVar3 = getCopReg(2,0xd);
            *(undefined4 *)(unaff_s2 + 0x14) = uVar3;
            uVar3 = getCopReg(2,0xe);
            *(undefined4 *)(unaff_s2 + 0x20) = uVar3;
            if ((((*(ushort *)(param_1 + -0x1d) < 0x140) || (*(ushort *)(param_1 + -0x11) < 0x140))
                || (*(ushort *)(param_1 + -5) < 0x140)) &&
               (((*(ushort *)(param_1 + -0x1b) < 0xf0 || (*(ushort *)(param_1 + -0xf) < 0xf0)) ||
                (*(ushort *)(param_1 + -3) < 0xf0)))) {
              *(uint *)(param_1 + -9) = (uVar7 & 0xf0f0f) << 4;
              _DAT_1f800084 = getCopReg(2,0x11);
              _DAT_1f800088 = getCopReg(2,0x12);
              _DAT_1f80008c = getCopReg(2,0x13);
              uVar7 = uVar7 >> 0x18 & 3;
              iVar6 = _DAT_1f80008c >> 2;
              if (uVar7 == 1) {
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
                if (uVar7 != 2) {
                  puVar5 = (undefined4 *)FUN_8012fb58();
                  return puVar5;
                }
                if (_DAT_1f800084 < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (_DAT_1f800088 < _DAT_1f80008c) {
                  iVar6 = _DAT_1f800088 >> 2;
                }
              }
              *unaff_s3 = iVar6;
              *(undefined4 *)(param_1 + 0x393f) = in_f0;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
        puVar10 = unaff_s7 + 9;
        if (unaff_s6 == 0) {
          _DAT_800bf544 = unaff_s2;
          return puVar10;
        }
        setCopReg(2,in_zero,unaff_s7[0xd]);
        setCopReg(2,unaff_s6,unaff_s7[0xf]);
        setCopReg(2,0x800,unaff_s7[0xe]);
        setCopReg(2,uVar7,unaff_s7[0x10]);
        setCopReg(2,0x1800,(uint)unaff_s7[0xe] >> 0x10);
        setCopReg(2,uVar9,unaff_s7[0x11]);
        *(undefined4 *)(param_1 + -0x21) = *puVar10;
        copFunction(2,0x280030);
        *(undefined4 *)(param_1 + -0x19) = *(undefined4 *)(unaff_s1 + 0xc);
        puVar5 = (undefined4 *)&DAT_1f800000;
        *(undefined4 *)(param_1 + -0xd) = *(undefined4 *)(unaff_s1 + 0x10);
        uVar7 = *(uint *)(unaff_s1 + 8);
        in_t4 = getCopControlWord(2,0xf800);
        unaff_s1 = unaff_s1 + 0x24;
        unaff_s6 = unaff_s6 + -1;
        unaff_s7 = puVar10;
      } while( true );
    }
    *(short *)(*(int *)(param_1 + 0xc4) + 0xc) =
         *(short *)(*(int *)(param_1 + 0xc4) + 0xc) - (short)(iVar6 / 0x3e);
    if (*(char *)(param_1 + 0x5e) == '\0') {
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  puVar5 = (undefined4 *)0x1;
  if ((1 < *(byte *)(param_1 + 3) - 7) || (*(char *)(param_1 + 0x47) == '\x01')) {
    iVar6 = func_0x800777fc(param_1);
    puVar5 = (undefined4 *)&DAT_1f800000;
    if (iVar6 != 0) {
      *(short *)(*(int *)(param_1 + 200) + 10) = -*(short *)(param_1 + 0x56) - _DAT_1f8000f2;
      puVar5 = (undefined4 *)func_0x800517f8(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
    }
  }
  return puVar5;
}

