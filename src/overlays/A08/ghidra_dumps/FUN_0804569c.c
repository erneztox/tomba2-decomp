// FUN_0804569c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08045860) */
/* WARNING: Removing unreachable block (ram,0x0013e820) */
/* WARNING: Removing unreachable block (ram,0x08045880) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0804569c(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_478 [32];
  undefined1 auStack_458 [128];
  undefined4 local_3d8;
  short local_3b4 [6];
  uint auStack_3a8 [214];
  undefined1 auStack_50 [40];
  
  bVar1 = *(byte *)(param_1 + 1);
  cVar2 = *(char *)(param_1 + 0x46) << 4;
  if (bVar1 == 1) {
    func_0x0009ba90(cVar2);
    *(undefined1 *)(param_1 + 0x43) = 0;
    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
  }
  else if (bVar1 < 2) {
    iVar13 = 0;
    if (bVar1 == 0) {
      iVar14 = -0x7ff41270;
      iVar3 = 0;
      do {
        func_0x0009a420((uint)*(byte *)(param_1 + 0x46) * 900 + iVar14,0);
        func_0x0009a420((undefined1 *)((int)&local_3d8 + iVar3),0,0x3c);
        iVar14 = iVar14 + 0x3c;
        *(undefined1 *)((int)&local_3d8 + iVar3) = (char)iVar13;
        iVar13 = iVar13 + 1;
        *(undefined1 *)((int)&local_3d8 + iVar3 + 1) = 0;
        iVar3 = iVar3 + 0x3c;
      } while (iVar13 < 0xf);
      func_0x0009b0c0(auStack_478,0x8010a480,cVar2);
      iVar13 = func_0x00080940(auStack_478,auStack_50);
      while (iVar13 != 0) {
        iVar13 = func_0x0009a640(0x8010a48c,auStack_50,0x12);
        if (iVar13 == 0) {
          func_0x0009b0c0(auStack_478,0x8010a4a0,cVar2,auStack_50);
          iVar13 = 0;
          do {
            iVar3 = func_0x000808b0(auStack_478,1);
            if (iVar3 != -1) {
              iVar14 = func_0x000808c0(iVar3,0x200,0);
              if ((iVar14 != -1) && (iVar14 = func_0x000808d0(iVar3,auStack_458,0x80), iVar14 != -1)
                 ) {
                func_0x000808f0(iVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              func_0x000808f0(iVar3);
            }
            iVar13 = iVar13 + 1;
            if (6 < iVar13) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          } while( true );
        }
        iVar13 = func_0x00080900(auStack_50);
      }
      iVar14 = 0;
      iVar3 = 0;
      iVar13 = (uint)*(byte *)(param_1 + 0x46) * 900;
      puVar12 = (undefined4 *)(iVar13 + -0x7ff41270);
      *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0x46) + 0x4e) = 0;
      do {
        puVar5 = (undefined4 *)((int)&local_3d8 + iVar3);
        if (*(char *)((int)&local_3d8 + iVar3 + 1) == '\x01') {
          if (*(char *)(param_1 + (uint)*(byte *)(param_1 + 0x46) + 0x4e) == '\0') {
            do {
              puVar6 = puVar12;
              puVar4 = puVar5;
              uVar10 = puVar4[1];
              uVar11 = puVar4[2];
              uVar9 = puVar4[3];
              *puVar6 = *puVar4;
              puVar6[1] = uVar10;
              puVar6[2] = uVar11;
              puVar6[3] = uVar9;
              puVar5 = puVar4 + 4;
              puVar12 = puVar6 + 4;
            } while (puVar5 != (undefined4 *)((int)auStack_3a8 + iVar3));
            uVar9 = puVar4[5];
            uVar10 = puVar4[6];
            puVar6[4] = *puVar5;
            puVar6[5] = uVar9;
            puVar6[6] = uVar10;
            *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0x46) + 0x4e) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar7 = *(uint *)((int)auStack_3a8 + iVar3 + 8);
          if (*(uint *)(iVar13 + -0x7ff41238) < uVar7) {
            do {
              uVar10 = puVar5[1];
              uVar11 = puVar5[2];
              uVar9 = puVar5[3];
              *puVar12 = *puVar5;
              puVar12[1] = uVar10;
              puVar12[2] = uVar11;
              puVar12[3] = uVar9;
              puVar5 = puVar5 + 4;
              puVar12 = puVar12 + 4;
            } while (puVar5 != (undefined4 *)((int)auStack_3a8 + iVar3));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (*(uint *)(iVar13 + -0x7ff41238) == uVar7) {
            uVar7 = *(uint *)((int)auStack_3a8 + iVar3 + 4);
            if (*(uint *)(iVar13 + -0x7ff4123c) < uVar7) {
              do {
                uVar10 = puVar5[1];
                uVar11 = puVar5[2];
                uVar9 = puVar5[3];
                *puVar12 = *puVar5;
                puVar12[1] = uVar10;
                puVar12[2] = uVar11;
                puVar12[3] = uVar9;
                puVar5 = puVar5 + 4;
                puVar12 = puVar12 + 4;
              } while (puVar5 != (undefined4 *)((int)auStack_3a8 + iVar3));
              halt_baddata();
            }
            if ((*(uint *)(iVar13 + -0x7ff4123c) == uVar7) &&
               (*(short *)(iVar13 + -0x7ff4124c) < *(short *)((int)local_3b4 + iVar3))) {
              puVar4 = puVar12;
              do {
                puVar8 = puVar4;
                puVar6 = puVar5;
                uVar10 = puVar6[1];
                uVar11 = puVar6[2];
                uVar9 = puVar6[3];
                *puVar8 = *puVar6;
                puVar8[1] = uVar10;
                puVar8[2] = uVar11;
                puVar8[3] = uVar9;
                puVar5 = puVar6 + 4;
                puVar4 = puVar8 + 4;
              } while (puVar5 != (undefined4 *)((int)auStack_3a8 + iVar3));
              uVar9 = puVar6[5];
              uVar10 = puVar6[6];
              puVar8[4] = *puVar5;
              puVar8[5] = uVar9;
              puVar8[6] = uVar10;
            }
          }
        }
        iVar14 = iVar14 + 1;
        iVar3 = iVar3 + 0x3c;
        if (0xe < iVar14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      } while( true );
    }
  }
  else if (bVar1 == 2) {
    iVar13 = func_0x00080840(_DAT_800bf4b4);
    cVar2 = '\x01';
    if (iVar13 != 1) {
      iVar13 = func_0x00080840(_DAT_800bf4b8);
      cVar2 = '\x02';
      if (iVar13 != 1) {
        iVar13 = func_0x00080840(_DAT_800bf4bc);
        cVar2 = '\x03';
        if (iVar13 != 1) {
          iVar13 = func_0x00080840(_DAT_800bf4c0);
          cVar2 = '\x04';
          if (iVar13 != 1) {
            DAT_800bf4db = DAT_800bf4db + '\x01';
            cVar2 = '\0';
            if (DAT_800bf4db == -1) {
              cVar2 = '\x02';
            }
          }
        }
      }
    }
    *(char *)(param_1 + 0x3e) = cVar2;
    if (cVar2 != '\0') {
      if (cVar2 != '\x01') {
        func_0x0001cba8(param_1,*(undefined1 *)(param_1 + 0x46));
        *(undefined1 *)(param_1 + 0x3e) = 2;
      }
      *(undefined1 *)(param_1 + 0x3f) = 100;
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 1) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

