// FUN_0803a90c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803a90c(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_16;
  
  iVar7 = func_0x00132ed0();
  if (0 < iVar7) {
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 5) = 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x00041ac0(param_1);
      local_1e = *(undefined2 *)(param_1 + 0x74);
      local_1a = *(undefined2 *)(param_1 + 0x72);
      local_16 = *(undefined2 *)(param_1 + 0x76);
      iVar7 = 0;
      if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
        if (*(byte *)(param_1 + 3) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (0x23ef < *(short *)(param_1 + 0x2e)) {
          iVar7 = 1;
        }
      }
      if (iVar7 == 0) {
        iVar7 = func_0x0013b738(param_1,auStack_20,0);
      }
      if (0 < iVar7) {
        if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
          uVar4 = 0xffc0;
          if (*(short *)(param_1 + 0x2e) <= *(short *)(param_1 + 0x74)) {
            uVar4 = 0x40;
          }
          *(undefined2 *)(param_1 + 0x4e) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar4 = 0xffc0;
        if (*(short *)(param_1 + 0x36) <= *(short *)(param_1 + 0x76)) {
          uVar4 = 0x40;
        }
        *(undefined2 *)(param_1 + 0x4e) = uVar4;
        if (*(short *)(param_1 + 0x4c) < 0) {
          *(short *)(param_1 + 0x4e) = -*(short *)(param_1 + 0x4e);
        }
        *(short *)(param_1 + 0x40) = (short)(iVar7 << 3) + 0x28;
        *(undefined2 *)(param_1 + 0x42) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar8 = func_0x0009a450();
      uVar4 = 0x40;
      if ((uVar8 & 1) == 0) {
        uVar4 = 0xffc0;
      }
      *(undefined2 *)(param_1 + 0x4e) = uVar4;
      uVar5 = func_0x0009a450();
      *(ushort *)(param_1 + 0x40) = (uVar5 & 0x1f) + 0x1e;
      *(undefined2 *)(param_1 + 0x42) = 0;
      sVar6 = *(short *)(param_1 + 0x4e);
      sVar9 = *(short *)(param_1 + 0x80);
      *(short *)(param_1 + 0x44) = sVar6;
      if (sVar6 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (sVar6 < 0) {
        sVar9 = -sVar9;
      }
      iVar7 = (int)sVar9;
      cVar2 = func_0x00045cac(param_1,iVar7,0,(int)*(short *)(param_1 + 0x60));
      *(char *)(param_1 + 0x5f) = cVar2;
      if (cVar2 == '\0') {
        cVar2 = func_0x00045cac(param_1,iVar7,0xfa,(int)*(short *)(param_1 + 0x60));
        bVar1 = *(byte *)(param_1 + 0x5f);
        *(byte *)(param_1 + 0x5f) = bVar1 | cVar2 << 1;
        if (bVar1 == 0 && (byte)(cVar2 << 1) == 0) {
          cVar2 = func_0x00045cac(param_1,iVar7,500,(int)*(short *)(param_1 + 0x60));
          *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | cVar2 << 2;
        }
      }
      if (*(char *)(param_1 + 0x5f) != '\0') {
        *(short *)(param_1 + 0x4e) = -*(short *)(param_1 + 0x4e);
        *(short *)(param_1 + 0x44) = -*(short *)(param_1 + 0x44);
      }
      uVar8 = (uint)*(ushort *)(param_1 + 0x4e);
      if (*(char *)(param_1 + 0xbe) != '\0') {
        uVar8 = -uVar8;
      }
      if (0 < (int)(uVar8 << 0x10)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00041718(param_1,3,4);
      if (*(char *)(param_1 + 1) != '\0') {
        func_0x00074590(0x8f,0,0);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    uVar5 = *(short *)(param_1 + 0x44) + *(short *)(param_1 + 0x4e);
    *(ushort *)(param_1 + 0x44) = uVar5;
    if (*(short *)(param_1 + 0x4e) < 1) {
      if ((int)((uint)uVar5 << 0x10) < 1) {
        *(undefined2 *)(param_1 + 0x44) = 0;
      }
    }
    else if (-1 < (int)((uint)uVar5 << 0x10)) {
      *(undefined2 *)(param_1 + 0x44) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar6 = *(short *)(param_1 + 0x80);
    if (*(short *)(param_1 + 0x44) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)(param_1 + 0x44) < 0) {
      sVar6 = -sVar6;
    }
    iVar7 = (int)sVar6;
    cVar2 = func_0x00045cac(param_1,iVar7,0,(int)*(short *)(param_1 + 0x60));
    *(char *)(param_1 + 0x5f) = cVar2;
    if (cVar2 == '\0') {
      cVar2 = func_0x00045cac(param_1,iVar7,0xfa,(int)*(short *)(param_1 + 0x60));
      bVar1 = *(byte *)(param_1 + 0x5f);
      *(byte *)(param_1 + 0x5f) = bVar1 | cVar2 << 1;
      if (bVar1 == 0 && (byte)(cVar2 << 1) == 0) {
        cVar2 = func_0x00045cac(param_1,iVar7,500,(int)*(short *)(param_1 + 0x60));
        *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | cVar2 << 2;
      }
    }
    if (*(char *)(param_1 + 0x5f) != '\0') {
      *(undefined2 *)(param_1 + 0x44) = 0;
    }
    func_0x00041a1c(param_1,1);
    func_0x00041ac0(param_1);
    func_0x0004130c(param_1,0);
    if (*(char *)(param_1 + 0xbe) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(ushort *)(param_1 + 0x62) = 0x1000U - (*(short *)(param_1 + 0x44) >> 4) & 0xfff;
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x62);
    if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
      func_0x00048894(param_1);
      iVar7 = (int)(((_DAT_1f8001a4 - 0x2a0) - (uint)*(ushort *)(param_1 + 0x72)) * 0x10000) >> 0x10
      ;
      if ((iVar7 < 1) || (iVar7 < 0x81)) {
        *(short *)(param_1 + 0x72) = (short)(_DAT_1f8001a4 - 0x2a0);
      }
    }
    if (*(short *)(param_1 + 0x44) != 0) goto LAB_0803b10c;
    if (((int)_DAT_800e7ffe & 0x8200U) == 0) {
      bVar1 = *(byte *)(param_1 + 0xbe);
      uVar8 = func_0x0013b7dc(param_1);
      uVar3 = 6;
      if (bVar1 != uVar8) goto LAB_0803b080;
    }
    uVar8 = func_0x0009a450();
    uVar3 = 3;
    if ((uVar8 & 3) != 0) {
      sVar6 = *(short *)(param_1 + 0x42) + 1;
      *(short *)(param_1 + 0x42) = sVar6;
      uVar3 = 3;
      if (sVar6 < 3) {
        uVar8 = (uint)*(ushort *)(param_1 + 0x4e);
        if (*(char *)(param_1 + 0xbe) != '\0') {
          uVar8 = -uVar8;
        }
        if (0 < (int)(uVar8 << 0x10)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00041718(param_1,3,4);
        if (*(char *)(param_1 + 1) != '\0') {
          func_0x00074590(0x8f,0,0);
        }
        sVar6 = *(short *)(param_1 + 0x4e) >> 1;
        *(short *)(param_1 + 0x4e) = sVar6;
        *(short *)(param_1 + 0x44) = sVar6;
        uVar5 = func_0x0009a450();
        *(ushort *)(param_1 + 0x40) = (uVar5 & 0x1f) + 0x1e;
        *(undefined1 *)(param_1 + 6) = 1;
        goto LAB_0803b10c;
      }
    }
LAB_0803b080:
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 5) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar6 = *(short *)(param_1 + 0x44) + *(short *)(param_1 + 0x4e);
  *(short *)(param_1 + 0x44) = sVar6;
  iVar7 = (int)sVar6;
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  if (0xc00 < iVar7) {
    uVar4 = 0xc00;
    if (*(short *)(param_1 + 0x4e) < 1) {
      uVar4 = 0xf400;
    }
    *(undefined2 *)(param_1 + 0x44) = uVar4;
  }
  func_0x00041a1c(param_1,1);
  func_0x00041ac0(param_1);
  func_0x0004130c(param_1,0);
  if (*(char *)(param_1 + 0xbe) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ushort *)(param_1 + 0x62) = 0x1000U - (*(short *)(param_1 + 0x44) >> 4) & 0xfff;
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x62);
  if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
    func_0x00048894(param_1);
    iVar7 = (int)(((_DAT_1f8001a4 - 0x2a0) - (uint)*(ushort *)(param_1 + 0x72)) * 0x10000) >> 0x10;
    if ((iVar7 < 1) || (iVar7 < 0x81)) {
      *(short *)(param_1 + 0x72) = (short)(_DAT_1f8001a4 - 0x2a0);
    }
  }
  sVar6 = *(short *)(param_1 + 0x80) * 2;
  if (*(short *)(param_1 + 0x44) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(short *)(param_1 + 0x44) < 0) {
    sVar6 = *(short *)(param_1 + 0x80) * -2;
  }
  iVar7 = (int)sVar6;
  cVar2 = func_0x00045cac(param_1,iVar7,0,(int)*(short *)(param_1 + 0x60));
  *(char *)(param_1 + 0x5f) = cVar2;
  if (cVar2 == '\0') {
    cVar2 = func_0x00045cac(param_1,iVar7,0xfa,(int)*(short *)(param_1 + 0x60));
    bVar1 = *(byte *)(param_1 + 0x5f);
    *(byte *)(param_1 + 0x5f) = bVar1 | cVar2 << 1;
    if (bVar1 == 0 && (byte)(cVar2 << 1) == 0) {
      cVar2 = func_0x00045cac(param_1,iVar7,500,(int)*(short *)(param_1 + 0x60));
      *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | cVar2 << 2;
    }
  }
  if (*(char *)(param_1 + 0x5f) != '\0') {
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) >> 1;
  }
  if (*(short *)(param_1 + 0x42) != 3) {
    local_1e = *(undefined2 *)(param_1 + 0x74);
    local_1a = *(undefined2 *)(param_1 + 0x72);
    local_16 = *(undefined2 *)(param_1 + 0x76);
    iVar7 = func_0x0013b738(param_1,auStack_20,0);
    if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
      if (*(byte *)(param_1 + 3) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x23ef < *(short *)(param_1 + 0x2e)) {
        iVar7 = 2;
      }
    }
    if (1 < iVar7) {
      *(undefined2 *)(param_1 + 0x40) = 0;
      *(undefined2 *)(param_1 + 0x42) = 3;
    }
  }
  uVar5 = *(short *)(param_1 + 0x40) - 1;
  *(ushort *)(param_1 + 0x40) = uVar5;
  if ((int)((uint)uVar5 << 0x10) < 0) {
    *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) * -2;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    halt_baddata();
  }
LAB_0803b10c:
  if (*(char *)(param_1 + 0xbe) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x72) + (*(short *)(param_1 + 0x44) >> 5);
  return;
}

