// FUN_08010088

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08010088(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if ((*(char *)(param_1 + 5) != '\0') && (*(char *)(param_1 + 5) == '\x01')) {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
    }
    iVar7 = *(int *)(param_1 + 0x10);
    if (*(char *)(iVar7 + 4) == '\x01') {
      if (5 < *(byte *)(iVar7 + 5)) {
        bVar1 = *(byte *)(param_1 + 6);
        if (bVar1 == 1) {
          uVar6 = 0xb - (int)*(short *)(iVar7 + 0x76);
          if ((uint)*(byte *)(param_1 + 0x46) != (uVar6 & 0xff)) {
            *(char *)(param_1 + 0x46) = (char)uVar6;
            func_0x00054790(param_1,uVar6);
            func_0x00077c40(param_1,0x8011c0e8,uVar6);
          }
          *(undefined2 *)(param_1 + 0x84) = 0x60;
          if (*(short *)(iVar7 + 0x4a) < 0) goto LAB_001093a8;
          *(undefined2 *)(param_1 + 0x4a) = 0x1400;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          if (*(char *)(param_1 + 0x46) != '\x01') {
            *(undefined1 *)(param_1 + 0x46) = 1;
            func_0x00054790(param_1,1);
            func_0x00077cfc(param_1,0x8011c0e8,1,4);
          }
        }
        else {
          if (bVar1 < 2) {
            if (bVar1 != 0) {
              *(undefined2 *)(param_1 + 0x84) = 0x60;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (((*(byte *)(iVar7 + 0x72) & 1) != 0) &&
               (((int)*(short *)(*(int *)(iVar7 + 0x60) + 6) & 0x8000U) == 0)) {
              uVar6 = 0xb - (int)*(short *)(iVar7 + 0x76);
              if ((uint)*(byte *)(param_1 + 0x46) != (uVar6 & 0xff)) {
                *(char *)(param_1 + 0x46) = (char)uVar6;
                func_0x00054790(param_1,uVar6);
                func_0x00077c40(param_1,0x8011c0e8,uVar6);
              }
              *(undefined2 *)(param_1 + 0x84) = 0x60;
              halt_baddata();
            }
LAB_080103a8:
            *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (bVar1 != 2) {
            if (bVar1 != 3) {
              *(undefined2 *)(param_1 + 0x84) = 0x60;
              halt_baddata();
            }
            *(short *)(param_1 + 0x84) =
                 *(short *)(param_1 + 0x84) +
                 (short)(char)((ushort)*(undefined2 *)(param_1 + 0x4a) >> 8);
            *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + -0xdb;
            if (0x5f < *(short *)(param_1 + 0x84)) goto LAB_001093a8;
            if (*(char *)(param_1 + 0x46) != '\x03') {
              *(undefined1 *)(param_1 + 0x46) = 3;
              func_0x00054790(param_1,3);
              func_0x00077cfc(param_1,0x8011c0e8,3,4);
            }
            goto LAB_080103a8;
          }
        }
        uVar2 = *(undefined2 *)(param_1 + 0x4a);
        uVar5 = *(short *)(param_1 + 0x4a) - 0xdb;
        *(ushort *)(param_1 + 0x4a) = uVar5;
        *(short *)(param_1 + 0x84) = *(short *)(param_1 + 0x84) + (short)(char)((ushort)uVar2 >> 8);
        if ((int)((uint)uVar5 << 0x10) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_001093a8:
        func_0x00076d68(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x84) = 0x60;
    }
    if ((DAT_800bf839 == '\0') && (DAT_800bf80d < '\x02')) {
      if (DAT_800bf80d == '\x01') {
        DAT_800bf80d = '\x02';
        DAT_800bf808 = 0;
        *(undefined1 *)(param_1 + 4) = 2;
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(iVar7 + 4) = 2;
        *(undefined1 *)(iVar7 + 5) = 0;
        *(undefined1 *)(param_1 + 0x2b) = 0;
      }
      else {
        sVar3 = func_0x0010e820(iVar7);
        if (sVar3 == 0) {
          if (*(char *)(param_1 + 5) != '\x01') goto LAB_08010878;
          if ((DAT_800bf909 != -1) && (*(short *)(param_1 + 0x40) == _DAT_800bf9f6)) {
            func_0x0004ed94(0x35,0x41);
          }
          DAT_800bf81e = 1;
        }
        else {
          DAT_800bf80e = '\x01';
          DAT_800bf808 = 0;
          *(undefined1 *)(param_1 + 4) = 2;
          _DAT_800bf9b6 = *(undefined2 *)(param_1 + 0x40);
          *(undefined1 *)(param_1 + 5) = 4;
          func_0x00109bc8(param_1);
          if (DAT_800bf907 == -1) {
            if (DAT_800bf909 == -1) {
              if (*(short *)(param_1 + 0x40) < _DAT_800bf9b8) {
                _DAT_800bf9b8 = *(short *)(param_1 + 0x40);
                uVar4 = func_0x0007e038(0x19,3);
                *(undefined4 *)(param_1 + 0x14) = uVar4;
              }
              DAT_800bf9fb = 3;
            }
            else {
              if (*(short *)(param_1 + 0x40) < _DAT_800bf9b8) {
                _DAT_800bf9b8 = *(short *)(param_1 + 0x40);
              }
              if (*(short *)(param_1 + 0x40) < _DAT_800bf9f6) {
                uVar4 = func_0x0007e038(0x18,3);
                *(undefined4 *)(param_1 + 0x14) = uVar4;
                DAT_800bf9fb = 4;
              }
              else {
                uVar4 = func_0x0007e038(0x28,3);
                *(undefined4 *)(param_1 + 0x14) = uVar4;
                DAT_800bf9fb = 3;
                func_0x0004fb20();
              }
            }
          }
          else {
            if (_DAT_800bf9b8 == 0) {
              _DAT_800bf9b8 = *(undefined2 *)(param_1 + 0x40);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (*(short *)(param_1 + 0x40) < _DAT_800bf9b8) {
              _DAT_800bf9b8 = *(short *)(param_1 + 0x40);
            }
            if (*(short *)(param_1 + 0x40) < _DAT_800bf9f6) {
              _DAT_800bf9f6 = 0x834;
              uVar4 = func_0x0007e038(0x18,3);
              *(undefined4 *)(param_1 + 0x14) = uVar4;
              DAT_800bf9fb = 4;
            }
            else {
              uVar4 = func_0x0007e038(0x28,3);
              *(undefined4 *)(param_1 + 0x14) = uVar4;
              DAT_800bf9fb = 3;
              func_0x0004fb20();
            }
          }
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x00058648(param_1,0);
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfa4;
      *(undefined1 *)(param_1 + 1) = 1;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      if (*(char *)(param_1 + 0x46) != '\v') {
        *(undefined1 *)(param_1 + 0x46) = 0xb;
        func_0x00054790(param_1,0xb);
        func_0x00077c40(param_1,0x8011c0e8,0xb);
      }
      *(undefined2 *)(param_1 + 0x42) = 0x3c;
      *(undefined2 *)(param_1 + 0x40) = 0;
      DAT_800bf80e = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 0x2b) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      func_0x000752b4(0);
      func_0x00075d24(0x11ffc);
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    if (*(byte *)(param_1 + 5) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08010678 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef7060))();
      return;
    }
    if (DAT_800bf80e != '\0') {
      uVar6 = 0xb - (int)*(short *)(*(int *)(param_1 + 0x10) + 0x76);
      if ((uint)*(byte *)(param_1 + 0x46) != (uVar6 & 0xff)) {
        *(char *)(param_1 + 0x46) = (char)uVar6;
        func_0x00054790(param_1,uVar6);
        func_0x00077c40(param_1,0x8011c0e8,uVar6);
      }
      func_0x00076d68(param_1);
    }
  }
LAB_08010878:
  _DAT_1f800160 = *(undefined2 *)(param_1 + 0x2e);
  _DAT_1f800162 = *(undefined2 *)(param_1 + 0x32);
  _DAT_1f800164 = *(undefined2 *)(param_1 + 0x36);
  _DAT_1f80016a = *(undefined2 *)(param_1 + 0x58);
  _DAT_1f800168 = *(undefined2 *)(param_1 + 0x56);
  return;
}

