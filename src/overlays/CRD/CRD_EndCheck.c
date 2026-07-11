// CRD_EndCheck (CRD_EndCheck) - End of game check

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_EndCheck(undefined1 *param_1)

{
  short sVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  
  iVar11 = 0;
  psVar13 = *(short **)(param_1 + 8);
  iVar12 = 4;
  *psVar13 = 0;
  do {
    func_0x0009a420((int)psVar13 + iVar12,0,0x3c);
    iVar11 = iVar11 + 1;
    iVar12 = iVar12 + 0x3c;
  } while (iVar11 < 0xf);
  uVar7 = (uint)(byte)param_1[0x46];
  puVar6 = (uint *)(uVar7 * 900 + -0x7ff41270);
  if ((param_1[0x3c] & 1) == 0) {
    iVar11 = 0;
    if (param_1[uVar7 + 0x4e] != '\0') {
      do {
        if ((*puVar6 & 0xffff00) == 0x10100) {
          puVar8 = (uint *)(psVar13 + *psVar13 * 0x1e + 2);
          puVar3 = puVar6;
          do {
            puVar2 = puVar3;
            puVar5 = puVar8;
            uVar7 = puVar2[1];
            uVar9 = puVar2[2];
            uVar10 = puVar2[3];
            *puVar5 = *puVar2;
            puVar5[1] = uVar7;
            puVar5[2] = uVar9;
            puVar5[3] = uVar10;
            puVar3 = puVar2 + 4;
            puVar8 = puVar5 + 4;
          } while (puVar3 != puVar6 + 0xc);
          uVar7 = puVar2[5];
          uVar9 = puVar2[6];
          puVar5[4] = *puVar3;
          puVar5[5] = uVar7;
          puVar5[6] = uVar9;
          *psVar13 = *psVar13 + 1;
        }
        iVar11 = iVar11 + 1;
        puVar6 = puVar6 + 0xf;
      } while (iVar11 < (int)(uint)(byte)param_1[(byte)param_1[0x46] + 0x4e]);
    }
    if (*psVar13 == 0) {
      if (_DAT_800bf4b0 != 0x3e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_00003a88:
      if (_DAT_800bf4b2 != -1) {
        *_DAT_800bf4a8 = 0;
        _DAT_800bf4b2 = -1;
      }
      param_1[3] = 1;
      *param_1 = 0xe;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[0x47] = 0;
      sVar1 = *psVar13;
      iVar11 = 0;
      if (0 < sVar1) {
        do {
          if (param_1[(byte)param_1[0x46] + 0x48] == (char)psVar13[2]) {
            param_1[0x47] = (char)iVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          iVar11 = iVar11 + 1;
          psVar13 = psVar13 + 0x1e;
        } while (iVar11 < sVar1);
      }
      return;
    }
    if (_DAT_800bf4b0 != -1) {
      *_DAT_800bf4a4 = 0;
      _DAT_800bf4b0 = -1;
    }
    if (_DAT_800bf4b2 != 0x3f) {
      func_0x0009a5b0(_DAT_800bf4a8,_DAT_800a2950);
      _DAT_800bf4b2 = 0x3f;
    }
  }
  else {
    iVar11 = 0;
    if (param_1[uVar7 + 0x4e] != '\0') {
      puVar8 = (uint *)(uVar7 * 900 + -0x7ff41240);
      do {
        if (*(char *)((int)puVar8 + -0x2f) == '\x01') {
          puVar3 = (uint *)(psVar13 + *psVar13 * 0x1e + 2);
          puVar5 = puVar6;
          do {
            puVar4 = puVar5;
            puVar2 = puVar3;
            uVar7 = puVar4[1];
            uVar9 = puVar4[2];
            uVar10 = puVar4[3];
            *puVar2 = *puVar4;
            puVar2[1] = uVar7;
            puVar2[2] = uVar9;
            puVar2[3] = uVar10;
            puVar5 = puVar4 + 4;
            puVar3 = puVar2 + 4;
          } while (puVar5 != puVar8);
          uVar7 = puVar4[5];
          uVar9 = puVar4[6];
          puVar2[4] = *puVar5;
          puVar2[5] = uVar7;
          puVar2[6] = uVar9;
          *psVar13 = *psVar13 + 1;
        }
        iVar11 = iVar11 + 1;
        puVar8 = puVar8 + 0xf;
        puVar6 = puVar6 + 0xf;
      } while (iVar11 < (int)(uint)(byte)param_1[(byte)param_1[0x46] + 0x4e]);
    }
    if (*psVar13 == 0) {
      if (_DAT_800bf4b0 != 0x37) {
        func_0x0009a5b0(_DAT_800bf4a4,_DAT_800a2930);
        _DAT_800bf4b0 = 0x37;
      }
      goto LAB_00003a88;
    }
    if (_DAT_800bf4b0 != -1) {
      *_DAT_800bf4a4 = 0;
      _DAT_800bf4b0 = -1;
    }
    if (_DAT_800bf4b2 != 0x38) {
      func_0x0009a5b0(_DAT_800bf4a8,_DAT_800a2934);
      _DAT_800bf4b2 = 0x38;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

