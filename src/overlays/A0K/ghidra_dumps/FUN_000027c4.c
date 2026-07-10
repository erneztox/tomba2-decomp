// FUN_000027c4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000027c4(int param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if ((*(byte *)(param_1 + 0x174) & 0x30) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar7 = (uint)*(byte *)(param_1 + 0x6d) * 8;
  sVar3 = *(short *)(iVar7 + -0x7ff5baa4);
  uVar9 = (uint)(*(short *)(iVar7 + -0x7ff5baa2) * 5) >> 2;
  iVar5 = *(short *)(iVar7 + -0x7ff5ba9e) * 5 >> 2;
  if ((DAT_800bf816 == '\0') || (uVar4 = 0xc0f, DAT_800bf84d == '\0')) {
    sVar2 = (short)((uint)(*(short *)(iVar7 + -0x7ff5baa0) * 5) >> 2);
    if (*(char *)(param_1 + 0x165) == '\0') {
      cVar1 = *(char *)(param_1 + 0x14b);
      if (cVar1 == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (cVar1 < '\x02') {
        uVar4 = (undefined2)(*(short *)(iVar7 + -0x7ff5baa0) * 5 >> 2);
      }
      else {
        uVar4 = 0x1553;
        if (cVar1 != '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *(undefined2 *)(param_1 + 0x15e) = uVar4;
      if ((*(byte *)(param_1 + 0x147) & 0x80) == 0) {
        uVar8 = ((*(byte *)(param_1 + 0x147) & 0x7f) * 0x20 - (uint)_DAT_1f8000f2) + 0x1000 & 0xfff;
        uVar4 = (undefined2)uVar8;
        if ((uVar8 - *(ushort *)(param_1 + 0x56) & 0xfff) - 0x601 < 0x3ff) {
          if (*(char *)(param_1 + 0x149) == '\x04') {
            iVar5 = (uint)*(ushort *)(param_1 + 0x44) - iVar5;
            *(short *)(param_1 + 0x44) = (short)iVar5;
            if (iVar5 * 0x10000 < 1) {
              *(short *)(param_1 + 0x44) = sVar2;
              *(undefined1 *)(param_1 + 0x149) = 0;
              *(undefined2 *)(param_1 + 0x56) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            return;
          }
          iVar7 = sVar2 * 3;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 3;
          }
          iVar6 = *(ushort *)(param_1 + 0x44) - uVar9;
          if (iVar7 >> 2 <= (int)*(short *)(param_1 + 0x44)) {
            iVar7 = (int)*(short *)(param_1 + 0x44);
            iVar6 = (int)(short)iVar5;
            if (iVar7 < 0) {
              iVar7 = -iVar7;
            }
            if (iVar6 == 0) {
              trap(0x1c00);
            }
            if ((iVar6 == -1) && (iVar7 == -0x80000000)) {
              trap(0x1800);
            }
            *(undefined2 *)(param_1 + 0x172) = uVar4;
            *(undefined1 *)(param_1 + 0x149) = 4;
            iVar7 = iVar7 / iVar6 + -7;
            *(short *)(param_1 + 0x96) = (short)iVar7;
            if (iVar7 * 0x10000 < 1) {
              *(undefined2 *)(param_1 + 0x96) = 1;
            }
            *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) - (short)iVar5;
            halt_baddata();
          }
          *(short *)(param_1 + 0x44) = (short)iVar6;
          if (iVar6 * 0x10000 < 0) {
            *(undefined2 *)(param_1 + 0x44) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          sVar3 = (short)((uint)(sVar3 * 5) >> 2);
          if (*(char *)(param_1 + 0x149) == '\x02') {
            *(undefined1 *)(param_1 + 0x149) = 0;
            *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + sVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (*(char *)(param_1 + 0x149) == '\x04') {
            iVar5 = (uint)*(ushort *)(param_1 + 0x44) - iVar5;
            *(short *)(param_1 + 0x44) = (short)iVar5;
            if (iVar5 * 0x10000 < 1) {
              *(short *)(param_1 + 0x44) = sVar2;
              *(undefined1 *)(param_1 + 0x149) = 0;
              *(undefined2 *)(param_1 + 0x56) = uVar4;
              halt_baddata();
            }
          }
          else {
            if (*(short *)(param_1 + 0x44) < sVar3) {
              *(short *)(param_1 + 0x44) = sVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            iVar5 = (uint)*(ushort *)(param_1 + 0x44) - (iVar5 + -0x240);
            if (*(short *)(param_1 + 0x15e) < *(short *)(param_1 + 0x44)) {
              *(short *)(param_1 + 0x44) = (short)iVar5;
              if (iVar5 * 0x10000 >> 0x10 < (int)*(short *)(param_1 + 0x15e)) {
                *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_1 + 0x15e);
                halt_baddata();
              }
            }
            else {
              iVar5 = *(ushort *)(param_1 + 0x44) + uVar9;
              *(short *)(param_1 + 0x44) = (short)iVar5;
              if ((int)*(short *)(param_1 + 0x15e) < iVar5 * 0x10000 >> 0x10) {
                *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_1 + 0x15e);
              }
            }
            *(undefined1 *)(param_1 + 0x149) = 0;
          }
        }
        uVar4 = func_0x000776f8(uVar8,(int)*(short *)(param_1 + 0x56),0x80);
        *(undefined2 *)(param_1 + 0x56) = uVar4;
      }
      else {
        iVar5 = (uint)*(ushort *)(param_1 + 0x44) - iVar5;
        *(short *)(param_1 + 0x44) = (short)iVar5;
        if (iVar5 * 0x10000 < 1) {
          *(undefined2 *)(param_1 + 0x44) = 0;
          if (*(char *)(param_1 + 0x149) == '\x04') {
            *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x172);
          }
          *(undefined1 *)(param_1 + 0x149) = 2;
          halt_baddata();
        }
      }
      return;
    }
    uVar4 = (undefined2)(sVar2 * 0x13 >> 4);
  }
  *(undefined2 *)(param_1 + 0x15e) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

