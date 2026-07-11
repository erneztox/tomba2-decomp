// FUN_080261f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08026450) */

void FUN_080261f4(int param_1)

{
  short sVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  
  bVar4 = *(byte *)(param_1 + 6);
  iVar13 = *(int *)(param_1 + 0x14);
  if (bVar4 == 1) {
    iVar13 = func_0x00041438(param_1,(uint)*(byte *)(param_1 + 0x47) << 7,0x100);
    if (iVar13 == 0) {
      return;
    }
    uVar6 = *(byte *)(param_1 + 0x7b) - 1;
    if (uVar6 < 0x32) {
                    /* WARNING: Could not emulate address calculation at 0x080264c4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar6 * 4 + -0x7fef67f8))();
      return;
    }
    func_0x00041768(param_1,4,8);
    *(undefined2 *)(param_1 + 0x44) = 0xc00;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else {
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        halt_baddata();
      }
      bVar4 = func_0x0009a450();
      uVar5 = func_0x0009a450();
      *(ushort *)(param_1 + 0x40) = (uVar5 & 0x1f) + 0x10;
      if ((bVar4 & 0x60) == 0) {
        bVar2 = false;
        iVar12 = (*(short *)(iVar13 + 0x12) * 9) / 10;
        sVar8 = (short)iVar12;
        if ((*(byte *)(param_1 + 0x5f) & 1) != 0) {
          sVar1 = *(short *)(iVar13 + 4);
          iVar12 = iVar12 * 0x10000 >> 0x10;
          sVar11 = sVar8;
          if (iVar12 == 0) {
            sVar11 = *(short *)(iVar13 + 0x12);
          }
          iVar9 = (int)sVar1 - (int)*(short *)(param_1 + 0x2e);
          if (iVar9 < 0) {
            iVar9 = -iVar9;
          }
          bVar2 = false;
          if ((sVar11 < iVar9) && (bVar2 = true, iVar12 == 0)) {
            if ((int)sVar1 < (int)*(short *)(param_1 + 0x2e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            *(short *)(param_1 + 0x2e) = sVar1 - *(short *)(iVar13 + 0x12);
            bVar2 = true;
          }
        }
        if ((*(byte *)(param_1 + 0x5f) & 2) != 0) {
          sVar1 = *(short *)(iVar13 + 8);
          iVar9 = (int)sVar8;
          iVar12 = iVar9;
          if (iVar9 == 0) {
            iVar12 = (int)*(short *)(iVar13 + 0x12);
          }
          iVar10 = (int)sVar1 - (int)*(short *)(param_1 + 0x36);
          if (iVar10 < 0) {
            iVar10 = -iVar10;
          }
          bVar3 = 0;
          if ((iVar12 < iVar10) && (bVar3 = 1, iVar9 == 0)) {
            if ((int)sVar1 < (int)*(short *)(param_1 + 0x36)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            *(short *)(param_1 + 0x36) = sVar1 - *(short *)(iVar13 + 0x12);
            bVar3 = 1;
          }
          bVar2 = (bool)(bVar2 | bVar3);
        }
        if (bVar2) {
          uVar6 = func_0x00085690((int)*(short *)(param_1 + 0x36) - (int)*(short *)(iVar13 + 8),
                                  (int)*(short *)(iVar13 + 4) - (int)*(short *)(param_1 + 0x2e));
          uVar6 = (int)(uVar6 & 0xfff) >> 7;
          *(char *)(param_1 + 0x47) = (char)uVar6;
          if ((*(byte *)(param_1 + 0x5f) & 0xf) != 3) {
            *(short *)(param_1 + 0x42) = (short)(uVar6 >> 4);
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((*(byte *)(param_1 + 0x5f) & 0xf) == 3) {
          *(byte *)(param_1 + 0x47) = bVar4 & 0x7f;
        }
        else {
          *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) << 1;
          cVar7 = ((byte)*(undefined2 *)(param_1 + 0x42) & 1) * '\x10';
          *(char *)(param_1 + 0x47) = cVar7;
          if ((*(byte *)(param_1 + 0x5f) & 2) == 0) {
            halt_baddata();
          }
          *(char *)(param_1 + 0x47) = cVar7 + '\b';
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar4 != 2) {
        if (bVar4 == 3) {
          uVar5 = *(short *)(param_1 + 0x40) - 1;
          *(ushort *)(param_1 + 0x40) = uVar5;
          if ((int)((uint)uVar5 << 0x10) < 1) {
            *(undefined1 *)(param_1 + 6) = 0;
          }
          return;
        }
        halt_baddata();
      }
      if (*(short *)(*(int *)(param_1 + 0x38) + 4) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(byte *)(param_1 + 0x5f) & 0x80) == 0) {
        func_0x00074590(0,0,0);
        *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x80;
      }
      uVar5 = *(short *)(param_1 + 0x40) - 1;
      *(ushort *)(param_1 + 0x40) = uVar5;
      if ((int)((uint)uVar5 << 0x10) < 1) {
        func_0x00041768(param_1,*(undefined1 *)(param_1 + 0x7b),8);
        uVar5 = func_0x0009a450();
        *(ushort *)(param_1 + 0x40) = uVar5 & 0x1f;
        *(undefined1 *)(param_1 + 6) = 3;
      }
      iVar12 = func_0x00130e20(param_1,1);
      if ((*(byte *)(param_1 + 0x5f) & 1) != 0) {
        iVar9 = (int)*(short *)(iVar13 + 4) - (int)*(short *)(param_1 + 0x2e);
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        if (*(short *)(iVar13 + 0x12) < iVar9) {
          if ((int)*(short *)(param_1 + 0x2e) <= (int)*(short *)(iVar13 + 4)) {
            *(short *)(param_1 + 0x2e) = *(short *)(iVar13 + 4) - *(short *)(iVar13 + 0x12);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      if ((*(byte *)(param_1 + 0x5f) & 2) != 0) {
        iVar9 = (int)*(short *)(iVar13 + 8) - (int)*(short *)(param_1 + 0x36);
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        if (*(short *)(iVar13 + 0x12) < iVar9) {
          if ((int)*(short *)(param_1 + 0x36) <= (int)*(short *)(iVar13 + 8)) {
            *(short *)(param_1 + 0x36) = *(short *)(iVar13 + 8) - *(short *)(iVar13 + 0x12);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      func_0x00130f50(param_1);
      if (iVar12 == 0) {
        return;
      }
      func_0x00041768(param_1,*(undefined1 *)(param_1 + 0x7b),8);
      uVar5 = func_0x0009a450();
      *(ushort *)(param_1 + 0x40) = uVar5 & 0x3f;
    }
    *(undefined1 *)(param_1 + 6) = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

