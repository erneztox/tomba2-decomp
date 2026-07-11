// FUN_8010d0f8

/* WARNING: Removing unreachable block (ram,0x8011633c) */
/* WARNING: Removing unreachable block (ram,0x801169d8) */
/* WARNING: Removing unreachable block (ram,0x80116364) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010d0f8(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  int in_a3;
  undefined4 in_t0;
  undefined1 *puVar8;
  
  puVar8 = &DAT_800e7e80;
  if (DAT_800bf816 == '\0') {
    if (((DAT_800bf9df == 0) &&
        (((DAT_800bf9d2 == '\0' || (DAT_800bf9d2 == -1)) && (iVar3 = func_0x8005308c(), iVar3 != 0))
        )) && (DAT_800bf830 == -1)) {
      if (DAT_800e7fe4 == '\0') {
        DAT_800e7e84 = 4;
        DAT_800e7e85 = 0x21;
        DAT_800e7e86 = 0;
        func_0x80054d14(&DAT_800e7e80,2,6);
      }
      func_0x80042354(1,3);
      DAT_800bf9df = 0x41;
      func_0x80070724(0xe,4,0x19);
    }
    if ((DAT_800bf9df & 0x40) != 0) {
      if (DAT_1f800137 == '\0') {
        DAT_800bf9df = DAT_800bf9df & 0xbf;
      }
      DAT_1f800230 = 1;
    }
    if (((DAT_800bf8f5 == '\0') && (DAT_800bf9e9 == '\0')) &&
       ((DAT_800e7eaa == '\x1f' && ((_DAT_800e7eb6 < 0x1acd && (_DAT_800e7eb2 < -3999)))))) {
      iVar3 = func_0x8005308c();
      if ((iVar3 != 0) && (DAT_800bf830 == -1)) {
        func_0x80042354(1,2);
        DAT_800bf9e9 = 1;
        iVar3 = 0;
        puVar6 = (undefined2 *)&DAT_00000005;
        iVar7 = 9;
        func_0x80070724();
        if (DAT_800bf9dd < 0xe) {
          return;
        }
        uVar1 = (ushort)DAT_800e7e86;
        _DAT_800e7ec0 = 0x5a;
        DAT_800e7e86 = (byte)(uVar1 + 1);
        puVar6[10] = (short)in_a3 - (uVar1 + 1);
        uVar5 = (uint)(ushort)puVar6[10];
        if ((short)puVar6[10] < 0) {
          puVar6[10] = (short)(uVar5 + 100);
          iVar4 = (uVar5 + 100) * 0x10000;
          if (0 < iVar4) {
            puVar6[10] = 0;
            iVar3 = (iVar3 << 0x10) >> 0xe;
            if (uVar5 != iVar4 >> 0x10) {
              iVar4 = iVar3 + -4;
              if ((*(ushort *)(iVar7 + 0x60) & 2) == 0) {
                iVar4 = iVar3 + -5;
              }
              iVar3 = iVar4 * 0x10000 >> 0x10;
              iVar4 = 1;
              *(undefined1 *)(*(int *)(iVar7 + iVar3 * 4 + 0xc0) + 0x3e) = 1;
              *(undefined1 *)(*(int *)(iVar7 + (iVar3 + 1) * 4 + 0xc0) + 0x3e) = 1;
              iVar3 = *(int *)(iVar7 + in_a3 * 4 + 0xc0);
              *(byte *)(iVar3 + 0x3e) = *(byte *)(iVar3 + 0x3e) | 2;
              uVar1 = *(ushort *)(iVar7 + 0x7a) & 3;
              if (uVar1 == 2) {
                uVar2 = 4;
              }
              else {
                uVar2 = 8;
                if (uVar1 != 3) goto LAB_801312a0;
              }
              *(undefined2 *)(iVar7 + 0x72) = uVar2;
              if ((*(ushort *)(iVar7 + 0x7a) & 4) != 0) {
                *(short *)(iVar7 + 0x72) = *(short *)(iVar7 + 0x72) + 2;
              }
              return;
            }
            iVar4 = iVar3 + -2;
            _DAT_800e7ee0 = (short)iVar3;
            _DAT_800e7ee2 = -0x550;
            _DAT_800e7ee4 = 0xfb96;
            _DAT_800e7ee6 = 0x1e0;
            _DAT_800e7ee8 = 0xf878;
            _DAT_800e7ed0 = 0x980;
            _DAT_800e7eac = 0x24c30000;
            _DAT_800e7eb4 = 0x14f10000;
            iVar7 = 0;
            DAT_800e7ede = 0;
            _DAT_800e7ed4 = 0;
            _DAT_800e7ed6 = 0;
            _DAT_800e7ed8 = 0;
            _DAT_800e7eb0 = (int)_DAT_800e7ee0 << 0x10;
            if (DAT_800e7e88 != 0) {
              in_t0 = 0xffffffff;
              in_a3 = -2;
              puVar6 = (undefined2 *)&DAT_8014aa58;
              do {
                *(short *)(*(int *)(iVar4 + 0xc0) + 6) = (short)iVar7 + -1;
                **(undefined2 **)(iVar4 + 0xc0) = 0;
                *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 2) = *puVar6;
LAB_801312a0:
                *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 4) = puVar6[1];
                *(undefined4 *)(*(int *)(iVar4 + 0xc0) + 8) = 0;
                *(undefined4 *)(*(int *)(iVar4 + 0xc0) + 0xc) = 0;
                *(short *)(*(int *)(iVar4 + 0xc0) + 0x14) = (short)in_t0;
                *(short *)(*(int *)(iVar4 + 0xc0) + 0x10) = (short)in_a3;
                *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x16) = 0;
                puVar6 = puVar6 + 2;
                *(char *)(*(int *)(iVar4 + 0xc0) + 0x3e) = (char)iVar7;
                *(undefined1 *)(*(int *)(iVar4 + 0xc0) + 0x3f) = 0;
                iVar7 = iVar7 + 1;
                iVar4 = iVar4 + 4;
              } while (iVar7 < (int)(uint)DAT_800e7e88);
            }
            if (DAT_800e7e83 == '\0') {
              FUN_8013a2dc();
              return;
            }
            iVar3 = (int)_DAT_800e7ee2;
            do {
              _DAT_800e7eb0 = _DAT_800e7eb0 + _DAT_800e7ed0 * 0x100;
              func_0x800517f8(&DAT_800e7e80);
              FUN_80139c2c(&DAT_800e7e80);
            } while (_DAT_800e7eb2 < iVar3);
            _DAT_800e7eb0 = iVar3 << 0x10;
            return;
          }
        }
        else {
          puVar6[10] = (short)(uVar5 - 100);
          if ((int)((uVar5 - 100) * 0x10000) < 0) {
            puVar6[10] = 0;
          }
        }
        uVar2 = 0xc400;
        if (((short)puVar6[10] < -0x3c00) || (uVar2 = 0x3c00, 0x3c00 < (short)puVar6[10])) {
          puVar6[10] = uVar2;
        }
        puVar6[9] = puVar6[9] + (short)(char)((ushort)puVar6[10] >> 8);
        iVar7 = 0;
        *puVar6 = puVar6[3];
        puVar6[1] = puVar6[4] + puVar6[0xe];
        iVar3 = ((short)puVar6[9] * 5 >> 4) + 0x19;
        if (DAT_800e7e88 != 0) {
          do {
            *(short *)(*(int *)(puVar8 + 0xc0) + 0xc) =
                 (short)(iVar3 * (iVar7 + 2) >> 4) - (short)(iVar3 >> 5);
            iVar7 = iVar7 + 1;
            puVar8 = puVar8 + 4;
          } while (iVar7 < (int)(uint)DAT_800e7e88);
        }
        return;
      }
      _DAT_800e7eb4 = CONCAT22(0x1acc,_DAT_800e7eb4);
    }
    if ((((DAT_800bf8b6 == '\0') && (DAT_1f80019a != '\x01')) && (3 < DAT_800bf89c)) &&
       (DAT_800bf80f == '\0')) {
      iVar7 = 2;
      iVar3 = func_0x80040b48();
      if (iVar3 == 0x1f800000) {
        *(undefined1 *)(iVar7 + 0xb) = 0;
        *(undefined4 *)(iVar7 + 0x10) = 0;
        *(char *)(iVar7 + 5) = *(char *)(iVar7 + 5) + '\x01';
      }
      FUN_801281b8();
      return;
    }
  }
  else if (DAT_800bf817 == '\0') {
    if (0x140a < _DAT_800e7eb6) {
      _DAT_800e7eb4 = 0x140a0000;
      FUN_80116304();
      return;
    }
  }
  else if ((DAT_800bf817 == '\x01') && (_DAT_800e7eb6 < 0x226)) {
    _DAT_800e7eb4 = 0x2260000;
    _DAT_1f800164 = 0x226;
  }
  return;
}

