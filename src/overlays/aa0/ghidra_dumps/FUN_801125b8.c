// FUN_801125b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801125b8(void)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined1 *unaff_s0;
  int iVar7;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined2 uStack00000018;
  
  unaff_s0[6] = 2;
  *(undefined2 *)(unaff_s0 + 0x4c) = 0x200;
  *(undefined2 *)(unaff_s0 + 0x52) = 0xfff8;
  uStack00000010 = _DAT_ffff9b3c;
  uStack00000014 = _DAT_ffff9b40;
  uStack00000018 = _DAT_ffff9b44;
  if (*(char *)(*(int *)(unaff_s0 + 0x14) + 1) == '\0') {
    return;
  }
  puVar6 = (undefined1 *)(uint)(byte)unaff_s0[5];
  iVar7 = *(int *)(unaff_s0 + 0x10);
  cVar2 = puVar6 < (undefined1 *)0x2;
  if (puVar6 != (undefined1 *)0x1) {
    if (!(bool)cVar2) {
      cVar2 = '\x03';
      if (puVar6 == (undefined1 *)0x2) {
        bVar5 = unaff_s0[0x46] & 3;
        unaff_s0[5] = 3;
        if (((unaff_s0[0x46] & 3) == 0) || (bVar5 == 2)) {
          *(undefined2 *)(unaff_s0 + 0x4a) = 0xe800;
          *(undefined2 *)(unaff_s0 + 0x4c) = 0;
          FUN_801248d8();
          return;
        }
        uVar3 = 0xfc00;
        if (bVar5 == 1) {
          uVar3 = 0x400;
        }
        *(undefined2 *)(unaff_s0 + 0x4c) = uVar3;
        *(undefined2 *)(unaff_s0 + 0x4a) = 0xf000;
        *(undefined2 *)(unaff_s0 + 0x50) = 0x200;
      }
      else if (puVar6 != (undefined1 *)0x3) goto LAB_801249bc;
      iVar4 = func_0x8007778c();
      if (iVar4 == 0) {
        return;
      }
      *(int *)(unaff_s0 + 0x34) = *(int *)(unaff_s0 + 0x34) + *(short *)(unaff_s0 + 0x4c) * 0x100;
      if (*(int *)(iVar7 + 0x34) + -0x40 <= (int)*(short *)(unaff_s0 + 0x36)) {
        if (*(int *)(iVar7 + 0x34) + 0x40 < (int)*(short *)(unaff_s0 + 0x36)) {
          *(short *)(unaff_s0 + 0x36) = *(short *)(iVar7 + 0x34) + 0x40;
        }
        *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x4a) * 0x100;
        *(short *)(unaff_s0 + 0x4a) = *(short *)(unaff_s0 + 0x4a) + *(short *)(unaff_s0 + 0x50);
        func_0x80077b5c();
        if (unaff_s0[0x29] == '\0') {
          return;
        }
        unaff_s0[5] = 2;
        unaff_s0[0x47] = '\x01' - unaff_s0[0x47];
        unaff_s0[0x46] = unaff_s0[0x46] + '\x01';
        *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + -8;
        func_0x80074590(0x8f,0,0);
        return;
      }
      FUN_80124940();
      return;
    }
    bVar1 = puVar6 != (undefined1 *)0x0;
    puVar6 = (undefined1 *)0x107;
    if (bVar1) goto LAB_801249bc;
    unaff_s0[5] = 1;
    *unaff_s0 = 1;
    unaff_s0[0xb] = 0x10;
    *(undefined2 *)(unaff_s0 + 0x5a) = 0;
    unaff_s0[0x47] = 0;
    unaff_s0[0x46] = unaff_s0[0x60] & 3;
    func_0x8003116c(0x107,unaff_s0 + 0x2c,0xfffffff6);
    *(short *)(unaff_s0 + 0x2e) =
         *(short *)(iVar7 + 0x2c) +
         *(short *)((int)&stack0x00000010 + *(short *)(unaff_s0 + 0x60) * 2);
    *(short *)(unaff_s0 + 0x32) = *(short *)(iVar7 + 0x30) + -0x20;
    *(undefined2 *)(unaff_s0 + 0x36) = *(undefined2 *)(iVar7 + 0x34);
    puVar6 = unaff_s0;
    func_0x80077b38();
  }
  if (DAT_800bf9dd < 0xf) {
    if (*(int *)(iVar7 + 0x30) <= (int)*(short *)(unaff_s0 + 0x32)) {
      func_0x8009a450();
      return;
    }
    func_0x80077b5c();
    cVar2 = func_0x8007778c();
    puVar6 = unaff_s0;
  }
  else {
    cVar2 = unaff_s0[5] + '\x01';
    unaff_s0[5] = cVar2;
  }
LAB_801249bc:
  puVar6[0x1a] = cVar2;
  puVar6[0x19] = cVar2;
  puVar6[0x18] = cVar2;
  puVar6[0xd] = 2;
  puVar6[6] = puVar6[6] + '\x01';
  FUN_8012d9e8();
  return;
}

