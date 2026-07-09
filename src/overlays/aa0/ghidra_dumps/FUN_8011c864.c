// FUN_8011c864

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8011c864(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int unaff_s3;
  undefined4 unaff_s5;
  
  uVar8 = 1;
  bVar2 = *(byte *)(param_1 + 6);
  puVar9 = (undefined1 *)(uint)bVar2;
  uVar10 = *(uint *)(param_1 + 0x10);
  if (puVar9 == (undefined1 *)0x1) {
    FUN_80126138(param_1);
    uVar1 = FUN_80110ee4(param_1);
    *(undefined1 *)(param_1 + 0x29) = uVar1;
    iVar7 = FUN_80126040(param_1);
    if (iVar7 != 0) {
      *(undefined1 *)(param_1 + 0xbf) = 2;
      *(undefined1 *)(param_1 + 0x5e) = 0;
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0xf;
      bVar2 = *(char *)(param_1 + 0x5f) + 2;
      *(byte *)(param_1 + 0x5f) = bVar2;
      *(ushort *)(uVar10 + 0x7a) = (ushort)bVar2;
      sVar3 = *(short *)(*(int *)(uVar10 + (uint)*(byte *)(param_1 + 0x5f) * 4 + 0xc0) + 0x2c) -
              *(short *)(param_1 + 0x2e);
      *(short *)(param_1 + 0x48) = sVar3;
      uVar8 = (uint)*(ushort *)(param_1 + 0x36);
      sVar5 = *(short *)(*(int *)(uVar10 + (uint)*(byte *)(param_1 + 0x5f) * 4 + 0xc0) + 0x34);
      *(short *)(param_1 + 0x48) = sVar3 >> 3;
      sVar5 = sVar5 - *(ushort *)(param_1 + 0x36);
      *(short *)(param_1 + 0x4c) = sVar5;
      *(undefined2 *)(param_1 + 0x40) = 8;
      *(short *)(param_1 + 0x4c) = sVar5 >> 3;
      if (((*(byte *)(uVar10 + 0x5e) & 2) != 0) &&
         (*(short *)(uVar10 + 0x6c) == *(short *)(uVar10 + 0x7a))) goto LAB_801259dc;
      if (*(short *)(*(int *)(uVar10 + (uint)*(byte *)(param_1 + 0x5f) * 4 + 0xc0) + 0xc) == 0x800)
      {
        *(ushort *)(uVar10 + 0x7a) = *(ushort *)(uVar10 + 0x7a) | 4;
      }
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    sVar5 = (*(short *)(param_1 + 0x4a) >> 5) + 100;
    *(short *)(param_1 + 0x84) = sVar5;
    *(short *)(param_1 + 0x86) = sVar5 * 2;
    FUN_80125c1c();
    return;
  }
  if ((undefined1 *)0x1 < puVar9) {
    if (puVar9 != (undefined1 *)0x2) {
      if (puVar9 == (undefined1 *)0x3) {
        sVar5 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar5 + -1;
        if (sVar5 == 1) {
          func_0x8006e1e4();
          *(undefined2 *)(param_1 + 0x60) = 0;
          DAT_800bf841 = 0;
          *(byte *)(param_1 + 4) = bVar2;
        }
        if (*(short *)(param_1 + 0x60) != 0) {
          func_0x8006cba8(param_1 + 0x2c);
        }
        return;
      }
      FUN_80125c1c();
      return;
    }
    if ((*(ushort *)(uVar10 + 0x7a) & 2) == 0) {
      if (*(short *)(*(int *)(uVar10 + (uint)*(byte *)(param_1 + 0x5f) * 4 + 0xc0) + 0xc) == 0x800)
      {
        *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 4;
      }
      if (*(char *)(param_1 + 3) == '\x01') {
        *(char *)(param_1 + 0x5f) = *(char *)(param_1 + 0x5f) << 4;
      }
      puVar9 = &DAT_800bf870;
      DAT_800bf9f2 = DAT_800bf9f2 | *(byte *)(param_1 + 0x5f);
      if (*(short *)(param_1 + 0x60) != 0) {
        iVar6 = 0x3c;
        iVar7 = func_0x80040b48(0x3c);
        if (iVar7 < 0) {
          DAT_800bfa12 = 0;
          *(undefined2 *)(param_1 + 0x40) = 0x2d;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          FUN_80125c1c();
          return;
        }
        DAT_800bfa12 = 0xff;
        goto LAB_80125ae0;
      }
      *(undefined1 *)(param_1 + 4) = 3;
      iVar7 = FUN_80130ac4(&DAT_800bf870);
      if (iVar7 != 0) {
        DAT_800bf871 = (char)param_1;
        func_0x80077ebc(&DAT_800bf870);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(DAT_800bf875) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      FUN_80131134(&DAT_800bf870);
      FUN_801316cc();
      if (DAT_800bf9d2 == '\0') {
        if ((uRam800bf8e8 & 1) == 0) {
          uRam800bf8e8 = 5;
          func_0x8003116c();
          FUN_80140e1c();
          return;
        }
      }
      else if (DAT_800bf9d2 == -1) {
        if ((uRam800bf8e8 & 1) == 0) {
          uRam800bf8e8 = 0x8005;
          DAT_800bf875 = 4;
          DAT_800bf876 = 0;
          if (puVar9 != (undefined1 *)0xff) {
            if ((((undefined1 *)(int)*(short *)(param_1 + 0x42) == puVar9) &&
                (*(char *)(param_1 + 1) != '\0')) && ((uVar8 & 0xffff) == 0)) {
              func_0x8004ed94(0x23,0x41);
            }
            if (*(char *)(param_1 + 3) != '\x03') {
              func_0x8009a450();
              return;
            }
          }
          *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x14) =
               0xffe8;
          *(undefined1 *)(param_1 + 0x46) = 0xff;
          if ((*(char *)(param_1 + 1) != '\0') &&
             (iVar7 = func_0x80072ddc(param_1,2,2,0xe), iVar7 != 0)) {
            *(undefined4 *)(iVar7 + 0x1c) = 0x801234a4;
            *(undefined2 *)(iVar7 + 0x48) =
                 *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x2c)
            ;
            *(short *)(iVar7 + 0x4a) =
                 *(short *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x30) +
                 -0x8c;
            *(undefined2 *)(iVar7 + 0x4c) =
                 *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x34)
            ;
          }
          return;
        }
      }
      else {
        uVar4 = uRam800bf8e8 & 0x8000;
        if ((uRam800bf8e8 & 1) != 0) {
          uRam800bf8e8 = 0x8002;
          if (uVar4 == 0) {
            uRam800bf8e8 = 2;
          }
          if (0 < _DAT_800bf8b8) {
            FUN_8012ed28();
            return;
          }
          if (_DAT_800bf8b8 < 0) {
            _DAT_800bf8be = 0x80;
          }
        }
      }
      if (DAT_800bf873 == '\0') {
        func_0x80146348(&DAT_800bf870,uRam800bf938);
      }
      if (DAT_800bf871 != '\0') {
        FUN_8012e8a8(&DAT_800bf870);
      }
      uRam800bf89b = 0;
      FUN_8012ed70();
      return;
    }
    uVar4 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar4;
    if ((int)((uint)uVar4 << 0x10) < 1) {
      *(undefined2 *)(param_1 + 0x2e) =
           *(undefined2 *)(*(int *)(uVar10 + (uint)*(byte *)(param_1 + 0x5f) * 4 + 0xc0) + 0x2c);
      *(undefined2 *)(param_1 + 0x36) =
           *(undefined2 *)(*(int *)(uVar10 + (uint)*(byte *)(param_1 + 0x5f) * 4 + 0xc0) + 0x34);
      *(short *)(param_1 + 0x32) =
           *(short *)(param_1 + 0x32) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x4a) >> 8);
      *(ushort *)(param_1 + 0x54) =
           *(short *)(param_1 + 0x54) + (*(short *)(param_1 + 0x44) >> 4) & 0xfff;
      FUN_80126040(param_1);
      *(short *)(param_1 + 0xb8) = *(short *)(param_1 + 0xb8) + -0x40;
      *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + -0x40;
      *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + -0x40;
      FUN_80125c1c();
      return;
    }
    uVar8 = (uint)*(ushort *)(param_1 + 0x2e) + (uint)*(ushort *)(param_1 + 0x48);
    *(short *)(param_1 + 0x2e) = (short)uVar8;
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + *(short *)(param_1 + 0x4c);
    iVar7 = param_1;
    goto LAB_80125b84;
  }
  if (puVar9 != (undefined1 *)0x0) {
    FUN_80125c1c();
    return;
  }
  uVar4 = *(ushort *)(*(int *)(uVar10 + 0xc4) + 8);
  if (0x800 < (short)uVar4) {
    uVar4 = uVar4 | 0xf000;
  }
  if (*(char *)(param_1 + 0x5f) != '\0') {
    *(undefined2 *)(param_1 + 0x44) = 0xf000;
    FUN_801258b0();
    return;
  }
  *(undefined2 *)(param_1 + 0x44) = 0x1000;
  *(ushort *)(param_1 + 0x4a) = uVar4 * 8 + -0x1a00;
  *(undefined1 *)(param_1 + 0xbf) = 1;
  *(undefined2 *)(param_1 + 0x80) = 0x1e;
  *(undefined2 *)(param_1 + 0x82) = 0x3c;
  while( true ) {
    func_0x80084110(*(int *)(puVar9 + ((int)(uVar10 << 0x10) >> 0xe) + 0xc0) + 0x18,unaff_s5,
                    *(int *)(param_1 + 0xc0) + 0x18);
    func_0x80084220(*(int *)(param_1 + 0xc0),*(int *)(param_1 + 0xc0) + 0x2c);
    iVar7 = (int)(uVar10 << 0x10) >> 0xe;
    *(int *)(*(int *)(param_1 + 0xc0) + 0x2c) =
         *(int *)(*(int *)(param_1 + 0xc0) + 0x2c) +
         *(int *)(*(int *)(puVar9 + iVar7 + 0xc0) + 0x2c);
    *(int *)(*(int *)(param_1 + 0xc0) + 0x30) =
         *(int *)(*(int *)(param_1 + 0xc0) + 0x30) +
         *(int *)(*(int *)(puVar9 + iVar7 + 0xc0) + 0x30);
    *(int *)(*(int *)(param_1 + 0xc0) + 0x34) =
         *(int *)(*(int *)(param_1 + 0xc0) + 0x34) +
         *(int *)(*(int *)(puVar9 + iVar7 + 0xc0) + 0x34);
    uVar8 = (uint)(byte)puVar9[8];
    unaff_s3 = unaff_s3 + 1;
    iVar7 = param_1;
LAB_80125b84:
    param_1 = iVar7 + 4;
    if ((int)uVar8 <= unaff_s3) {
      return;
    }
    iVar6 = *(int *)(iVar7 + 0xc4);
    uVar10 = (uint)*(ushort *)(iVar6 + 6);
    if (*(short *)(iVar6 + 6) == -1) break;
    if ((unaff_s3 == 2) || ((unaff_s3 == 3 && ((*(ushort *)(puVar9 + 0x60) & 2) != 0)))) {
      func_0x80085480(iVar6 + 8,unaff_s5);
      func_0x80051794();
      if ((*(ushort *)(puVar9 + 0x60) & 1) == 0) {
        func_0x80085050((int)*(short *)(*(int *)(puVar9 + 0xc0) + 0xc));
        func_0x80084eb0((int)*(short *)(puVar9 + 0x56));
        func_0x80084110();
        func_0x80084470(*(int *)(puVar9 + ((int)(uVar10 << 0x10) >> 0xe) + 0xc0) + 0x18,
                        *(int *)(iVar7 + 0xc4),*(int *)(iVar7 + 0xc4) + 0x2c);
        FUN_8012eabc(uVar10 << 0x10);
        return;
      }
      FUN_8012e9ec();
      return;
    }
    if ((*(ushort *)(puVar9 + 0x60) & 1) != 0) {
      func_0x80051794();
      func_0x80084a80(*(int *)(iVar7 + 0xc4) + 8);
      FUN_80137a6c();
      return;
    }
    iVar6 = *(int *)(iVar7 + 0xc4);
LAB_80125ae0:
    func_0x80085480(iVar6 + 8,unaff_s5);
  }
  func_0x80085480(iVar6 + 8);
  func_0x80084110(puVar9 + 0x98);
  func_0x80084220(*(int *)(iVar7 + 0xc4),*(int *)(iVar7 + 0xc4) + 0x2c);
  *(int *)(*(int *)(iVar7 + 0xc4) + 0x2c) =
       *(int *)(*(int *)(iVar7 + 0xc4) + 0x2c) + (int)*(short *)(puVar9 + 0x2e);
  *(int *)(*(int *)(iVar7 + 0xc4) + 0x30) =
       *(int *)(*(int *)(iVar7 + 0xc4) + 0x30) + (int)*(short *)(puVar9 + 0x32);
  uVar8 = *(uint *)(iVar7 + 0xc4);
LAB_801259dc:
  *(int *)(uVar8 + 0x34) = *(int *)(uVar8 + 0x34) + (int)*(short *)(puVar9 + 0x36);
  FUN_8012eb18();
  return;
}

