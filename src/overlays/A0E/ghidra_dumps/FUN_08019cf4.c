// FUN_08019cf4

/* WARNING: Control flow encountered bad instruction data */

void FUN_08019cf4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  
  iVar2 = 0;
  pcVar4 = &DAT_80125bcc;
  puVar8 = (uint *)&DAT_80125b4c;
  iVar7 = 4;
  iVar6 = -4;
  puVar5 = &DAT_80126f8c;
  do {
    iVar1 = (0x20 - iVar2) * (uint)*(byte *)(param_1 + 5);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x1f;
    }
    uVar3 = (iVar1 >> 5) + 1;
    if (*(short *)(puVar5 + 6) == 0) {
      *puVar8 = 0;
      if (iVar2 != 0) {
        *(undefined4 *)(&DAT_80125b4c + iVar6) = 0;
      }
      if (iVar2 != 0x1f) {
        *(undefined4 *)(&DAT_80125b4c + iVar7) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      break;
    }
    if (iVar2 < 2) {
      *puVar8 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar8 = (uVar3 - ((int)uVar3 >> 3)) * 0x10000 | (uVar3 - ((int)uVar3 >> 4)) * 0x100 | uVar3;
    *pcVar4 = '!' - (char)iVar2;
    pcVar4 = pcVar4 + 1;
    puVar8 = puVar8 + 1;
    iVar7 = iVar7 + 4;
    iVar6 = iVar6 + 4;
    iVar2 = iVar2 + 1;
    puVar5 = puVar5 + 8;
  } while (iVar2 < 0x20);
  func_0x00029664(&DAT_80126f8c,iVar2,&DAT_80125b4c,&DAT_80125bcc);
  return;
}

