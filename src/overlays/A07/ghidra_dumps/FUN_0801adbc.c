// FUN_0801adbc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0801b0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801adbc(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x000752b4(2);
    uVar7 = 0;
    do {
      uVar8 = uVar7 + 1;
      *(undefined1 *)((short)uVar7 * 0x18 + -0x7fecd4a2) = 0;
      *(undefined1 *)((short)uVar7 * 0x18 + -0x7fecd4a1) = 0;
      uVar7 = uVar8;
    } while (uVar8 < 2);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  uVar9 = 0;
  iVar3 = 0;
  while( true ) {
    iVar3 = (iVar3 >> 0x10) * 0x18;
    sVar2 = (short)uVar9;
    if (DAT_800bf873 == '\0') {
      iVar10 = (int)(((uint)*(ushort *)(iVar3 + -0x7fecd4b0) - (uint)_DAT_1f800160) * 0x10000) >>
               0x10;
      iVar6 = (int)(((uint)*(ushort *)(iVar3 + -0x7fecd4ac) - (uint)_DAT_1f800164) * 0x10000) >>
              0x10;
      uVar4 = func_0x00078240(iVar10,(int)(((uint)*(ushort *)(iVar3 + -0x7fecd4ae) -
                                           (uint)_DAT_1f800162) * 0x10000) >> 0x10,iVar6);
      if (uVar4 < (uint)(int)*(short *)(iVar3 + -0x7fecd4aa)) {
        iVar3 = (int)*(short *)(iVar3 + -0x7fecd4a6) -
                (uVar4 >> ((int)*(short *)(iVar3 + -0x7fecd4a8) & 0x1fU));
        if (iVar3 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (0x7f < iVar3) {
          iVar3 = 0x7f;
        }
        uVar5 = func_0x00085690(iVar6,iVar10);
        func_0x00074a60(iVar3,uVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (((sVar2 == 0) && (DAT_800bf816 != '\0')) && (1 < DAT_800bf817 - 0xb)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if (*(char *)(iVar3 + -0x7fecd4a2) == '\0') {
      *(undefined1 *)(iVar3 + -0x7fecd4a2) = 1;
      if (*(int *)(iVar3 + -0x7fecd4a0) != 0) {
        func_0x00074af0();
      }
      uVar5 = 0x81;
      if ((sVar2 != 0) && (uVar5 = 0x80, sVar2 != 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar5 = func_0x00074590(uVar5,0,0xffffff81);
      *(undefined4 *)(iVar3 + -0x7fecd4a0) = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(iVar3 + -0x7fecd4a2) != '\x01') {
      halt_baddata();
    }
    iVar6 = func_0x0007496c(*(undefined4 *)(iVar3 + -0x7fecd4a0),0,0);
    if (iVar6 == 0) break;
    func_0x00074a38(*(undefined4 *)(iVar3 + -0x7fecd4a0));
    uVar9 = uVar9 + 1;
    iVar3 = uVar9 * 0x10000;
    if (1 < (uVar9 & 0xffff)) {
      func_0x00075d24(0x1fff);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(undefined1 *)(iVar3 + -0x7fecd4a2) = 0;
  halt_baddata();
}

