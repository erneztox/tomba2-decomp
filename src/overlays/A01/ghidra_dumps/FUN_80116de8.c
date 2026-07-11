// FUN_80116de8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80120148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80116de8(undefined2 *param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *in_t0;
  int unaff_s0;
  int iVar7;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int *unaff_s5;
  int unaff_s6;
  int unaff_s8;
  int unaff_retaddr;
  
  if (*(char *)((int)param_1 + 0x2b) == '\x02') {
    if (((int)_DAT_800e7ffe & 0x8200U) != 0) {
      return;
    }
    bVar1 = false;
    if (DAT_800bf80a == '\x01') {
      uVar6 = (uint)DAT_800bf80b;
      if (((uVar6 == 99) || (uVar6 == 0x65)) || (uVar6 == 0x62)) {
        *(undefined1 *)(param_1 + 0x2f) = 3;
        param_1[0x40] = 0x50;
        iVar3 = 0xa0;
        param_1[0x41] = 0xa0;
        iVar5 = 2;
        iVar7 = unaff_s0;
        do {
          *param_1 = (short)iVar3;
          param_1[4] = (short)uVar6 + (short)unaff_s0;
          iVar5 = func_0x80083e80(iVar5);
          iVar5 = iVar7 * iVar5 >> 0xc;
          sVar2 = (short)iVar5;
          param_1[8] = sVar2 + (short)unaff_retaddr;
          param_1[0xc] = sVar2 + (short)unaff_s0;
          if (*(char *)(unaff_s3 + 0x29) != '\0') {
            if ((*(int *)(unaff_s4 + 0x30) + (int)(short)param_1[1] <= (int)_DAT_1f800162) &&
               ((int)_DAT_1f800162 < *(int *)(unaff_s4 + 0x30) + (int)(short)param_1[9])) {
              in_t0 = &DAT_800e7e80;
              if ((DAT_800e7fc7 & 1) == 0) {
                sVar2 = *(short *)(unaff_s3 + 0x80);
                unaff_s0 = iVar5;
                goto LAB_8011fee4;
              }
              _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x80) + sVar2;
            }
          }
          do {
            iVar7 = unaff_s2;
            FUN_80128864();
            iVar5 = func_0x80133f38();
            if (iVar5 != 0) {
              param_1[1] = param_1[1] + -0xa0;
              param_1[5] = param_1[5] + -0xa0;
              *unaff_s5 = (int)((ushort)param_1[0xd] - 0xa0) >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            param_1[1] = param_1[1] + -0x50;
            param_1[5] = param_1[5] + -0x50;
            param_1[9] = param_1[9] + -0x50;
            unaff_s2 = iVar7 + 1;
            param_1[0xd] = param_1[0xd] + -0x50;
            if (unaff_s8 + 2 < unaff_s2) {
              func_0x80133f38();
              FUN_801290e4();
              return;
            }
          } while (*(short *)(unaff_s3 + 0x7e) == 0);
          iVar3 = func_0x80083e80((int)*(short *)(unaff_s3 + 0x7c));
          iVar5 = (iVar7 + 2) * 0x800;
          if (unaff_s6 == 0) {
            trap(0x1c00);
          }
          if ((unaff_s6 == -1) && (iVar5 == -0x80000000)) {
            trap(0x1800);
          }
          sVar2 = *(short *)(unaff_s3 + 0x7e);
          iVar4 = func_0x80083e80(iVar5 / unaff_s6);
          iVar5 = (unaff_s2 * 0x800) / unaff_s6;
          if (unaff_s6 == 0) {
            trap(0x1c00);
          }
          if ((unaff_s6 == -1) && (unaff_s2 * 0x800 == -0x80000000)) {
            trap(0x1800);
          }
          iVar7 = (int)(short)(sVar2 * iVar3 >> 0xc);
          uVar6 = iVar7 * iVar4 >> 0xc;
          iVar3 = uVar6 + unaff_retaddr;
        } while( true );
      }
      bVar1 = false;
      if (uVar6 == 100) {
        *(undefined1 *)(param_1 + 0x2f) = 2;
        *(undefined1 *)((int)param_1 + 0xbf) = 0;
        bVar1 = true;
      }
    }
    if (!bVar1) {
      return;
    }
    _DAT_800e7eb6 = 0x26ac;
    iVar5 = func_0x8006fb0c(param_1,DAT_800bf80b);
    _DAT_800bf844 = iVar5;
    if (iVar5 != 0) {
      if (*(char *)(param_1 + 0x2f) == '\x02') {
        *(int *)(param_1 + 10) = iVar5;
      }
      *(undefined1 *)(iVar5 + 0x5e) = 0;
      *(short *)(*(int *)(iVar5 + 0xc0) + 2) = *(short *)(*(int *)(iVar5 + 0xc0) + 2) + 0x30;
    }
  }
  else {
    sVar2 = 3;
    if (*(char *)((int)param_1 + 0x2b) != '\x03') {
LAB_8011fee4:
      *(short *)(in_t0 + 0x152) = *(short *)(unaff_s3 + 0x82) - (sVar2 + (short)unaff_s0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if ((*(byte *)(param_1 + 0x2f) & 2) == 0) {
    func_0x80040d68(param_1,0x80137124);
    *(undefined1 *)(param_1 + 0x38) = 1;
    func_0x80042354(1,1);
    *(undefined1 *)((int)param_1 + 5) = 1;
    return;
  }
  FUN_8011fec4(param_1,0x80137134);
  return;
}

