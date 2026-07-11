// FUN_8012109c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8012109c(int param_1,undefined4 param_2,undefined2 *param_3)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  
  if (*(char *)(param_1 + 0x47) == '\x03') {
    uVar2 = 1;
    if (*(char *)(param_1 + 5) != '\0') {
      if (*(char *)(param_1 + 5) == '\x01') {
        if (*(char *)(param_1 + 0x29) != '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 5) = 0;
        uVar2 = 0;
      }
      goto LAB_8012a440;
    }
    if (*(char *)(param_1 + 0x29) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 1;
    uVar7 = *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) / 0x140;
    if (uVar7 != 0) {
      if (4 < uVar7) {
        uVar7 = 4;
      }
      param_3 = (undefined2 *)0x0;
      *(undefined2 *)(param_1 + 0x7c) = 0;
      *(short *)(param_1 + 0x7e) = (short)(uVar7 << 3);
      func_0x80074590(0x81);
      uVar2 = 6;
      if (*(byte *)(param_1 + 3) < 0xb) {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 6;
      goto LAB_8012a440;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined2 *)(param_1 + 0x44) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 5)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar4 = *(short *)(param_1 + 0x40);
    sVar3 = sVar4 + 0x100;
    *(short *)(param_1 + 0x40) = sVar3;
    if (0x5ff < sVar3) {
      *(short *)(param_1 + 0x40) = sVar4 + -0x500;
    }
    if ((*(char *)(param_1 + 3) == '\a') && ((DAT_800bfa06 & 8) != 0)) {
LAB_8012a22c:
      if (*(short *)(param_1 + 0x42) < 0x180) {
        *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 4;
      }
    }
    iVar6 = *(short *)(param_1 + 0x42) * 0x18;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0x1f;
    }
    sVar4 = (short)(iVar6 >> 5);
    param_3[6] = sVar4;
    param_3[4] = sVar4;
    if (sVar4 < 0x1000) {
      param_3[6] = 0x1000;
      param_3[4] = 0x1000;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 3)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      *param_3 = *(undefined2 *)(param_1 + 0x2e);
      param_3[2] = *(undefined2 *)(param_1 + 0x36);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 3)) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        iVar6 = (int)*(short *)(param_1 + 0x42);
      }
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      FUN_8012a3e4();
      return;
    }
    iVar6 = 2;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(char *)(param_1 + 0x29) == '\0') {
          if (*(char *)(param_1 + 0xbf) == '\0') {
LAB_8012149c:
            FUN_80129c70(param_1);
            return;
          }
          bVar1 = *(byte *)(param_1 + 0x47);
          *(undefined1 *)(param_1 + 5) = 2;
          if (bVar1 == 1) {
            *(undefined1 *)(param_1 + 0x5e) = 1;
            *(undefined1 *)(param_1 + 0x46) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x46) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x5e) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x46) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x5e) = 1;
            iVar6 = *(int *)(param_1 + 0x3c);
            *(undefined1 *)(iVar6 + 0x46) = 1;
          }
          else {
            if ((1 < bVar1) || (bVar1 != 0)) goto LAB_8012149c;
            *(undefined1 *)(param_1 + 0x5e) = 1;
            *(undefined1 *)(param_1 + 0x46) = 0;
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x46) = 0;
            *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x5e) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x46) = 0;
            *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x5e) = 1;
            iVar6 = *(int *)(param_1 + 0x3c);
            *(undefined1 *)(iVar6 + 0x46) = 0;
          }
        }
        else {
          if (*(char *)(param_1 + 3) == '\x02') {
            if ((DAT_800bfa06 & 2) == 0) {
              func_0x80042354(1,1);
              switchD_8012a0fc::default();
              return;
            }
          }
          else if (((*(char *)(param_1 + 3) == '\x04') && (*(char *)(param_1 + 0x47) == '\0')) &&
                  ((DAT_800bfa06 & 4) == 0)) {
            func_0x80042354(1,1);
            DAT_800bfa06 = DAT_800bfa06 | 4;
          }
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
          uVar7 = *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) / 0x140;
          if (uVar7 == 0) goto LAB_8012a22c;
          uVar2 = (undefined2)(uVar7 << 3);
          if (4 < uVar7) {
            uVar2 = 0x20;
          }
          bVar1 = *(byte *)(param_1 + 0x47);
          *(undefined2 *)(param_1 + 0x7c) = 0;
          *(undefined2 *)(param_1 + 0x7e) = uVar2;
          if (bVar1 == 1) {
            *(undefined1 *)(param_1 + 0x5e) = 1;
            *(undefined1 *)(param_1 + 0x46) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x46) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x5e) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x46) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x5e) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x46) = 1;
          }
          else if ((bVar1 < 2) && (bVar1 == 0)) {
            *(undefined1 *)(param_1 + 0x5e) = 1;
            *(undefined1 *)(param_1 + 0x46) = 0;
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x46) = 0;
            *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x5e) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x46) = 0;
            *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x5e) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x46) = 0;
            FUN_8012a2f0();
            return;
          }
          param_3 = (undefined2 *)0x0;
          iVar6 = func_0x80074590(0x81);
        }
      }
    }
    else if (bVar1 == 2) {
      if (*(char *)(param_1 + 0xbf) == '\0') {
        bVar1 = *(byte *)(param_1 + 0x47);
        *(undefined1 *)(param_1 + 5) = 0;
        if ((bVar1 == 1) || ((bVar1 < 2 && (bVar1 == 0)))) {
          *(undefined1 *)(param_1 + 0x5e) = 0;
          *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 0;
          *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x5e) = 0;
          *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x5e) = 0;
        }
      }
      goto LAB_8012149c;
    }
  }
  uVar2 = (undefined2)(iVar6 << 4);
LAB_8012a440:
  param_3[8] = uVar2;
  if (*(char *)(param_1 + 3) != '\b') {
    sVar4 = (*(short *)(param_1 + 0x32) - param_3[1]) + 200;
    *(short *)(param_1 + 0x86) = sVar4;
    *(short *)(param_1 + 0x84) = sVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x84) = 0;
  iVar6 = (int)*(short *)(param_1 + 0x32) - (int)(short)param_3[1];
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  *(short *)(param_1 + 0x86) = (short)iVar6 + 200;
  *(undefined2 *)(param_1 + 0x80) = 100;
  *(undefined2 *)(param_1 + 0x82) = 200;
  *(undefined2 *)(param_1 + 0x54) = 0;
  sVar4 = _DAT_1f8000f2;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(short *)(param_1 + 0x56) = -sVar4;
  if (*(char *)(param_1 + 0x29) == '\0') {
    uVar5 = *(short *)(param_1 + 0x44) - 0x10;
    *(ushort *)(param_1 + 0x44) = uVar5;
    if ((int)((uint)uVar5 << 0x10) < 0) {
      *(undefined2 *)(param_1 + 0x44) = 0;
    }
  }
  else {
    uVar7 = func_0x8009a450();
    uVar7 = uVar7 & 3;
    if (((uVar7 == 1) || (uVar7 < 2)) || (uVar7 != 2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar4 = *(short *)(param_1 + 0x44) + 0x40;
    *(short *)(param_1 + 0x44) = sVar4;
    if (0x1000 < sVar4) {
      *(undefined2 *)(param_1 + 0x44) = 0x1000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x8007703c(param_1);
  *(undefined1 *)(param_1 + 0x29) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

