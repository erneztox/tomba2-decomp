// FUN_80131394

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_80131394(undefined1 *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int unaff_s0;
  int iVar4;
  undefined1 *puVar5;
  int in_lo;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      puVar5 = (undefined1 *)0x3;
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return (undefined1 *)0x3;
        }
        puVar5 = (undefined1 *)func_0x8007a624(param_1);
      }
      return puVar5;
    }
    if (bVar1 != 0) {
      return &LAB_800c0000;
    }
    _DAT_800bf854 = param_1;
    param_1[0xbf] = 0;
    bVar2 = true;
    if (0xc < _DAT_800ed098) {
      param_1[8] = 0xd;
      iVar4 = 0;
      param_1[9] = 0xd;
      param_1[0xb] = 0;
      param_1[0xd] = 0;
      puVar5 = param_1;
      do {
        uVar3 = func_0x8007aae8();
        *(undefined4 *)(puVar5 + 0xc0) = uVar3;
        func_0x80051b04(uVar3,0xc,iVar4 + 0x26);
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 4;
      } while (iVar4 < (int)(uint)(byte)param_1[8]);
      param_1[3] = 0;
      if ((DAT_800bfad8 == '\0') && (DAT_800bf8b9 != -1)) {
        FUN_80118974(*(undefined4 *)(param_1 + 0xd0));
      }
      FUN_8013a184(param_1);
      FUN_8013989c(param_1);
      bVar2 = false;
    }
    if (bVar2) {
      param_1[4] = 3;
      return (undefined1 *)0x3;
    }
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x82) = 0xc0;
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x80) = 0x60;
    *(undefined2 *)(param_1 + 0x84) = 0x10;
    *(undefined2 *)(param_1 + 0x86) = 0x60;
    param_1[4] = param_1[4] + '\x01';
    return (undefined1 *)0x10;
  }
  if ((DAT_800bf89c == '\x02') || (DAT_800e7eaa != '\x01')) {
    func_0x800778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) *
                                 0x10000) >> 0x10);
    unaff_s0 = *(int *)(param_1 + 0x10);
    if (param_1[1] == '\0') {
      if (*(char *)(unaff_s0 + 1) != '\0') {
        param_1[1] = 1;
        func_0x80077ebc(param_1);
      }
      goto LAB_8013156c;
    }
LAB_8013157c:
    if (*(char *)(unaff_s0 + 0x5e) == '\x01') {
      param_1[0x5e] = 2;
      puVar5 = (undefined1 *)FUN_8013a548();
      return puVar5;
    }
    if (*(char *)(unaff_s0 + 0x5e) == '\x02') {
      param_1[0x5e] = 1;
      puVar5 = (undefined1 *)FUN_8013a548();
      return puVar5;
    }
    param_1[0x5e] = 0;
    if (param_1[0x5e] == '\x01') {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * -0x100;
      if ((int)*(short *)(param_1 + 0x60) < (int)*(short *)(param_1 + 0x32)) {
        DAT_800bf9ee = DAT_800bf9ee & 0xfe;
        puVar5 = (undefined1 *)FUN_8013a60c();
        return puVar5;
      }
      *(int *)(param_1 + 0x30) = (int)*(short *)(param_1 + 0x60) << 0x10;
      DAT_800bf9ee = DAT_800bf9ee | 1;
      param_1[0x5e] = 0;
      param_1[0xbf] = 0;
LAB_8013a634:
      *(undefined2 *)(unaff_s0 + 0x42) = 0xf;
                    /* WARNING: Subroutine does not return */
      *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
      FUN_801402b8();
    }
    if (param_1[0x5e] == '\x02') {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
      if ((int)*(short *)(param_1 + 0x62) <= (int)*(short *)(param_1 + 0x32)) {
        *(int *)(param_1 + 0x30) = (int)*(short *)(param_1 + 0x62) << 0x10;
        param_1[0x5e] = 0;
        param_1[0xbf] = 1;
        goto LAB_8013a634;
      }
      if ((*(ushort *)(*(int *)(unaff_s0 + 0xc0) + 0xc) & 0xf00) == 0) {
        puVar5 = (undefined1 *)func_0x80074590(0x8d,0,0);
        return puVar5;
      }
    }
    if (param_1[5] == '\0') {
      if (param_1[0x5e] == '\x01') {
        puVar5 = param_1;
        iVar4 = FUN_80139e64();
        if (iVar4 == 0) {
LAB_80131720:
          func_0x800517f8(param_1);
          goto LAB_80131728;
        }
        param_1[6] = 0;
        in_lo = ((byte)param_1[5] + 1) * (int)puVar5;
        param_1 = puVar5;
      }
      else {
        if (param_1[0x5e] != '\x02') goto LAB_80131720;
        FUN_80139c2c();
      }
    }
    else if (param_1[5] == '\x01') {
      iVar4 = FUN_8013a008(param_1,unaff_s0);
      if (iVar4 != 0) {
        param_1[6] = 0;
        param_1[5] = param_1[5] + -1;
      }
      goto LAB_80131720;
    }
    if ((*(ushort *)(unaff_s0 + 0x62) & 1) != 0) {
      puVar5 = (undefined1 *)FUN_801436a4();
      return puVar5;
    }
    *(int *)(unaff_s0 + 0x2c) = *(int *)(unaff_s0 + 0x2c) + in_lo;
    *(int *)(unaff_s0 + 0x34) =
         *(int *)(unaff_s0 + 0x34) + (int)*(short *)(unaff_s0 + 0x4c) * (int)param_1;
    puVar5 = (undefined1 *)0x1;
  }
  else {
LAB_8013156c:
    if (param_1[1] != '\0') goto LAB_8013157c;
LAB_80131728:
    iVar4 = 0;
    puVar5 = param_1;
    if (param_1[8] != '\0') {
      do {
        *(undefined1 *)(*(int *)(puVar5 + 0xc0) + 0x3f) = param_1[1];
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 4;
      } while (iVar4 < (int)(uint)(byte)param_1[8]);
    }
    param_1[0x29] = 0;
    puVar5 = (undefined1 *)FUN_80139a70(param_1);
  }
  return puVar5;
}

