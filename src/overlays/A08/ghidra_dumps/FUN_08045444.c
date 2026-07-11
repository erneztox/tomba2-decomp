// FUN_08045444

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08045444(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  
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
    if (*(char *)(param_1 + 0x3e) == '\x01') {
      bVar3 = 0;
      if (*(char *)(param_1 + 0x46) != -1) {
        pbVar5 = *(byte **)(param_1 + 0x14);
        iVar4 = 0x9fe;
        do {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          iVar4 = iVar4 + -1;
          bVar3 = bVar3 ^ bVar1;
        } while (-1 < iVar4);
        if (*pbVar5 == bVar3) {
          func_0x00121110(*(undefined4 *)(param_1 + 0x14));
          iVar4 = (uint)*(byte *)(param_1 + 0x46) * 900;
          func_0x001211bc(*(undefined4 *)(param_1 + 0x14),iVar4 + -0x7ff4123e,iVar4 + -0x7ff41240);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
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
      *(undefined1 *)(param_1 + 0x3f) = 0x66;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x3e) = 2;
    *(undefined1 *)(param_1 + 0x3f) = 100;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}

