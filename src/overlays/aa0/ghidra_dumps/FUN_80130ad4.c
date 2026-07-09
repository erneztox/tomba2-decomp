// FUN_80130ad4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_80130ad4(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint extraout_v1;
  uint extraout_v1_00;
  short unaff_s2;
  
  bVar2 = DAT_800bf9ea;
  uVar5 = (uint)*(byte *)(param_1 + 7);
  if (uVar5 == 1) {
    *(undefined1 *)(param_1 + 7) = 2;
    sVar3 = func_0x800782b0(&DAT_800e7eac,(int)*(short *)(param_1 + 0x2e),
                            (int)*(short *)(param_1 + 0x36));
    DAT_800e7fc7 = func_0x80077768((int)sVar3,(int)_DAT_800e7fc0,0);
    func_0x80054198(&DAT_800e7e80);
    func_0x80055284(&DAT_800e7e80);
    uVar5 = extraout_v1_00;
  }
  else if (uVar5 < 2) {
    if (uVar5 == 0) {
      if (DAT_800bf80a == '\0') {
        return (undefined1 *)0x77;
      }
      if (DAT_800bf80b != 'w') {
        return (undefined1 *)0x77;
      }
      *(undefined1 *)(param_1 + 7) = 1;
      func_0x80042354(1,1);
      uVar5 = extraout_v1;
    }
  }
  else if (uVar5 == 2) {
    if (DAT_800bf80a != '\0') {
      return &LAB_800c0000;
    }
    uVar5 = (uint)DAT_800bf9ea;
    if ((DAT_800bf9ea & 1) == 0) {
      DAT_800bf9ea = DAT_800bf9ea | 1;
    }
    else if ((DAT_800bf9ea & 2) == 0) {
      DAT_800bf9ea = DAT_800bf9ea | 2;
    }
    else {
      if ((DAT_800bf9ea & 4) != 0) {
        if ((DAT_800bf9ea & 8) == 0) {
          DAT_800bf9ea = DAT_800bf9ea | 8;
                    /* WARNING: Subroutine does not return */
          FUN_801252c0(*(undefined4 *)(param_1 + 0xe4),2,3);
        }
        *(undefined1 *)(param_1 + 7) = 3;
        goto code_r0x80139c1c;
      }
      DAT_800bf9ea = DAT_800bf9ea | 4;
    }
    _DAT_800e7ec2 = (ushort)bVar2;
    if (uVar5 == 0) {
      unaff_s2 = 1;
    }
    if ((bVar2 & 7) == 0) {
      func_0x8003116c(0,&DAT_800e7eac,0xfffffffb);
    }
    uVar5 = (uint)DAT_800e7edf;
  }
  else if (uVar5 == 3) {
    *(undefined1 *)(param_1 + 7) = 0;
    return (undefined1 *)0x3;
  }
code_r0x80139c1c:
  if (uVar5 == 0) {
    bVar1 = false;
  }
  else if (uVar5 == 3) {
    bVar1 = true;
    if ((_DAT_800e7ee2 & 1) == 0) {
      puVar4 = (undefined1 *)FUN_80142c04();
      return puVar4;
    }
  }
  else {
    bVar1 = false;
    if ((_DAT_800e7ee2 & 1) == 0) {
      puVar4 = (undefined1 *)FUN_80142c04();
      return puVar4;
    }
  }
  if (bVar1) {
    unaff_s2 = -1;
  }
  _DAT_800e7eb2 = _DAT_800e7eb2 + 0x10;
  FUN_801406e4(&DAT_800e7e80);
  if ((_DAT_800e7ee2 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_800e7eac = _DAT_800e7eac + (int)_DAT_800e7ec8 * (int)_DAT_800e7ece;
  _DAT_800e7eb4 = _DAT_800e7eb4 + (int)_DAT_800e7ecc * (int)_DAT_800e7ece;
  if ((((unaff_s2 == 0) && (DAT_800e7ee6 == -0x7f)) && (DAT_800e7ea9 == '\0')) &&
     (DAT_800e7e84 == '\x01')) {
    _DAT_800e7e84 = 0x20501;
  }
  return (undefined1 *)(int)unaff_s2;
}

