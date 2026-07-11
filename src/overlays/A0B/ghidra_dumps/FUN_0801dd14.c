// FUN_0801dd14

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0801dd14(int param_1)

{
  bool bVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  short local_18;
  short local_16;
  short local_14;
  
  if (*(char *)(param_1 + 0x29) == '\0') {
    cVar5 = func_0x000455c0(param_1,0,
                            (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                  (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10,
                            (int)*(short *)(param_1 + 0x60));
    *(char *)(param_1 + 0x29) = cVar5;
    if (cVar5 != '\0') {
      func_0x00049674(param_1);
      uVar4 = _DAT_1f8001a2;
      uVar7 = (uint)_DAT_1f8001a6;
      *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
      *(undefined2 *)(param_1 + 0x62) = uVar4;
      if ((uVar7 & 0x8000) != 0) {
        *(undefined2 *)(param_1 + 100) = 0;
      }
    }
    if (*(char *)(param_1 + 0x29) == '\0') {
      sVar6 = *(short *)(param_1 + 0x50) + 0x30;
      *(short *)(param_1 + 0x50) = sVar6;
      if (0x300 < sVar6) {
        *(undefined2 *)(param_1 + 0x50) = 0x300;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0801df4c;
    }
  }
  iVar8 = func_0x00083e80((int)*(short *)(param_1 + 0x62));
  iVar8 = iVar8 >> 7;
  iVar9 = iVar8;
  if (iVar8 < 0) {
    iVar9 = -iVar8;
  }
  if ((0x10 < iVar9) && (bVar1 = iVar8 < 0, iVar8 = 0x10, bVar1)) {
    iVar8 = -0x10;
  }
  if (iVar8 == 0) {
    cVar5 = *(char *)(param_1 + 0xbe);
    iVar8 = -4;
    if (cVar5 == '\0') {
      iVar8 = 4;
      goto LAB_0801de28;
    }
  }
  else {
LAB_0801de28:
    cVar5 = *(char *)(param_1 + 0xbe);
  }
  if (cVar5 == '\0') {
    iVar8 = *(short *)(param_1 + 0x44) + iVar8;
    sVar6 = *(short *)(param_1 + 0x44) + 4;
    if (iVar8 < 0x200) {
LAB_0801dea0:
      *(short *)(param_1 + 0x44) = sVar6;
    }
    else {
      *(short *)(param_1 + 0x44) = (short)iVar8;
      if (0x300 < iVar8 * 0x10000 >> 0x10) {
        halt_baddata();
      }
    }
  }
  else {
    iVar8 = *(short *)(param_1 + 0x44) + iVar8;
    if (-0x200 < iVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_1 + 0x44) = (short)iVar8;
    if (iVar8 * 0x10000 >> 0x10 < -0x300) {
      sVar6 = -0x300;
      goto LAB_0801dea0;
    }
  }
  uVar3 = _DAT_1f80017c & 3;
  *(undefined2 *)(param_1 + 0x50) = 0x200;
  if (uVar3 == 0) {
    local_18 = *(short *)(param_1 + 0x2e);
    local_16 = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x84);
    local_14 = *(short *)(param_1 + 0x36);
    sVar6 = *(short *)(param_1 + 0x60);
    iVar9 = func_0x00083f50((int)sVar6);
    sVar2 = *(short *)(param_1 + 0x80);
    iVar8 = func_0x00083e80((int)sVar6);
    local_18 = local_18 + (short)(iVar9 * sVar2 >> 0xe);
    local_14 = local_14 + (short)(-iVar8 * (int)*(short *)(param_1 + 0x80) >> 0xe);
    func_0x00031220(0xc00,&local_18,0xffffffb0);
  }
LAB_0801df4c:
  return *(undefined1 *)(param_1 + 0x29);
}

