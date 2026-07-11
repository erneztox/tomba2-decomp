// FUN_080374cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08037a20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080374cc(int param_1)

{
  undefined2 uVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  
  bVar8 = *(byte *)(param_1 + 6);
  if (bVar8 == 1) {
    sVar4 = *(short *)(param_1 + 0x44) + 0x38;
    *(short *)(param_1 + 0x44) = sVar4;
    if (0xc00 < sVar4) {
      *(undefined2 *)(param_1 + 0x44) = 0xc00;
    }
    func_0x0013b8f4(param_1,(int)*(short *)(param_1 + 0x66),
                    (int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x18);
    func_0x00041ac0(param_1);
    if (*(char *)(param_1 + 0x29) == '\0') {
      cVar2 = func_0x00049250(param_1,0,0xc0);
      *(char *)(param_1 + 0x5f) = cVar2;
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 0x29) = 4;
        if (*(char *)(param_1 + 0x5f) == '\x02') goto LAB_080377e8;
        *(undefined1 *)(param_1 + 0x5f) = 0;
      }
      bVar8 = *(byte *)(param_1 + 0x29);
      iVar6 = func_0x0004954c(param_1,0x30,0x60);
      bVar8 = bVar8 | iVar6 != 0;
      *(byte *)(param_1 + 0x29) = bVar8;
      iVar6 = func_0x0004954c(param_1,0x30,0xffffff60);
      bVar8 = bVar8 | iVar6 != 0;
      *(byte *)(param_1 + 0x29) = bVar8;
      iVar6 = func_0x000493e8(param_1,0,0xfffffec0);
      if (iVar6 != 0) {
        bVar8 = bVar8 | 2;
      }
      *(byte *)(param_1 + 0x29) = bVar8;
    }
LAB_080377e8:
    func_0x0004130c(param_1,0);
    uVar3 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar3;
    sVar4 = *(short *)(param_1 + 0x44) >> 4;
    *(short *)(param_1 + 0x62) = sVar4;
    *(short *)(param_1 + 0x58) = sVar4;
    if ((int)((uint)uVar3 << 0x10) < 0) {
      halt_baddata();
    }
    if ((*(char *)(param_1 + 0x5f) != '\0') && (*(short *)(param_1 + 0x66) != 0xc00)) {
      halt_baddata();
    }
LAB_08037a24:
    iVar6 = 8;
    if ((*(ushort *)(param_1 + 0x66) - 0xb00 < 0x201) ||
       (*(ushort *)(param_1 + 0x66) - 0x100 < 0x401)) {
      iVar6 = 10;
    }
    sVar4 = *(short *)(param_1 + 0x42) + 0x1f;
    *(short *)(param_1 + 0x42) = sVar4;
    iVar7 = func_0x00083e80((int)sVar4);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)(iVar7 >> iVar6);
    return;
  }
  if (1 < bVar8) {
    if (bVar8 != 2) {
      if (bVar8 != 3) {
        halt_baddata();
      }
      if (*(char *)(param_1 + 7) == '\0') {
        func_0x00049760(param_1);
        uVar1 = _DAT_1f8001a0;
        *(undefined2 *)(param_1 + 0x62) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x60) = uVar1;
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
      iVar6 = func_0x0004139c(param_1 + 0x56,(int)*(short *)(param_1 + 100),0x80);
      if (iVar6 != 0) {
        uVar1 = *(undefined2 *)(param_1 + 100);
        *(undefined2 *)(param_1 + 100) = 0xffff;
        *(undefined2 *)(param_1 + 0x56) = uVar1;
        *(char *)(param_1 + 0xbe) = '\x01' - *(char *)(param_1 + 0xbe);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_08037a24;
    }
    func_0x0013b8f4(param_1,(int)*(short *)(param_1 + 0x66),
                    (int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x18);
    func_0x00041ac0(param_1);
    if (*(char *)(param_1 + 0x29) == '\0') {
      cVar2 = func_0x00049250(param_1,0,0xc0);
      *(char *)(param_1 + 0x5f) = cVar2;
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 0x29) = 4;
        if (*(char *)(param_1 + 0x5f) == '\x02') goto LAB_0803790c;
        *(undefined1 *)(param_1 + 0x5f) = 0;
      }
      bVar8 = *(byte *)(param_1 + 0x29);
      iVar6 = func_0x0004954c(param_1,0x30,0x60);
      bVar8 = bVar8 | iVar6 != 0;
      *(byte *)(param_1 + 0x29) = bVar8;
      iVar6 = func_0x0004954c(param_1,0x30,0xffffff60);
      bVar8 = bVar8 | iVar6 != 0;
      *(byte *)(param_1 + 0x29) = bVar8;
      iVar6 = func_0x000493e8(param_1,0,0xfffffec0);
      if (iVar6 != 0) {
        bVar8 = bVar8 | 2;
      }
      *(byte *)(param_1 + 0x29) = bVar8;
    }
LAB_0803790c:
    func_0x0004130c(param_1,0);
    sVar4 = *(short *)(param_1 + 0x44);
    uVar3 = *(short *)(param_1 + 0x44) - 0x38;
    *(ushort *)(param_1 + 0x44) = uVar3;
    sVar4 = sVar4 >> 4;
    *(short *)(param_1 + 0x62) = sVar4;
    *(short *)(param_1 + 0x58) = sVar4;
    if ((int)((uint)uVar3 << 0x10) < 0) {
      if (*(char *)(param_1 + 0x5f) == '\0') {
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined2 *)(param_1 + 0x44) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto LAB_08037a24;
  }
  if (bVar8 != 0) {
    halt_baddata();
  }
  func_0x00041ac0(param_1);
  uVar5 = (uint)*(byte *)(param_1 + 0x29);
  if (uVar5 == 0) {
    cVar2 = func_0x00049250(param_1,0,0xc0);
    *(char *)(param_1 + 0x5f) = cVar2;
    if (cVar2 == '\0') {
LAB_08037570:
      bVar8 = *(byte *)(param_1 + 0x29);
      iVar6 = func_0x0004954c(param_1,0x30,0x60);
      bVar8 = bVar8 | iVar6 != 0;
      *(byte *)(param_1 + 0x29) = bVar8;
      iVar6 = func_0x0004954c(param_1,0x30,0xffffff60);
      bVar8 = bVar8 | iVar6 != 0;
      *(byte *)(param_1 + 0x29) = bVar8;
      iVar6 = func_0x000493e8(param_1,0,0xfffffec0);
      if (iVar6 != 0) {
        bVar8 = bVar8 | 2;
      }
      *(byte *)(param_1 + 0x29) = bVar8;
    }
    else {
      *(undefined1 *)(param_1 + 0x29) = 4;
      if (*(char *)(param_1 + 0x5f) != '\x02') {
        *(undefined1 *)(param_1 + 0x5f) = 0;
        goto LAB_08037570;
      }
    }
    uVar5 = (uint)*(byte *)(param_1 + 0x29);
    if (uVar5 == 0) {
      uVar3 = func_0x0009a450();
      *(ushort *)(param_1 + 0x66) = (uVar3 & 7) << 9;
      uVar5 = func_0x0009a450();
      if (((uVar5 & 3) != 0) && ((*(ushort *)(param_1 + 0x66) & 0x3ff) != 0)) {
        func_0x0009a450();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_08037698;
    }
  }
  if (uVar5 - 1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08037660 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uVar5 - 1) * 4 + -0x7fef5ffc))();
    return;
  }
  *(undefined2 *)(param_1 + 0x66) = 0xc00;
LAB_08037698:
  uVar3 = func_0x0009a450();
  *(ushort *)(param_1 + 0x40) = (uVar3 & 0x3f) + 0x14;
  *(undefined2 *)(param_1 + 0x44) = 0x400;
  iVar6 = func_0x00077768((int)(((uint)*(ushort *)(param_1 + 0x66) +
                                (uint)*(ushort *)(param_1 + 0x60)) * 0x10000) >> 0x10,
                          (int)*(short *)(param_1 + 0x56),0);
  if (iVar6 != 0) {
    *(undefined1 *)(param_1 + 7) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

