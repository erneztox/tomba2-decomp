// FUN_08031f60

/* WARNING: Control flow encountered bad instruction data */

void FUN_08031f60(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (2 < DAT_800bf871 - 1) {
      *(undefined1 *)(param_1 + 4) = 1;
      if (DAT_800bf873 == '\0') {
        puVar4 = (undefined2 *)&DAT_8013eff0;
        iVar5 = 0;
        pbVar3 = &DAT_8013eff7;
        do {
          bVar1 = pbVar3[-1];
          iVar2 = func_0x0007a980(1,4,0);
          if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined4 *)(iVar2 + 0x1c) = 0x8012abfc;
          *(undefined1 *)(iVar2 + 2) = 0x2f;
          *(byte *)(iVar2 + 3) = bVar1;
          *(undefined2 *)(iVar2 + 0x2e) = *puVar4;
          *(short *)(iVar2 + 0x32) = *(short *)(pbVar3 + -5) + -0xa0;
          *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(pbVar3 + -3);
          *(byte *)(iVar2 + 0x5e) = *pbVar3 & 0xf;
          *(byte *)(iVar2 + 0xbf) = *pbVar3 & 0xf0;
          iVar5 = iVar5 + 1;
          if (iVar2 == 0) {
            return;
          }
          pbVar3 = pbVar3 + 8;
          puVar4 = puVar4 + 4;
        } while (iVar5 < 0x29);
      }
      puVar4 = (undefined2 *)&DAT_8013f138;
      iVar5 = 0;
      pbVar3 = &DAT_8013f13f;
      while( true ) {
        bVar1 = pbVar3[-1];
        iVar2 = func_0x0007a980(1,4,0);
        if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined4 *)(iVar2 + 0x1c) = 0x8012b824;
        *(undefined1 *)(iVar2 + 2) = 0x30;
        *(byte *)(iVar2 + 3) = bVar1;
        *(undefined2 *)(iVar2 + 0x2e) = *puVar4;
        *(short *)(iVar2 + 0x32) = *(short *)(pbVar3 + -5) + -0xa0;
        *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(pbVar3 + -3);
        *(byte *)(iVar2 + 0x5e) = *pbVar3 & 0xf;
        *(byte *)(iVar2 + 0xbf) = *pbVar3 & 0xf0;
        iVar5 = iVar5 + 1;
        if (iVar2 == 0) break;
        pbVar3 = pbVar3 + 8;
        puVar4 = puVar4 + 4;
        if (6 < iVar5) {
          halt_baddata();
        }
      }
      return;
    }
  }
  *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

