// FUN_80116e20

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80120148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80116e20(int param_1,undefined4 param_2,int param_3,undefined4 param_4,short param_5,
                 undefined4 param_6,int param_7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_s0;
  undefined2 *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int *unaff_s5;
  int unaff_s6;
  int unaff_s8;
  
  if (((int)_DAT_800e7ffe & 0x8200U) == 0) {
    if (DAT_800bf80a == '\x01') {
      uVar3 = (uint)DAT_800bf80b;
      if (((uVar3 == 99) || (uVar3 == 0x65)) || (uVar3 == 0x62)) {
        *(undefined1 *)(unaff_s1 + 0x2f) = 3;
        unaff_s1[0x40] = 0x50;
        iVar2 = 0xa0;
        unaff_s1[0x41] = 0xa0;
        do {
          *unaff_s1 = (short)iVar2;
          unaff_s1[4] = (short)uVar3 + param_5;
          iVar2 = func_0x80083e80(param_1);
          sVar1 = (short)(unaff_s0 * iVar2 >> 0xc);
          unaff_s1[8] = sVar1 + (short)param_7;
          unaff_s1[0xc] = sVar1 + param_5;
          if (*(char *)(unaff_s3 + 0x29) != '\0') {
            if ((*(int *)(unaff_s4 + 0x30) + (int)(short)unaff_s1[1] <= (int)_DAT_1f800162) &&
               ((int)_DAT_1f800162 < *(int *)(unaff_s4 + 0x30) + (int)(short)unaff_s1[9])) {
              if ((DAT_800e7fc7 & 1) == 0) {
                _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x82) - (*(short *)(unaff_s3 + 0x80) + sVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x80) + sVar1;
            }
          }
          do {
            iVar4 = unaff_s2;
            FUN_80128864();
            iVar2 = func_0x80133f38();
            if (iVar2 != 0) {
              unaff_s1[1] = unaff_s1[1] + -0xa0;
              unaff_s1[5] = unaff_s1[5] + -0xa0;
              *unaff_s5 = (int)((ushort)unaff_s1[0xd] - 0xa0) >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            unaff_s1[1] = unaff_s1[1] + -0x50;
            unaff_s1[5] = unaff_s1[5] + -0x50;
            unaff_s1[9] = unaff_s1[9] + -0x50;
            unaff_s2 = iVar4 + 1;
            unaff_s1[0xd] = unaff_s1[0xd] + -0x50;
            if (unaff_s8 + 2 < unaff_s2) {
              func_0x80133f38();
              FUN_801290e4();
              return;
            }
          } while (*(short *)(unaff_s3 + 0x7e) == 0);
          iVar2 = func_0x80083e80((int)*(short *)(unaff_s3 + 0x7c));
          iVar4 = (iVar4 + 2) * 0x800;
          if (unaff_s6 == 0) {
            trap(0x1c00);
          }
          if ((unaff_s6 == -1) && (iVar4 == -0x80000000)) {
            trap(0x1800);
          }
          sVar1 = *(short *)(unaff_s3 + 0x7e);
          iVar4 = func_0x80083e80(iVar4 / unaff_s6);
          param_1 = (unaff_s2 * 0x800) / unaff_s6;
          if (unaff_s6 == 0) {
            trap(0x1c00);
          }
          if ((unaff_s6 == -1) && (unaff_s2 * 0x800 == -0x80000000)) {
            trap(0x1800);
          }
          unaff_s0 = (int)(short)(sVar1 * iVar2 >> 0xc);
          uVar3 = unaff_s0 * iVar4 >> 0xc;
          iVar2 = uVar3 + param_7;
        } while( true );
      }
      if (uVar3 == 100) {
        param_3 = 1;
        *(char *)(unaff_s1 + 0x2f) = (char)param_1;
        *(undefined1 *)((int)unaff_s1 + 0xbf) = 0;
      }
    }
    if (param_3 != 0) {
      _DAT_800e7eb6 = 0x26ac;
      iVar2 = func_0x8006fb0c();
      _DAT_800bf844 = iVar2;
      if (iVar2 != 0) {
        if (*(char *)(unaff_s1 + 0x2f) == '\x02') {
          *(int *)(unaff_s1 + 10) = iVar2;
        }
        *(undefined1 *)(iVar2 + 0x5e) = 0;
        *(short *)(*(int *)(iVar2 + 0xc0) + 2) = *(short *)(*(int *)(iVar2 + 0xc0) + 2) + 0x30;
      }
      if ((*(byte *)(unaff_s1 + 0x2f) & 2) != 0) {
        FUN_8011fec4();
        return;
      }
      func_0x80040d68();
      *(undefined1 *)(unaff_s1 + 0x38) = 1;
      func_0x80042354(1,1);
      *(undefined1 *)((int)unaff_s1 + 5) = 1;
    }
  }
  return;
}

