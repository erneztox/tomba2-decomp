// FUN_08026cb4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08026cb4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_800bf9d9 == 2) {
      DAT_800bf9d9 = 3;
    }
    else if (DAT_800bf9d9 < 3) {
      if (DAT_800bf9d9 == 1) {
        if (DAT_800bf816 != '\0') {
          return;
        }
        DAT_800bf9d9 = 2;
      }
    }
    else if (DAT_800bf9d9 == 3) {
      DAT_800bf9d9 = 0;
      pcVar7 = *(char **)((uint)DAT_800bf9d7 * 4 + -0x7fecc4f8);
      cVar8 = '\0';
      if (*pcVar7 == -1) {
        DAT_800bf9d9 = 0;
        return;
      }
      pcVar6 = pcVar7 + 8;
      do {
        iVar4 = func_0x0007a980(3,9,0);
        if (iVar4 == 0) {
          return;
        }
        *(undefined4 *)(iVar4 + 0x1c) = 0x8011fa0c;
        cVar2 = pcVar6[-7];
        *(undefined1 *)(iVar4 + 2) = 0x52;
        *(char *)(iVar4 + 3) = cVar2 + cVar8 + -0x80;
        *(undefined2 *)(iVar4 + 0x56) = *(undefined2 *)(pcVar6 + 2);
        *(char *)(iVar4 + 0x5f) = *pcVar7;
        cVar2 = pcVar6[-6];
        *(char *)(iVar4 + 0xbf) = cVar2;
        if (cVar2 != -1) {
          *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
        }
        *(char **)(iVar4 + 0x14) = pcVar7;
        uVar3 = 0x17;
        if (((_DAT_800bfe56 & 0x80) != 0) && (uVar3 = 1, pcVar6[-7] == '\0')) {
          uVar3 = 0x17;
        }
        *(undefined1 *)(iVar4 + 0x7b) = uVar3;
        *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(pcVar6 + -4);
        cVar8 = cVar8 + '\x01';
        *(undefined2 *)(iVar4 + 0x32) = *(undefined2 *)(pcVar6 + -2);
        pcVar7 = pcVar7 + 0x14;
        *(undefined2 *)(iVar4 + 0x36) = *(undefined2 *)pcVar6;
        pcVar6 = pcVar6 + 0x14;
      } while (*pcVar7 != -1);
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007add0(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      if (DAT_800bf873 == '\0') {
        iVar5 = 0;
        iVar4 = 0;
        do {
          *(undefined4 *)(param_1 + (iVar4 >> 0xe) + 0xc) = 0;
          iVar5 = iVar5 + 1;
          iVar4 = iVar5 * 0x10000;
        } while (iVar5 * 0x10000 >> 0x10 < 0x10);
        pcVar7 = *(char **)((uint)DAT_800bf9d7 * 4 + -0x7fecc4f8);
        cVar8 = '\0';
        if (*pcVar7 != -1) {
          pcVar6 = pcVar7 + 8;
          do {
            iVar4 = func_0x0007a980(3,9,0);
            if (iVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            *(undefined4 *)(iVar4 + 0x1c) = 0x8011fa0c;
            cVar2 = pcVar6[-7];
            *(undefined1 *)(iVar4 + 2) = 0x52;
            *(char *)(iVar4 + 3) = cVar2 + cVar8 + -0x80;
            *(undefined2 *)(iVar4 + 0x56) = *(undefined2 *)(pcVar6 + 2);
            *(char *)(iVar4 + 0x5f) = *pcVar7;
            cVar2 = pcVar6[-6];
            *(char *)(iVar4 + 0xbf) = cVar2;
            if (cVar2 != -1) {
              *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
            }
            *(char **)(iVar4 + 0x14) = pcVar7;
            uVar3 = 0x17;
            if (((_DAT_800bfe56 & 0x80) != 0) && (uVar3 = 1, pcVar6[-7] == '\0')) {
              uVar3 = 0x17;
            }
            *(undefined1 *)(iVar4 + 0x7b) = uVar3;
            *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(pcVar6 + -4);
            cVar8 = cVar8 + '\x01';
            *(undefined2 *)(iVar4 + 0x32) = *(undefined2 *)(pcVar6 + -2);
            pcVar7 = pcVar7 + 0x14;
            *(undefined2 *)(iVar4 + 0x36) = *(undefined2 *)pcVar6;
            pcVar6 = pcVar6 + 0x14;
          } while (*pcVar7 != -1);
        }
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      }
      else {
        *(undefined1 *)(param_1 + 4) = 3;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

