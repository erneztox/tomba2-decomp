// FUN_000017e4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000017e4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  undefined1 auStack_38 [32];
  
  iVar3 = func_0x00080840(_DAT_800bf4b4);
  cVar2 = '\x01';
  if (iVar3 != 1) {
    iVar3 = func_0x00080840(_DAT_800bf4b8);
    cVar2 = '\x02';
    if (iVar3 != 1) {
      iVar3 = func_0x00080840(_DAT_800bf4bc);
      cVar2 = '\x03';
      if (iVar3 != 1) {
        iVar3 = func_0x00080840(_DAT_800bf4c0);
        cVar2 = '\0';
        if (iVar3 == 1) {
          cVar2 = '\x04';
        }
      }
    }
  }
  *(char *)(param_1 + 0x3e) = cVar2;
  if (cVar2 == '\0') {
    return;
  }
  iVar3 = *(int *)(param_1 + 8);
  func_0x000808f0(*(undefined4 *)(param_1 + 4));
  if ((*(char *)(param_1 + 0x3e) == '\x01') &&
     (pbVar5 = *(byte **)(param_1 + 0x14), pbVar5[0x5fe] == 3)) {
    bVar7 = 0;
    iVar4 = 0x5fe;
    pbVar6 = pbVar5;
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      iVar4 = iVar4 + -1;
      bVar7 = bVar7 ^ bVar1;
    } while (-1 < iVar4);
    if (pbVar5[0x5ff] == bVar7) {
      *(undefined1 *)(param_1 + 0x3f) = 0;
      *(undefined1 *)(param_1 + 0x40) = 0;
      return;
    }
  }
  cVar2 = -1;
  if (*(char *)(param_1 + 0x46) != -1) {
    cVar2 = *(char *)(param_1 + 0x46) << 4;
  }
  if (cVar2 != -1) {
    if ((*(byte *)(param_1 + 0x5b) & 0xf) == *(byte *)(param_1 + 0x3e)) {
      *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) + 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x3e);
    if (*(char *)(param_1 + 0x3e) == '\x04') {
      func_0x00080840(_DAT_800bf4c4);
      func_0x00080840(_DAT_800bf4c8);
      func_0x00080840(_DAT_800bf4cc);
      func_0x00080840(_DAT_800bf4d0);
      func_0x0009bab0(cVar2);
      do {
        iVar4 = func_0x00080840(_DAT_800bf4c4);
        if (((iVar4 == 1) || (iVar4 = func_0x00080840(_DAT_800bf4c8), iVar4 == 1)) ||
           (iVar4 = func_0x00080840(_DAT_800bf4cc), iVar4 == 1)) break;
        iVar4 = func_0x00080840(_DAT_800bf4d0);
      } while (iVar4 != 1);
      *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) & 0xf;
    }
    if (cVar2 != -1) {
      if ((*(byte *)(param_1 + 0x5b) & 0xf0) < 0x20) {
        *(undefined1 *)(param_1 + 0x3e) = 0;
        *(undefined1 *)(param_1 + 0x51) = 0;
        *(undefined1 *)(param_1 + 2) = 0;
        *(undefined1 *)(param_1 + 0x3f) = 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x0009b0c0(auStack_38,0x8018a090,cVar2,0x8018a0a0,
                      *(undefined1 *)(iVar3 + (uint)*(byte *)(param_1 + 0x47) * 0x3c + 4));
      func_0x00080910(auStack_38);
    }
  }
  *(undefined1 *)(param_1 + 0x3e) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

