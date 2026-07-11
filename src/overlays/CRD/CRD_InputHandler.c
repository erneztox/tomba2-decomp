// CRD_InputHandler (CRD_InputHandler) - Card game input handler

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_InputHandler(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar4 = func_0x00080840(_DAT_800bf4b4);
  cVar2 = '\x01';
  if (iVar4 != 1) {
    iVar4 = func_0x00080840(_DAT_800bf4b8);
    cVar2 = '\x02';
    if (iVar4 != 1) {
      iVar4 = func_0x00080840(_DAT_800bf4bc);
      cVar2 = '\x03';
      if (iVar4 != 1) {
        iVar4 = func_0x00080840(_DAT_800bf4c0);
        cVar2 = '\0';
        if (iVar4 == 1) {
          cVar2 = '\x04';
        }
      }
    }
  }
  *(char *)(param_1 + 0x3e) = cVar2;
  if (cVar2 != '\0') {
    func_0x000808f0(*(undefined4 *)(param_1 + 4));
    if ((*(char *)(param_1 + 0x3e) == '\x01') &&
       (pbVar7 = *(byte **)(param_1 + 0x14), pbVar7[0x5fe] == 3)) {
      bVar3 = 0;
      iVar4 = 0x5fe;
      pbVar8 = pbVar7;
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        iVar4 = iVar4 + -1;
        bVar3 = bVar3 ^ bVar1;
      } while (-1 < iVar4);
      if (pbVar7[0x5ff] == bVar3) {
        puVar5 = (undefined4 *)&DAT_800bf870;
        puVar9 = *(undefined4 **)(param_1 + 0x14);
        DAT_1f8001ff = DAT_800bf870;
        _DAT_1f800278 = _DAT_800bfe56;
        if (((uint)puVar9 & 3) != 0) {
          puVar6 = puVar9 + 0x17c;
          do {
            uVar10 = puVar9[1];
            uVar11 = puVar9[2];
            uVar12 = puVar9[3];
            *puVar5 = *puVar9;
            puVar5[1] = uVar10;
            puVar5[2] = uVar11;
            puVar5[3] = uVar12;
            puVar9 = puVar9 + 4;
            puVar5 = puVar5 + 4;
          } while (puVar9 != puVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar6 = puVar9 + 0x17c;
        do {
          uVar10 = puVar9[1];
          uVar11 = puVar9[2];
          uVar12 = puVar9[3];
          *puVar5 = *puVar9;
          puVar5[1] = uVar10;
          puVar5[2] = uVar11;
          puVar5[3] = uVar12;
          puVar9 = puVar9 + 4;
          puVar5 = puVar5 + 4;
        } while (puVar9 != puVar6);
        *puVar5 = *puVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    cVar2 = -1;
    if (*(char *)(param_1 + 0x46) != -1) {
      cVar2 = *(char *)(param_1 + 0x46) << 4;
    }
    if ((*(char *)(param_1 + 0x3e) == '\x04') && (cVar2 != -1)) {
      func_0x00080840(_DAT_800bf4c4);
      func_0x00080840(_DAT_800bf4c8);
      func_0x00080840(_DAT_800bf4cc);
      func_0x00080840(_DAT_800bf4d0);
      func_0x0009bab0(cVar2);
      iVar4 = func_0x00080840(_DAT_800bf4c4);
      if ((((iVar4 != 1) && (iVar4 = func_0x00080840(_DAT_800bf4c8), iVar4 != 1)) &&
          (iVar4 = func_0x00080840(_DAT_800bf4cc), iVar4 != 1)) &&
         (iVar4 = func_0x00080840(_DAT_800bf4d0), iVar4 != 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x5a) = 0x32;
    }
    bVar3 = *(char *)(param_1 + 0x5a) + 1;
    *(byte *)(param_1 + 0x5a) = bVar3;
    if (bVar3 < 0x33) {
      *(undefined1 *)(param_1 + 0x3e) = 0;
      *(undefined1 *)(param_1 + 0x51) = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 0x3f) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x3e) = 2;
    *(undefined1 *)(param_1 + 0x3f) = 0;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}

