// FUN_080247ec

/* WARNING: Control flow encountered bad instruction data */

void FUN_080247ec(int param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 5) == '\0') {
      if ((DAT_800bf816 != '\0') && (DAT_800bf817 == '\a')) {
        pcVar7 = *(char **)((uint)DAT_800bf9f9 * 4 + -0x7fed5310);
        cVar8 = '\0';
        if (*pcVar7 != -1) {
          pcVar6 = pcVar7 + 8;
          iVar5 = param_1;
          do {
            iVar4 = func_0x0007a980(3,9,0);
            bVar3 = false;
            if (iVar4 == 0) goto LAB_08024aa0;
            if (param_1 != 0) {
              *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
              *(int *)(iVar5 + 0xc) = iVar4;
            }
            *(undefined4 *)(iVar4 + 0x1c) = 0x8011d4e8;
            cVar2 = pcVar6[-7];
            *(undefined1 *)(iVar4 + 2) = 0x15;
            *(char *)(iVar4 + 3) = cVar2 + cVar8 + -0x80;
            *(undefined2 *)(iVar4 + 0x56) = *(undefined2 *)(pcVar6 + 2);
            cVar2 = *pcVar7;
            *(char **)(iVar4 + 0x14) = pcVar7;
            *(char *)(iVar4 + 0x5f) = cVar2;
            iVar5 = iVar5 + 4;
            *(char *)(iVar4 + 0x7b) = pcVar6[-6];
            cVar8 = cVar8 + '\x01';
            *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(pcVar6 + -4);
            pcVar7 = pcVar7 + 0x14;
            *(undefined2 *)(iVar4 + 0x32) = *(undefined2 *)(pcVar6 + -2);
            *(undefined2 *)(iVar4 + 0x36) = *(undefined2 *)pcVar6;
            pcVar6 = pcVar6 + 0x14;
          } while (*pcVar7 != -1);
        }
        bVar3 = true;
LAB_08024aa0:
        if (!bVar3) {
          return;
        }
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
      if (DAT_800bfa05 == '\x01') {
        if (DAT_800bf816 != '\0') {
          return;
        }
        DAT_800bfa05 = '\x02';
      }
      else if (DAT_800bfa05 == '\x02') {
        DAT_800bfa05 = '\0';
        pcVar7 = *(char **)((uint)DAT_800bf9f9 * 4 + -0x7fed5598);
        cVar8 = '\0';
        if (*pcVar7 == -1) {
          DAT_800bfa05 = 0;
          return;
        }
        pcVar6 = pcVar7 + 8;
        do {
          iVar5 = func_0x0007a980(3,9,0);
          if (iVar5 == 0) {
            return;
          }
          *(undefined4 *)(iVar5 + 0x1c) = 0x8011d4e8;
          cVar2 = pcVar6[-7];
          *(undefined1 *)(iVar5 + 2) = 0x15;
          *(char *)(iVar5 + 3) = cVar2 + cVar8 + -0x80;
          *(undefined2 *)(iVar5 + 0x56) = *(undefined2 *)(pcVar6 + 2);
          cVar2 = *pcVar7;
          *(char **)(iVar5 + 0x14) = pcVar7;
          *(char *)(iVar5 + 0x5f) = cVar2;
          *(char *)(iVar5 + 0x7b) = pcVar6[-6];
          cVar8 = cVar8 + '\x01';
          *(undefined2 *)(iVar5 + 0x2e) = *(undefined2 *)(pcVar6 + -4);
          pcVar7 = pcVar7 + 0x14;
          *(undefined2 *)(iVar5 + 0x32) = *(undefined2 *)(pcVar6 + -2);
          *(undefined2 *)(iVar5 + 0x36) = *(undefined2 *)pcVar6;
          pcVar6 = pcVar6 + 0x14;
        } while (*pcVar7 != -1);
      }
    }
    else if (*(char *)(param_1 + 5) == '\x01') {
      if (DAT_800bf816 != '\0') {
        return;
      }
      iVar4 = 0;
      iVar5 = param_1;
      do {
        if (*(int *)(iVar5 + 0xc) != 0) {
          *(undefined1 *)(*(int *)(iVar5 + 0xc) + 4) = 3;
          *(undefined4 *)(iVar5 + 0xc) = 0;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar4 < 0x10);
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  else {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar5 = 0;
    if (bVar1 == 0) {
      iVar4 = 0;
      do {
        *(undefined4 *)(param_1 + (iVar4 >> 0xe) + 0xc) = 0;
        iVar5 = iVar5 + 1;
        iVar4 = iVar5 * 0x10000;
      } while (iVar5 * 0x10000 >> 0x10 < 0x10);
      pcVar7 = *(char **)((uint)DAT_800bf9f9 * 4 + -0x7fed5598);
      cVar8 = '\0';
      if (*pcVar7 != -1) {
        pcVar6 = pcVar7 + 8;
        do {
          iVar5 = func_0x0007a980(3,9,0);
          if (iVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined4 *)(iVar5 + 0x1c) = 0x8011d4e8;
          cVar2 = pcVar6[-7];
          *(undefined1 *)(iVar5 + 2) = 0x15;
          *(char *)(iVar5 + 3) = cVar2 + cVar8 + -0x80;
          *(undefined2 *)(iVar5 + 0x56) = *(undefined2 *)(pcVar6 + 2);
          cVar2 = *pcVar7;
          *(char **)(iVar5 + 0x14) = pcVar7;
          *(char *)(iVar5 + 0x5f) = cVar2;
          *(char *)(iVar5 + 0x7b) = pcVar6[-6];
          cVar8 = cVar8 + '\x01';
          *(undefined2 *)(iVar5 + 0x2e) = *(undefined2 *)(pcVar6 + -4);
          pcVar7 = pcVar7 + 0x14;
          *(undefined2 *)(iVar5 + 0x32) = *(undefined2 *)(pcVar6 + -2);
          *(undefined2 *)(iVar5 + 0x36) = *(undefined2 *)pcVar6;
          pcVar6 = pcVar6 + 0x14;
        } while (*pcVar7 != -1);
      }
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

