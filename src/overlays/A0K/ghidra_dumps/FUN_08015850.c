// FUN_08015850

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015850(int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if (DAT_800bf8fb == -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar9 = (uint)*(byte *)(param_1 + 0x5e) * 8;
  uVar2 = *(ushort *)(iVar9 + -0x7fee7922);
  uVar11 = (uint)uVar2;
  sVar3 = *(short *)(iVar9 + -0x7fee7928);
  uVar4 = *(ushort *)(iVar9 + -0x7fee7926);
  sVar5 = *(short *)(iVar9 + -0x7fee7924);
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(undefined1 *)(param_1 + 0x14b) = 3;
    sVar6 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar6 + -1;
    *(byte *)(param_1 + 0x147) = *(byte *)(param_1 + 0x147) & 0x7f;
    if (sVar6 == 1) {
      *(undefined1 *)(param_1 + 0x5e) = 0;
      func_0x0004ed94(0x68,0x41);
      *(undefined2 *)(param_1 + 0x44) =
           *(undefined2 *)((uint)*(byte *)(param_1 + 0x5e) * 8 + -0x7fee7934);
    }
  }
  cVar1 = *(char *)(param_1 + 0x14b);
  if (cVar1 == '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((cVar1 < '\x03') && (-1 < cVar1)) {
    *(undefined2 *)(param_1 + 0x15e) = 0x1400;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x15e) = *(undefined2 *)(iVar9 + -0x7fee7924);
  if ((*(byte *)(param_1 + 0x147) & 0x80) == 0) {
    uVar10 = ((*(byte *)(param_1 + 0x147) & 0x7f) * 0x20 - (uint)_DAT_1f8000f2) + 0x1000 & 0xfff;
    if ((uVar10 - *(ushort *)(param_1 + 0x56) & 0xfff) - 0x601 < 0x3ff) {
      if (*(char *)(param_1 + 0x149) != '\x04') {
        iVar9 = sVar5 * 3;
        if (iVar9 < 0) {
          iVar9 = iVar9 + 3;
        }
        iVar8 = (uint)*(ushort *)(param_1 + 0x44) - (uint)uVar4;
        if (iVar9 >> 2 <= (int)*(short *)(param_1 + 0x44)) {
          func_0x00074590(0x81,0,0);
          *(undefined1 *)(param_1 + 0x149) = 4;
          *(ushort *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) - uVar2;
          *(undefined2 *)(param_1 + 0x140) = *(undefined2 *)(param_1 + 0x56);
          halt_baddata();
        }
        *(short *)(param_1 + 0x44) = (short)iVar8;
        if (-1 < iVar8 * 0x10000) {
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x44) = 0;
        halt_baddata();
      }
      iVar9 = *(ushort *)(param_1 + 0x44) - uVar11;
      *(short *)(param_1 + 0x44) = (short)iVar9;
      if (iVar9 * 0x10000 < 1) {
        *(short *)(param_1 + 0x44) = sVar5;
        *(undefined1 *)(param_1 + 0x149) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (*(char *)(param_1 + 0x149) == '\x02') {
        *(undefined1 *)(param_1 + 0x149) = 0;
        *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + sVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 0x149) != '\x04') {
        if (*(short *)(param_1 + 0x44) < sVar3) {
          *(short *)(param_1 + 0x44) = sVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar9 = (uint)*(ushort *)(param_1 + 0x44) - (uVar11 - 0x240);
        if (*(short *)(param_1 + 0x15e) < *(short *)(param_1 + 0x44)) {
          *(short *)(param_1 + 0x44) = (short)iVar9;
          if (iVar9 * 0x10000 >> 0x10 < (int)*(short *)(param_1 + 0x15e)) {
            *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_1 + 0x15e);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          iVar9 = (uint)*(ushort *)(param_1 + 0x44) + (uint)uVar4;
          *(short *)(param_1 + 0x44) = (short)iVar9;
          if ((int)*(short *)(param_1 + 0x15e) < iVar9 * 0x10000 >> 0x10) {
            *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_1 + 0x15e);
          }
        }
        *(undefined1 *)(param_1 + 0x149) = 0;
        uVar7 = func_0x000776f8(uVar10,(int)*(short *)(param_1 + 0x56),0x30);
        *(undefined2 *)(param_1 + 0x56) = uVar7;
        *(undefined2 *)(param_1 + 0x140) = uVar7;
        return;
      }
      iVar9 = *(ushort *)(param_1 + 0x44) - uVar11;
      *(short *)(param_1 + 0x44) = (short)iVar9;
      if (iVar9 * 0x10000 < 1) {
        *(short *)(param_1 + 0x44) = sVar5;
        *(undefined1 *)(param_1 + 0x149) = 0;
        halt_baddata();
      }
    }
    uVar7 = func_0x000776f8(uVar10,(int)*(short *)(param_1 + 0x56),0x80);
    *(undefined2 *)(param_1 + 0x56) = uVar7;
  }
  else {
    iVar9 = *(ushort *)(param_1 + 0x44) - uVar11;
    *(short *)(param_1 + 0x44) = (short)iVar9;
    if (iVar9 * 0x10000 < 1) {
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 0x149) = 2;
    }
    *(undefined2 *)(param_1 + 0x140) = *(undefined2 *)(param_1 + 0x56);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

