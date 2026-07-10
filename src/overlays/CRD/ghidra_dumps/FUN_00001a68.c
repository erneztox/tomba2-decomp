// FUN_00001a68

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00001c5c) */
/* WARNING: Removing unreachable block (ram,0x00001c6c) */
/* WARNING: Removing unreachable block (ram,0x00001c7c) */
/* WARNING: Removing unreachable block (ram,0x00001cf0) */
/* WARNING: Removing unreachable block (ram,0x00001d0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a68(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_480 [32];
  undefined1 local_460 [128];
  undefined4 local_3e0;
  undefined1 auStack_58 [24];
  int local_40;
  byte local_30;
  
  local_30 = *(char *)(param_1 + 0x46) << 4;
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 1) {
    func_0x0009ba90(local_30);
    *(undefined1 *)(param_1 + 0x43) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  }
  else if (bVar1 < 2) {
    iVar16 = 0;
    if (bVar1 == 0) {
      iVar17 = -0x7ff41270;
      iVar4 = 0;
      do {
        func_0x0009a420((uint)*(byte *)(param_1 + 0x46) * 900 + iVar17,0);
        func_0x0009a420((undefined1 *)((int)&local_3e0 + iVar4),0,0x3c);
        iVar17 = iVar17 + 0x3c;
        *(undefined1 *)((int)&local_3e0 + iVar4) = (char)iVar16;
        iVar16 = iVar16 + 1;
        *(undefined1 *)((int)&local_3e0 + iVar4 + 1) = 0;
        iVar4 = iVar4 + 0x3c;
      } while (iVar16 < 0xf);
      iVar16 = 0;
      *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0x46) + 0x4e) = 0;
      func_0x0009b0c0(auStack_480,0x8018a0b0,local_30 & 0xf0);
      iVar4 = func_0x00080940(auStack_480,auStack_58);
      while( true ) {
        if (iVar4 == 0) {
          if (iVar16 < 0) {
            iVar16 = iVar16 + 0x1fff;
          }
          uVar10 = 0xf - (iVar16 >> 0xd);
          uVar5 = uVar10 & 0xff;
          iVar16 = 0;
          if (uVar5 != 0) {
            puVar8 = (undefined1 *)((int)&local_3e0 + 2);
            do {
              if (puVar8[-1] == '\0') {
                iVar16 = iVar16 + 1;
                puVar8[-1] = 1;
                *puVar8 = 0;
              }
              puVar8 = puVar8 + 0x3c;
            } while (iVar16 < (int)uVar5);
          }
          iVar4 = 0;
          iVar16 = param_1 + (uint)*(byte *)(param_1 + 0x46);
          *(char *)(iVar16 + 0x4e) = *(char *)(iVar16 + 0x4e) + (char)uVar10;
          puVar11 = &local_3e0;
          puVar15 = (undefined4 *)((uint)*(byte *)(param_1 + 0x46) * 900 + -0x7ff41270);
          do {
            if (*(char *)((int)puVar11 + 1) == '\x01') {
              puVar7 = puVar11;
              puVar2 = puVar15;
              do {
                puVar9 = puVar2;
                puVar6 = puVar7;
                uVar14 = puVar6[1];
                uVar12 = puVar6[2];
                uVar13 = puVar6[3];
                *puVar9 = *puVar6;
                puVar9[1] = uVar14;
                puVar9[2] = uVar12;
                puVar9[3] = uVar13;
                puVar7 = puVar6 + 4;
                puVar2 = puVar9 + 4;
              } while (puVar7 != puVar11 + 0xc);
              uVar13 = puVar6[5];
              uVar12 = puVar6[6];
              puVar9[4] = *puVar7;
              puVar9[5] = uVar13;
              puVar9[6] = uVar12;
              puVar15 = puVar15 + 0xf;
            }
            iVar4 = iVar4 + 1;
            puVar11 = puVar11 + 0xf;
          } while (iVar4 < 0xf);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar4 = func_0x0009a640(0x8018a0a0,auStack_58,0xf);
        if (iVar4 == 0) break;
        iVar16 = iVar16 + local_40;
        iVar4 = func_0x00080900(auStack_58);
      }
      iVar16 = 0;
      param_1 = param_1 + (uint)*(byte *)(param_1 + 0x46);
      *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x4e) + '\x01';
      func_0x0009b0c0(auStack_480,0x8018a0bc,local_30,auStack_58);
      do {
        iVar4 = func_0x000808b0(auStack_480,1);
        if (iVar4 != -1) {
          iVar17 = func_0x000808c0(iVar4,0x380,0);
          if ((iVar17 != -1) && (iVar17 = func_0x000808d0(iVar4,local_460,0x80), iVar17 != -1)) {
            func_0x000808f0(iVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          func_0x000808f0(iVar4);
        }
        iVar16 = iVar16 + 1;
        if (6 < iVar16) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      } while( true );
    }
  }
  else if (bVar1 == 2) {
    iVar16 = func_0x00080840(_DAT_800bf4b4);
    cVar3 = '\x01';
    if (iVar16 != 1) {
      iVar16 = func_0x00080840(_DAT_800bf4b8);
      cVar3 = '\x02';
      if (iVar16 != 1) {
        iVar16 = func_0x00080840(_DAT_800bf4bc);
        cVar3 = '\x03';
        if (iVar16 != 1) {
          iVar16 = func_0x00080840(_DAT_800bf4c0);
          cVar3 = '\x04';
          if (iVar16 != 1) {
            DAT_800bf4db = DAT_800bf4db + '\x01';
            cVar3 = '\0';
            if (DAT_800bf4db == -1) {
              cVar3 = '\x02';
            }
          }
        }
      }
    }
    *(char *)(param_1 + 0x3e) = cVar3;
    if (cVar3 != '\0') {
      if (cVar3 != '\x01') {
        func_0x0001cba8(param_1,*(undefined1 *)(param_1 + 0x46));
        *(undefined1 *)(param_1 + 0x3e) = 2;
      }
      *(undefined1 *)(param_1 + 0x3f) = 0;
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 1) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

