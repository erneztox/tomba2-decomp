// FUN_8010b79c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80126990) */
/* WARNING: Removing unreachable block (ram,0x801269ac) */
/* WARNING: Removing unreachable block (ram,0x80126a18) */
/* WARNING: Removing unreachable block (ram,0x80126a44) */
/* WARNING: Removing unreachable block (ram,0x80126a64) */
/* WARNING: Removing unreachable block (ram,0x80126a78) */
/* WARNING: Removing unreachable block (ram,0x80126a8c) */
/* WARNING: Removing unreachable block (ram,0x80126aa0) */
/* WARNING: Removing unreachable block (ram,0x80126ab4) */
/* WARNING: Removing unreachable block (ram,0x80126acc) */
/* WARNING: Removing unreachable block (ram,0x80126b28) */
/* WARNING: Removing unreachable block (ram,0x80126b64) */
/* WARNING: Removing unreachable block (ram,0x80126b48) */
/* WARNING: Removing unreachable block (ram,0x80126b5c) */
/* WARNING: Removing unreachable block (ram,0x80126b18) */
/* WARNING: Removing unreachable block (ram,0x80126b20) */
/* WARNING: Removing unreachable block (ram,0x80126b70) */
/* WARNING: Removing unreachable block (ram,0x80126b8c) */
/* WARNING: Removing unreachable block (ram,0x80126b98) */
/* WARNING: Removing unreachable block (ram,0x80126bac) */
/* WARNING: Removing unreachable block (ram,0x80126bb4) */
/* WARNING: Removing unreachable block (ram,0x80127020) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8010b79c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int unaff_s2;
  undefined4 unaff_s7;
  
  bVar1 = *(byte *)(param_1 + 5);
  iVar8 = 1;
  if (bVar1 == 1) {
    sVar3 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar3 + -1;
    if (sVar3 == 1) {
      func_0x80074590(0x8d,0,0);
      *(short *)(param_1 + 0x42) = (short)((uint)(0x3000 - *(short *)(param_1 + 0x44)) >> 8);
    }
    iVar4 = (uint)*(ushort *)(param_1 + 0x36) - (*(ushort *)(param_1 + 0x60) - 200);
    iVar5 = 1;
    if (iVar4 * 0x80000 >> 0x10 < 0x2000) {
      *(short *)(param_1 + 0x44) = (short)iVar4 * 8;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x44) * -0x100;
    iVar7 = 0;
    iVar4 = param_1;
    if (1 < *(byte *)(param_1 + 8)) {
      do {
        iVar7 = *(int *)(iVar4 + 0xc4);
        *(short *)(iVar7 + 0xc) = *(short *)(iVar7 + 0xc) + (*(short *)(param_1 + 0x44) >> 3);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar5 < (int)(uint)*(byte *)(param_1 + 8));
    }
    if ((int)*(short *)(param_1 + 0x36) < *(short *)(param_1 + 0x60) + 300) {
      _DAT_1f8000d2 = _DAT_1f8000d2 + -8;
      if (_DAT_1f8000d2 < 0x2d71) {
        _DAT_1f8000d2 = 0x2d71;
      }
      _DAT_1f8000d6 = _DAT_1f8000d6 + -8;
      if (_DAT_1f8000d6 < -0x12a9) {
        _DAT_1f8000d6 = -0x12a9;
      }
      _DAT_1f8000da = _DAT_1f8000da + 0x10;
      if (0x409f < _DAT_1f8000da) {
        _DAT_1f8000da = 0x409f;
      }
    }
    if (*(short *)(param_1 + 0x60) <= *(short *)(param_1 + 0x36)) goto LAB_8010ba58;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x60);
    while( true ) {
      iVar4 = param_1 + 4;
      func_0x80084110(iVar7 + 0x18);
      iVar8 = iVar8 + 1;
      if (((int)(uint)*(byte *)(unaff_s2 + 9) <= iVar8) ||
         ((int)(uint)*(byte *)(unaff_s2 + 8) <= iVar8)) break;
      func_0x80051794(&stack0xfffffff0);
      func_0x800847f0(*(int *)(param_1 + 0xc4) + 8,&stack0xfffffff0);
      iVar5 = (int)*(short *)(*(int *)(param_1 + 0xc4) + 6);
      if (iVar5 == -1) {
        iVar8 = unaff_s2 + 0x98;
        if (iVar8 == 0) {
          *(undefined1 *)(param_1 + 9) = 0;
          *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x5e) = 0;
          uVar6 = FUN_80126a14();
          return uVar6;
        }
        if (iVar8 < 0x1f00) {
          sVar3 = *(short *)(param_1 + 100) + 1;
          *(short *)(param_1 + 100) = sVar3;
          if ((0x1f00 - iVar8 >> 7) + 7 <= (int)sVar3) {
            func_0x80074590(0x82,0,0);
            *(undefined2 *)(param_1 + 100) = 0;
            uVar6 = FUN_80126a14();
            return uVar6;
          }
        }
        else {
          sVar3 = *(short *)(param_1 + 100) + 1;
          *(short *)(param_1 + 100) = sVar3;
          if (6 < sVar3) {
            _DAT_800bf544 = unaff_s2;
            return unaff_s7;
          }
        }
        uVar6 = 1;
        if ((1 < *(byte *)(param_1 + 7) - 7) || (*(char *)(param_1 + 0x4b) == '\x01')) {
          iVar8 = func_0x800777fc(iVar4,&stack0xfffffff0,*(int *)(param_1 + 0xc4) + 0x18);
          uVar6 = 0x1f800000;
          if (iVar8 != 0) {
            *(short *)(*(int *)(param_1 + 0xcc) + 10) = -*(short *)(param_1 + 0x5a) - _DAT_1f8000f2;
            uVar6 = func_0x800517f8(iVar4);
            *(undefined1 *)(param_1 + 0x2d) = 0;
          }
        }
        return uVar6;
      }
      iVar7 = *(int *)(unaff_s2 + iVar5 * 4 + 0xc0);
      param_1 = iVar4;
    }
    iVar8 = 0;
    param_1 = unaff_s2;
    if (*(char *)(unaff_s2 + 8) != '\0') goto LAB_801149f0;
  }
  else {
    if (bVar1 < 2) {
      iVar4 = 20000;
      if (bVar1 == 0) {
        *(undefined2 *)(param_1 + 0x36) = 20000;
        *(undefined2 *)(param_1 + 0x44) = 0x2000;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        DAT_800e806c = 7;
        _DAT_1f8000d2 = 0x2e61;
        _DAT_1f8000d6 = -0x11d1;
        _DAT_1f8000da = 0x3ebf;
        iVar5 = 0x3000 - *(short *)(param_1 + 0x44);
        iVar4 = iVar5 >> 8;
        *(short *)(param_1 + 0x42) = (short)((uint)iVar5 >> 8);
      }
    }
    else {
      iVar4 = 3;
      if (bVar1 == 2) {
        uVar2 = func_0x8009a450();
        *(ushort *)(param_1 + 0x36) = *(short *)(param_1 + 0x60) + -8 + (uVar2 & 0xf);
        func_0x800521f4(0,0,0x81,2);
        sVar3 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar3 + -1;
        if (sVar3 != 1) goto LAB_8010ba58;
        *(undefined2 *)(param_1 + 0x40) = 0x28;
        iVar4 = *(byte *)(param_1 + 5) + 1;
        *(char *)(param_1 + 5) = (char)iVar4;
      }
      else if (bVar1 == 3) {
        sVar3 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar3 + -1;
        if (sVar3 == 1) {
          DAT_800e806c = 1;
          DAT_800bf9fb = 2;
          *(undefined1 *)(param_1 + 5) = 0;
        }
LAB_8010ba58:
        func_0x8006cba8(param_1 + 0x2c);
        iVar8 = func_0x8007778c(param_1);
        uVar6 = 0;
        if (iVar8 != 0) {
          uVar6 = func_0x800517f8(param_1);
        }
        return uVar6;
      }
    }
    while( true ) {
      iVar8 = iVar8 + 1;
      func_0x800517bc(&stack0xfffffff0,(int)*(short *)(iVar4 + 0x38),(int)*(short *)(iVar4 + 0x3a),
                      (int)*(short *)(iVar4 + 0x3c));
      func_0x80084250(*(int *)(param_1 + 0xc0) + 0x18,&stack0xfffffff0);
      param_1 = param_1 + 4;
      if ((int)(uint)*(byte *)(unaff_s2 + 8) <= iVar8) break;
LAB_801149f0:
      iVar4 = *(int *)(param_1 + 0xc0);
    }
  }
  return 0;
}

