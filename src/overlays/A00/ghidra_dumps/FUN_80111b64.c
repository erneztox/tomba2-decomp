// FUN_80111b64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80111b64(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_t0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (int)*(short *)(param_1 + 0x2e);
    param_3 = (int)*(short *)(param_1 + 0x36);
    uVar1 = func_0x800782b0(_DAT_1f800214 + 0x2c);
    *(ushort *)(param_1 + 0x42) = uVar1 & 0xfff;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    in_t0 = in_t0 + -0x1d;
  }
  else {
    in_t0 = 0;
    if (*(char *)(param_1 + 0x78) == '\x01') {
      param_2 = (int)*(short *)(param_1 + 0x42);
      param_3 = 0x100;
      in_t0 = func_0x80041438();
    }
  }
  in_t0 = in_t0 >> 2;
  if (in_t0 < 6) {
    if (in_t0 < 0) {
      in_t0 = 0;
    }
    iVar3 = (short)unaff_s1 + -0x2000;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    iVar3 = ((iVar3 << 0x10) >> 0x13) + 0x100;
    *(short *)(param_1 + 0x60) = (short)in_t0;
    *(short *)(param_1 + 0x2e) = (short)param_2;
    *(short *)(param_1 + 0x32) = (short)param_3;
    *(short *)(param_1 + 0x36) = (short)param_4;
    if (0x300 < iVar3) {
      iVar3 = 0x300;
    }
    iVar4 = (unaff_s1 + iVar3) * 0x10000 >> 0x10;
    if (iVar4 < 0x6400) {
      if (((0x2000 < iVar4) && (iVar4 = FUN_80110de8(param_1), iVar4 == 0)) &&
         (param_2 = param_1, iVar4 = func_0x80022f04(&DAT_800e7e80), iVar4 != 0)) {
        *(undefined1 *)(param_1 + 4) = 3;
        func_0x8003116c(0x103,&stack0xfffffff8,0xfffffffc);
        FUN_80123c14();
        return;
      }
      *(short *)(param_1 + 0x40) = (short)(unaff_s1 + iVar3);
      if ((*(char *)(param_1 + 3) == '\x01') && (3 < DAT_800e7eaa)) {
        return;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      sVar2 = func_0x80077e7c();
      while( true ) {
        iVar3 = *(int *)(param_3 + 0x7e74);
        uVar5 = *(undefined4 *)(param_1 + 0xc0);
        *(short *)(param_4 + -0x2f68) = sVar2 + 1;
        *(int *)(param_3 + 0x7e74) = iVar3 + -4;
        *(undefined4 *)(iVar3 + -4) = uVar5;
        if (3 < unaff_s2) break;
        param_1 = unaff_s3 + param_2;
        param_2 = param_2 + 4;
        unaff_s2 = unaff_s2 + 1;
        sVar2 = *(short *)(param_4 + -0x2f68);
      }
      *(char *)(unaff_s3 + 9) = *(char *)(unaff_s3 + 9) + -4;
      *(char *)(unaff_s3 + 8) = *(char *)(unaff_s3 + 8) + -4;
      FUN_8012ce0c();
      return;
    }
    func_0x8003116c(0x107,param_1 + 0x2c,0xffffffc4);
    *(undefined1 *)(param_1 + 4) = 3;
    FUN_80123c14();
    return;
  }
  FUN_80123b34();
  return;
}

