// FUN_8010aa38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010aa38(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int unaff_s0;
  int iVar5;
  int unaff_s1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    unaff_s1 = *(int *)(param_1 + 0x10);
    cVar2 = *(char *)(unaff_s1 + 1);
    *(char *)(param_1 + 1) = cVar2;
    if (cVar2 != '\0') {
      iVar5 = func_0x80083f50((int)*(short *)(unaff_s1 + 0x56));
      unaff_s0 = iVar5 * 0x96 >> 0xc;
      iVar5 = func_0x80083e80((int)*(short *)(unaff_s1 + 0x56));
      *(short *)(param_1 + 0x2e) = *(short *)(unaff_s1 + 0x2e) + (short)unaff_s0;
      *(short *)(param_1 + 0x32) = *(short *)(unaff_s1 + 0x32) + -0x50;
      *(short *)(param_1 + 0x36) = *(short *)(unaff_s1 + 0x36) + (short)(iVar5 * -0x96 >> 0xc);
      func_0x80077b5c(param_1);
      iVar5 = 3;
      if (1 < *(byte *)(unaff_s1 + 4)) {
        *(undefined1 *)(param_1 + 4) = 3;
        goto LAB_80113b28;
      }
    }
  }
  else {
    if (bVar1 < 2) {
      iVar5 = 0;
      if (bVar1 == 0) {
        *(undefined1 *)(param_1 + 4) = 1;
        uVar4 = _DAT_800ecf80;
        *(undefined1 *)(param_1 + 0xb) = 0x10;
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(undefined2 *)(param_1 + 0x5c) = 0;
        *(undefined1 *)(param_1 + 0x47) = 0;
        *(undefined2 *)(param_1 + 0x5a) = 0;
        *(undefined1 *)(param_1 + 8) = 0xf0;
        *(undefined4 *)(param_1 + 0x3c) = uVar4;
        iVar5 = func_0x80077b38(param_1,0x80139294,0);
      }
LAB_80113b28:
      iVar5 = (unaff_s0 + iVar5) * 0x10000 >> 0x10;
      func_0x80083e80(iVar5);
      func_0x80083f50(iVar5);
      func_0x80083f50((int)*(short *)(unaff_s1 + 0x56));
      func_0x80083e80((int)*(short *)(unaff_s1 + 0x56));
      iVar5 = func_0x80133cac(1,unaff_s1,&stack0xfffffff0,&stack0xfffffff8);
      if (iVar5 != 0) {
        *(undefined1 *)(iVar5 + 0x5e) = *(undefined1 *)(unaff_s1 + 0x6c);
      }
      *(undefined2 *)(unaff_s1 + 0x42) = 4;
      if ((*(ushort *)(unaff_s1 + 0x40) & 0x1f) == 0) {
        func_0x80074590(0x8a,0,0);
      }
      sVar3 = *(short *)(unaff_s1 + 0x40);
      *(short *)(unaff_s1 + 0x40) = sVar3 + -1;
      if (sVar3 != 1) {
        return;
      }
      FUN_8011cbe0(unaff_s1,0x12);
      return;
    }
    if (bVar1 < 4) {
      FUN_80113b20();
      return;
    }
  }
  return;
}

