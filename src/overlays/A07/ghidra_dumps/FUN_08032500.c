// FUN_08032500

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08032e2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08032500(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  bVar1 = *(byte *)(param_1 + 5);
  iVar8 = *(int *)(param_1 + 0x10);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077efc(param_1);
    sVar2 = _DAT_801361e4;
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_08032e40;
      }
      if (bVar1 != 0) {
        halt_baddata();
      }
      *(int *)(param_1 + 0x2c) =
           *(int *)(param_1 + 0x2c) +
           (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
      *(int *)(param_1 + 0x34) =
           *(int *)(param_1 + 0x34) +
           (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
      if (*(short *)(param_1 + 0x2e) <= sVar2) {
        *(short *)(param_1 + 0x2e) = _DAT_801361e4;
        *(undefined2 *)(param_1 + 0x36) = _DAT_801361e8;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
    }
    *(short *)(*(int *)(param_1 + 0xc0) + 0xc) =
         *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + *(short *)(param_1 + 0x52);
    sVar2 = *(short *)(param_1 + 0x60) + *(short *)(param_1 + 0x62);
    *(short *)(param_1 + 0x60) = sVar2;
    *(int *)(param_1 + 0x30) =
         *(int *)(param_1 + 0x30) +
         (int)*(short *)(param_1 + 0x4a) * (int)*(short *)(param_1 + 0x44);
    if (0x2800 < sVar2) {
      *(undefined2 *)(param_1 + 0x60) = 0x2800;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x60) * 0x100;
    sVar2 = _DAT_801361e6;
    if ((-1 < *(short *)(param_1 + 0x60)) && (_DAT_801361e6 <= *(short *)(param_1 + 0x32))) {
      *(undefined2 *)(param_1 + 0x60) = 0xec00;
      *(undefined2 *)(param_1 + 0x44) = 0x200;
      *(short *)(param_1 + 0x32) = sVar2;
      *(undefined1 *)(param_1 + 6) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x0007778c(param_1);
      if (*(char *)(param_1 + 6) == '\0') {
        *(short *)(param_1 + 100) = *(short *)(iVar8 + 0x36) - *(short *)(param_1 + 0x36);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        halt_baddata();
      }
      if (*(char *)(param_1 + 6) != '\x01') {
        halt_baddata();
      }
      if (*(char *)(iVar8 + 5) == '\0') {
        return;
      }
      iVar5 = (int)*(short *)(*(int *)(iVar8 + 0xc4) + 0xc);
      iVar3 = func_0x00083e80(iVar5);
      *(short *)(param_1 + 0x32) =
           (*(short *)(iVar8 + 0x32) - *(short *)(param_1 + 0x86)) -
           (short)(iVar3 * *(short *)(param_1 + 100) >> 0xc);
      iVar3 = func_0x00083f50(iVar5);
      *(short *)(param_1 + 0x36) =
           *(short *)(iVar8 + 0x36) - (short)(iVar3 * *(short *)(param_1 + 100) >> 0xc);
      if (*(byte *)(iVar8 + 5) < 2) {
        return;
      }
      func_0x00074590(0xf,0,0);
      iVar7 = (uint)*(byte *)(iVar8 + 3) * 6;
      iVar6 = (int)(((uint)*(ushort *)(&DAT_801361e8 + iVar7) - (uint)*(ushort *)(param_1 + 0x36)) *
                   0x10000) >> 0x10;
      iVar5 = (int)(((uint)*(ushort *)(&DAT_801361e4 + iVar7) - (uint)*(ushort *)(param_1 + 0x2e)) *
                   0x10000) >> 0x10;
      sVar2 = func_0x00085690(iVar6,iVar5);
      *(short *)(param_1 + 0x56) = -sVar2;
      iVar3 = func_0x00083f50((int)-sVar2);
      *(short *)(param_1 + 0x48) = (short)(iVar3 >> 4);
      iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x4c) = (short)(-iVar3 >> 4);
      sVar2 = func_0x00084080(iVar5 * iVar5 + iVar6 * iVar6);
      iVar3 = func_0x00085690((int)(((uint)*(ushort *)(&DAT_801361e6 + iVar7) -
                                    (uint)*(ushort *)(param_1 + 0x32)) * 0x10000) >> 0x10,(int)sVar2
                             );
      iVar3 = func_0x00083e80(-iVar3);
      *(short *)(param_1 + 0x4a) = (short)(-iVar3 >> 4);
      if (*(char *)(iVar8 + 3) != '\0') {
        *(undefined2 *)(param_1 + 0x60) = 0xd800;
        *(undefined2 *)(param_1 + 0x62) = 0x1e0;
        *(undefined2 *)(param_1 + 0x52) = 0x60;
        *(undefined2 *)(param_1 + 0x44) = 0x1000;
        *(undefined1 *)(param_1 + 5) = 2;
        func_0x00042354(1,1);
        func_0x0006e1c0(8);
        func_0x0006cba8(param_1 + 0x2c);
        *(undefined1 *)(param_1 + 6) = 0;
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x60) = 0xc600;
      *(undefined2 *)(param_1 + 0x62) = 0x1e0;
      *(undefined2 *)(param_1 + 0x52) = 0x60;
      *(undefined2 *)(param_1 + 0x44) = 0x740;
      *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 2) {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077efc(param_1);
      *(short *)(*(int *)(param_1 + 0xc0) + 0xc) =
           *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + *(short *)(param_1 + 0x52);
      iVar3 = (int)*(short *)(param_1 + 0x44);
      uVar4 = *(short *)(param_1 + 0x60) + *(short *)(param_1 + 0x62);
      *(ushort *)(param_1 + 0x60) = uVar4;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar3;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar3;
      iVar3 = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar3;
      *(int *)(param_1 + 0x30) = iVar3;
      *(int *)(param_1 + 0x30) = iVar3 + ((int)((uint)uVar4 << 0x10) >> 8);
      if (*(short *)(param_1 + 0x2e) <= *(short *)(&DAT_801361e4 + (uint)*(byte *)(iVar8 + 3) * 6))
      {
        if (DAT_800bf9d6 == '\a') {
          DAT_800bf9d6 = '\b';
        }
        *(undefined2 *)(param_1 + 0x2e) =
             *(undefined2 *)(&DAT_801361e4 + (uint)*(byte *)(iVar8 + 3) * 6);
        uVar4 = *(ushort *)(&DAT_801361e4 + ((uint)*(byte *)(iVar8 + 3) * 3 + 2) * 2);
        *(ushort *)(param_1 + 0x36) = uVar4;
        iVar5 = (int)(((uint)_DAT_801361f0 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
        iVar3 = (int)(((uint)_DAT_801361f4 - (uint)uVar4) * 0x10000) >> 0x10;
        sVar2 = func_0x00085690(iVar3,iVar5);
        *(short *)(param_1 + 0x56) = -sVar2;
        iVar8 = func_0x00083f50((int)-sVar2);
        *(short *)(param_1 + 0x48) = (short)(iVar8 >> 4);
        iVar8 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
        *(short *)(param_1 + 0x4c) = (short)(-iVar8 >> 4);
        sVar2 = func_0x00084080(iVar5 * iVar5 + iVar3 * iVar3);
        iVar8 = func_0x00085690((int)(((uint)_DAT_801361f2 - (uint)*(ushort *)(param_1 + 0x32)) *
                                     0x10000) >> 0x10,(int)sVar2);
        iVar8 = func_0x00083e80(-iVar8);
        *(short *)(param_1 + 0x4a) = (short)(-iVar8 >> 4);
        *(undefined2 *)(param_1 + 0x60) = 0xec00;
        *(undefined2 *)(param_1 + 0x62) = 0x1e0;
        *(undefined2 *)(param_1 + 0x44) = 0x1800;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 3) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077efc(param_1);
      if (*(byte *)(param_1 + 6) == 0) {
        *(short *)(*(int *)(param_1 + 0xc0) + 0xc) =
             *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + *(short *)(param_1 + 0x52);
        iVar8 = (int)*(short *)(param_1 + 0x44);
        sVar2 = *(short *)(param_1 + 0x60) + *(short *)(param_1 + 0x62);
        *(short *)(param_1 + 0x60) = sVar2;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar8;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar8;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar8;
        if (0x2800 < sVar2) {
          *(undefined2 *)(param_1 + 0x60) = 0x2800;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x60) * 0x100;
        uVar4 = _DAT_801361f2;
        if ((short)_DAT_801361f2 <= *(short *)(param_1 + 0x32)) {
          *(undefined2 *)(param_1 + 0x60) = 0xec00;
          *(ushort *)(param_1 + 0x32) = uVar4;
          *(undefined2 *)(param_1 + 0x44) = 0x200;
          *(undefined1 *)(param_1 + 6) = 1;
          halt_baddata();
        }
      }
      else if (*(byte *)(param_1 + 6) < 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if (DAT_800bf9d6 == '\b') {
      return;
    }
  }
LAB_08032e40:
  func_0x0006cba8(param_1 + 0x2c);
  return;
}

