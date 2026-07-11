// FUN_0802072c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802072c(int param_1)

{
  undefined4 *puVar1;
  short sVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  
  bVar4 = *(byte *)(param_1 + 4);
  if (bVar4 == 1) {
    if (*(char *)(param_1 + 5) == '\0') {
      iVar5 = *(int *)(param_1 + (*(byte *)(param_1 + 0x46) - 1) * 4 + 0xc0);
      *(short *)(iVar5 + 0x3a) = *(short *)(iVar5 + 0x3a) + 0x333;
      iVar5 = *(int *)(param_1 + (*(byte *)(param_1 + 0x46) - 1) * 4 + 0xc0);
      if (0xfff < *(ushort *)(iVar5 + 0x3a)) {
        *(undefined2 *)(iVar5 + 0x3a) = 0x1000;
      }
      if ((int)((uint)*(byte *)(param_1 + 0x46) * 5) <=
          (int)((_DAT_800e7ec2 - 0x5a) * 0x10000) >> 0x10) {
        *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 0x46) - 1) * 4 + 0xc0) + 0x3a) =
             0x1000;
        func_0x001195ac(param_1,*(undefined1 *)(param_1 + 0x46));
        bVar4 = *(char *)(param_1 + 0x46) + 1;
        *(byte *)(param_1 + 0x46) = bVar4;
        if (3 < bVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    else {
      if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar5 = *(int *)(param_1 + (*(byte *)(param_1 + 0x46) - 1) * 4 + 0xc0);
      *(short *)(iVar5 + 0x3a) = *(short *)(iVar5 + 0x3a) + 0x333;
      iVar5 = *(int *)(param_1 + (*(byte *)(param_1 + 0x46) - 1) * 4 + 0xc0);
      if (0xfff < *(ushort *)(iVar5 + 0x3a)) {
        *(undefined2 *)(iVar5 + 0x3a) = 0x1000;
        *(undefined1 *)(param_1 + 6) = 0;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
    }
    if ((DAT_800e7e85 != '\0') || (DAT_800e7e86 < 2)) {
      *(undefined1 *)(param_1 + 4) = 2;
      *(undefined1 *)(param_1 + 5) = 0;
      halt_baddata();
    }
  }
  else {
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        halt_baddata();
      }
      if ((DAT_800e7e85 == '\0') && (1 < DAT_800e7e86)) {
        *(undefined1 *)(param_1 + 4) = 1;
        *(undefined1 *)(param_1 + 0xb) = 0;
        *(undefined1 *)(param_1 + 0xd) = 0;
        func_0x001195ac(param_1,0);
        *(undefined1 *)(param_1 + 0x46) = 1;
        *(undefined2 *)(param_1 + 0xbc) = 0x1000;
        *(undefined2 *)(param_1 + 0xba) = 0x1000;
        *(undefined2 *)(param_1 + 0xb8) = 0x1000;
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 4) = 3;
      halt_baddata();
    }
    if (bVar4 != 2) {
      if (bVar4 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    if (*(char *)(param_1 + 5) == '\0') {
      func_0x00074590(0x2d,0xb,0xffffffce);
      iVar9 = 0;
      iVar10 = *(byte *)(param_1 + 0x46) - 1;
      iVar5 = param_1 + iVar10 * 4;
      iVar6 = func_0x000270f8(*(undefined4 *)(*(int *)(iVar5 + 0xc0) + 0x40));
      bVar3 = 0 < iVar6;
      do {
        if (!bVar3) break;
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
        bVar3 = iVar9 < iVar6;
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
    if (*(char *)(param_1 + 5) != '\x01') {
      halt_baddata();
    }
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + -1;
    }
  }
  *(undefined2 *)(param_1 + 0x2e) = _DAT_800e7eae;
  *(undefined2 *)(param_1 + 0x32) = _DAT_800e7eb2;
  *(undefined2 *)(param_1 + 0x36) = _DAT_800e7eb6;
  *(undefined2 *)(param_1 + 0x54) = _DAT_800e7ed4;
  *(undefined2 *)(param_1 + 0x56) = _DAT_800e7ed6;
  *(undefined2 *)(param_1 + 0x58) = _DAT_800e7ed8;
  func_0x00051844(param_1);
  *(undefined1 *)(param_1 + 1) = DAT_800e7e81;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

