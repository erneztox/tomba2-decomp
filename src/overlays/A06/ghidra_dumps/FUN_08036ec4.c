// FUN_08036ec4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080373fc) */
/* WARNING: Removing unreachable block (ram,0x08037414) */
/* WARNING: Removing unreachable block (ram,0x08037430) */
/* WARNING: Removing unreachable block (ram,0x08037438) */
/* WARNING: Removing unreachable block (ram,0x08037450) */
/* WARNING: Removing unreachable block (ram,0x08037454) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08036ec4(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  
  bVar9 = *(byte *)(param_1 + 6);
  if (bVar9 != 1) {
    if (1 < bVar9) {
      if (bVar9 == 2) {
        uVar5 = *(short *)(param_1 + 0x44) - 0x140;
        *(ushort *)(param_1 + 0x44) = uVar5;
        if ((int)((uint)uVar5 << 0x10) < 1) {
          *(undefined2 *)(param_1 + 0x44) = 0;
          *(undefined1 *)(param_1 + 6) = 0;
          *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 7);
        }
        func_0x0013b8f4(param_1,(int)*(short *)(param_1 + 0x66),
                        (int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x18);
        func_0x00041ac0(param_1);
        if (*(char *)(param_1 + 0x29) == '\0') {
          cVar1 = func_0x00049250(param_1,0,0xc0);
          *(char *)(param_1 + 0x5f) = cVar1;
          if (cVar1 != '\0') {
            *(undefined1 *)(param_1 + 0x29) = 4;
            if (*(char *)(param_1 + 0x5f) == '\x02') goto LAB_0803731c;
            *(undefined1 *)(param_1 + 0x5f) = 0;
          }
          bVar9 = *(byte *)(param_1 + 0x29);
          iVar7 = func_0x0004954c(param_1,0x30,0x60);
          bVar9 = bVar9 | iVar7 != 0;
          *(byte *)(param_1 + 0x29) = bVar9;
          iVar7 = func_0x0004954c(param_1,0x30,0xffffff60);
          bVar9 = bVar9 | iVar7 != 0;
          *(byte *)(param_1 + 0x29) = bVar9;
          iVar7 = func_0x000493e8(param_1,0,0xfffffec0);
          if (iVar7 != 0) {
            bVar9 = bVar9 | 2;
          }
          *(byte *)(param_1 + 0x29) = bVar9;
        }
LAB_0803731c:
        func_0x0004130c(param_1,0);
        sVar3 = *(short *)(param_1 + 0x44) >> 4;
        *(short *)(param_1 + 0x62) = sVar3;
        *(short *)(param_1 + 0x58) = sVar3;
        halt_baddata();
      }
      if (bVar9 != 3) {
        halt_baddata();
      }
      if (*(char *)(param_1 + 7) == '\0') {
        func_0x00049760(param_1);
        uVar2 = _DAT_1f8001a0;
        *(undefined2 *)(param_1 + 0x62) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x60) = uVar2;
        if (*(char *)(param_1 + 0xbe) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(short *)(param_1 + 100) = *(short *)(param_1 + 0x60) + 8;
        *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff;
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      }
      else if (*(char *)(param_1 + 7) != '\x01') {
        halt_baddata();
      }
      iVar7 = func_0x0004139c(param_1 + 0x56,(int)*(short *)(param_1 + 100),0x80);
      if (iVar7 != 0) {
        uVar2 = *(undefined2 *)(param_1 + 100);
        *(undefined2 *)(param_1 + 100) = 0xffff;
        *(undefined2 *)(param_1 + 0x56) = uVar2;
        *(char *)(param_1 + 0xbe) = '\x01' - *(char *)(param_1 + 0xbe);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0803745c;
    }
    if (bVar9 != 0) {
      halt_baddata();
    }
    func_0x00041768(param_1,0,4);
    if (((int)_DAT_800e7ffe & 0x8200U) != 0) {
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      halt_baddata();
    }
    uVar2 = func_0x0013b844(param_1,&DAT_800e7eac);
    *(undefined2 *)(param_1 + 0x66) = uVar2;
    *(undefined2 *)(param_1 + 0x44) = 0x400;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  sVar3 = func_0x0013b844(param_1,&DAT_800e7eac);
  uVar5 = _DAT_1f80017c + (*(byte *)(param_1 + 3) & 0xf) * 0x18 & 0x3f;
  uVar6 = func_0x0013b7dc(param_1);
  if (uVar6 == *(byte *)(param_1 + 0xbe)) {
    func_0x0004139c(param_1 + 0x66,(int)sVar3,0x20);
    iVar7 = (int)*(short *)(param_1 + 0x66) - (int)sVar3;
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    if (iVar7 < 0xc9) {
      sVar3 = *(short *)(param_1 + 0x44) + 0x38;
      *(short *)(param_1 + 0x44) = sVar3;
      if (0xc00 < sVar3) {
        *(undefined2 *)(param_1 + 0x44) = 0xc00;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      sVar3 = *(short *)(param_1 + 0x44) + -0x38;
      *(short *)(param_1 + 0x44) = sVar3;
      if (sVar3 < 0x400) {
        *(undefined2 *)(param_1 + 0x44) = 0x400;
      }
    }
    if (uVar5 == 0) {
      iVar7 = func_0x0013b738(param_1,&DAT_800e7eac,1);
      if (5 < iVar7) {
        *(undefined2 *)(param_1 + 0x44) = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((iVar7 < 4) && (uVar6 = func_0x0009a450(param_1), (uVar6 & 3) != 0)) {
        *(undefined1 *)(param_1 + 6) = 2;
        *(undefined1 *)(param_1 + 7) = 3;
        halt_baddata();
      }
    }
  }
  else {
    uVar4 = *(short *)(param_1 + 0x44) - 0xa0;
    *(ushort *)(param_1 + 0x44) = uVar4;
    if ((int)((uint)uVar4 << 0x10) < 1) {
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)(param_1 + 6) = 3;
      halt_baddata();
    }
  }
  func_0x0013b8f4(param_1,(int)*(short *)(param_1 + 0x66),
                  (int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x18);
  func_0x00041ac0(param_1);
  if (*(char *)(param_1 + 0x29) == '\0') {
    cVar1 = func_0x00049250(param_1,0,0xc0);
    *(char *)(param_1 + 0x5f) = cVar1;
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x29) = 4;
      if (*(char *)(param_1 + 0x5f) == '\x02') goto LAB_080371ac;
      *(undefined1 *)(param_1 + 0x5f) = 0;
    }
    bVar9 = *(byte *)(param_1 + 0x29);
    iVar7 = func_0x0004954c(param_1,0x30,0x60);
    bVar9 = bVar9 | iVar7 != 0;
    *(byte *)(param_1 + 0x29) = bVar9;
    iVar7 = func_0x0004954c(param_1,0x30,0xffffff60);
    bVar9 = bVar9 | iVar7 != 0;
    *(byte *)(param_1 + 0x29) = bVar9;
    iVar7 = func_0x000493e8(param_1,0,0xfffffec0);
    if (iVar7 != 0) {
      bVar9 = bVar9 | 2;
    }
    *(byte *)(param_1 + 0x29) = bVar9;
  }
LAB_080371ac:
  func_0x0004130c(param_1,0);
  sVar3 = *(short *)(param_1 + 0x44) >> 4;
  *(short *)(param_1 + 0x62) = sVar3;
  *(short *)(param_1 + 0x58) = sVar3;
  if (((uVar5 == 0) && (*(char *)(param_1 + 0x29) != '\0')) || (*(char *)(param_1 + 0x5f) != '\0'))
  {
    *(undefined2 *)(param_1 + 0x44) = 0;
    if (*(char *)(param_1 + 0x29) == '\a') {
      *(undefined2 *)(param_1 + 0x62) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)(param_1 + 6) = 3;
    }
    else {
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 5) = 2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0803745c:
  iVar7 = 8;
  if ((*(ushort *)(param_1 + 0x66) - 0xb00 < 0x201) || (*(ushort *)(param_1 + 0x66) - 0x100 < 0x401)
     ) {
    iVar7 = 10;
  }
  sVar3 = *(short *)(param_1 + 0x42) + 0x1f;
  *(short *)(param_1 + 0x42) = sVar3;
  iVar8 = func_0x00083e80((int)sVar3);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)(iVar8 >> iVar7);
  return;
}

