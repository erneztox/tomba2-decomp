// FUN_80103bc4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80103bc4(void)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *in_a3;
  int *unaff_s0;
  undefined1 *puVar4;
  int unaff_s2;
  int unaff_s3;
  
  DAT_800bf816 = 1;
  DAT_800e806c = 0x80;
  _DAT_1f800184 = 0;
  puVar4 = &DAT_800e7e80;
  if (DAT_800bf817 == 1) {
    pcVar3 = (char *)0x8010da70;
    in_a3 = (byte *)0x3;
    unaff_s0 = (int *)&DAT_1f800000;
    DAT_800e7feb = 8;
    DAT_1f80019c = 3;
    _DAT_1f800210 = _DAT_800e7fc0;
    goto LAB_8010cc80;
  }
  if ((1 < DAT_800bf817) && (DAT_800bf817 == 2)) {
    _DAT_800e800e = 0;
    DAT_800e7eaa = 0x26;
    if (DAT_800bf8bc != -1) {
      DAT_800e7feb = 8;
      iVar2 = 0x1f800000;
      _DAT_1f800210 = _DAT_800e7fc0;
      goto LAB_8010cc60;
    }
    DAT_800e7fc7 = 0;
    DAT_800bf81f = 0;
    _DAT_1f800210 = _DAT_800e7fc0 + 0x800 & 0xfff;
    DAT_1f80019c = 3;
    _DAT_800e7fc0 = _DAT_1f800210;
    func_0x80044bd4(0x8010da70,0x1c,0);
    DAT_1f80019c = 0;
    func_0x80054198(&DAT_800e7e80);
    DAT_800e7e85 = 0x24;
    DAT_800e7e86 = 0;
    func_0x80074f24(DAT_800bf870);
    return;
  }
  DAT_800e7feb = 8;
  iVar2 = 0x1f800000;
  _DAT_1f800210 = _DAT_800e7fc0;
  do {
    *unaff_s0 = iVar2;
    do {
      iVar2 = *(int *)(unaff_s2 + -6);
      bVar1 = *(byte *)*unaff_s0;
      *in_a3 = ((byte *)*unaff_s0)[1];
      func_0x80081218(&stack0xfffffff0,iVar2 + (uint)bVar1 * 0x20);
      *unaff_s0 = *unaff_s0 + 2;
      do {
        puVar4 = puVar4 + 1;
        unaff_s2 = unaff_s2 + 0xc;
        unaff_s0 = unaff_s0 + 3;
        if (0xb < (int)puVar4) {
          return;
        }
        in_a3 = puVar4 + unaff_s3;
        bVar1 = *in_a3;
        *in_a3 = bVar1 - 1;
        iVar2 = (uint)(byte)(bVar1 - 1) << 0x18;
LAB_8010cc60:
      } while (0 < iVar2);
      pcVar3 = (char *)*unaff_s0;
    } while (*pcVar3 != -1);
LAB_8010cc80:
    iVar2 = (int)pcVar3 - (uint)(byte)pcVar3[1];
  } while( true );
}

