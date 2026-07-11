// FUN_08020b98

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08020b98(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  
  bVar3 = *(byte *)(param_1 + 4);
  if (bVar3 != 1) {
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        *(undefined1 *)(param_1 + 4) = 1;
        *(undefined1 *)(param_1 + 0xb) = 0;
        *(undefined1 *)(param_1 + 0xd) = 0;
        func_0x001195ac(param_1,0);
        *(undefined1 *)(param_1 + 0x46) = 1;
        *(undefined2 *)(param_1 + 0xbc) = 0x1000;
        *(undefined2 *)(param_1 + 0xba) = 0x1000;
        *(undefined2 *)(param_1 + 0xb8) = 0x1000;
        *(undefined2 *)(param_1 + 0x42) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar3 != 2) {
      if (bVar3 == 3) {
        func_0x0007a624(param_1);
        return;
      }
      halt_baddata();
    }
    if (*(char *)(param_1 + 5) != '\0') {
      if (*(char *)(param_1 + 5) != '\x01') {
        *(undefined1 *)(param_1 + 1) = 1;
        halt_baddata();
      }
      sVar4 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar4 + -1;
      if (sVar4 == 1) {
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + -1;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00051844(param_1);
      halt_baddata();
    }
    func_0x00074590(0x2d,0xb,0xffffffce);
    iVar9 = 0;
    iVar10 = *(byte *)(param_1 + 0x46) - 1;
    iVar5 = param_1 + iVar10 * 4;
    iVar6 = func_0x000270f8(*(undefined4 *)(*(int *)(iVar5 + 0xc0) + 0x40));
    bVar2 = 0 < iVar6;
    do {
      if (!bVar2) break;
      iVar7 = func_0x0007b26c();
      if (iVar7 != 0) {
        *(undefined1 *)(iVar7 + 1) = 1;
        *(undefined2 *)(iVar7 + 0xc) = 0x800;
        *(char *)(iVar7 + 2) = (char)iVar9;
        *(undefined2 *)(iVar7 + 0x1e) = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x2c);
        *(undefined2 *)(iVar7 + 0x22) = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x30);
        *(undefined2 *)(iVar7 + 0x26) = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x34);
        func_0x00027058(iVar7,*(undefined4 *)(*(int *)(iVar5 + 0xc0) + 0x40),iVar9);
      }
      iVar9 = iVar9 + 1;
      bVar2 = iVar9 < iVar6;
    } while (iVar9 < 6);
    _DAT_800ed098 = _DAT_800ed098 + 1;
    puVar1 = (undefined4 *)(_DAT_800e7e74 + -4);
    _DAT_800e7e74 = _DAT_800e7e74 + -4;
    *puVar1 = *(undefined4 *)(param_1 + iVar10 * 4 + 0xc0);
    cVar8 = *(char *)(param_1 + 0x46) + -1;
    *(char *)(param_1 + 0x46) = cVar8;
    *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + -1;
    if (cVar8 == '\0') {
      *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x40) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = *(byte *)(param_1 + 5);
  if (bVar3 == 1) {
    iVar5 = *(int *)(param_1 + (*(byte *)(param_1 + 0x46) - 1) * 4 + 0xc0);
    *(short *)(iVar5 + 0x3a) = *(short *)(iVar5 + 0x3a) + 0x800;
    iVar5 = *(int *)(param_1 + (*(byte *)(param_1 + 0x46) - 1) * 4 + 0xc0);
    if (*(ushort *)(iVar5 + 0x3a) < 0x1000) goto LAB_08020d9c;
    *(undefined2 *)(iVar5 + 0x3a) = 0x1000;
  }
  else {
    if ((1 < bVar3) || (bVar3 != 0)) goto LAB_08020d9c;
    iVar5 = *(int *)(param_1 + (*(byte *)(param_1 + 0x46) - 1) * 4 + 0xc0);
    *(short *)(iVar5 + 0x3a) = *(short *)(iVar5 + 0x3a) + 0x800;
    iVar5 = *(int *)(param_1 + (*(byte *)(param_1 + 0x46) - 1) * 4 + 0xc0);
    if (0xfff < *(ushort *)(iVar5 + 0x3a)) {
      *(undefined2 *)(iVar5 + 0x3a) = 0x1000;
    }
    sVar4 = *(short *)(param_1 + 0x42) + 1;
    *(short *)(param_1 + 0x42) = sVar4;
    if ((int)sVar4 < (int)((uint)*(byte *)(param_1 + 0x46) << 1)) goto LAB_08020d9c;
    *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 0x46) - 1) * 4 + 0xc0) + 0x3a) = 0x1000;
    func_0x001195ac(param_1,*(undefined1 *)(param_1 + 0x46));
    bVar3 = *(char *)(param_1 + 0x46) + 1;
    *(byte *)(param_1 + 0x46) = bVar3;
    if (bVar3 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
LAB_08020d9c:
  cVar8 = *(char *)(*(int *)(param_1 + 0x10) + 1);
  *(char *)(param_1 + 1) = cVar8;
  if (cVar8 == '\0') {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

