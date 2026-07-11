// FUN_08012bac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012bac(int param_1)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  
  if ((*(byte *)(param_1 + 0x174) & 0x30) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar7 = (uint)*(byte *)(param_1 + 0x6d) * 8;
  sVar2 = *(short *)(iVar7 + -0x7ff5baa4);
  uVar3 = *(ushort *)(iVar7 + -0x7ff5baa2);
  uVar4 = *(ushort *)(iVar7 + -0x7ff5ba9e);
  if (*(char *)(param_1 + 0x165) == '\0') {
    cVar1 = *(char *)(param_1 + 0x14b);
    if (cVar1 != '\x01') {
      if (cVar1 < '\x02') {
        uVar6 = *(undefined2 *)(iVar7 + -0x7ff5baa0);
      }
      else {
        uVar6 = 0x110f;
        if (cVar1 != '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *(undefined2 *)(param_1 + 0x15e) = uVar6;
      if ((*(byte *)(param_1 + 0x147) & 0x80) == 0) {
        sVar5 = (*(byte *)(param_1 + 0x147) & 0x7f) * 0x20 - _DAT_1f8000f2;
        if (*(char *)(param_1 + 0x149) == '\x02') {
          *(undefined1 *)(param_1 + 0x149) = 0;
          *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + sVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(short *)(param_1 + 0x44) < sVar2) {
          *(short *)(param_1 + 0x44) = sVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar7 = (uint)*(ushort *)(param_1 + 0x44) - (uVar4 - 0x240);
        if (*(short *)(param_1 + 0x15e) < *(short *)(param_1 + 0x44)) {
          *(short *)(param_1 + 0x44) = (short)iVar7;
          if (iVar7 * 0x10000 >> 0x10 < (int)*(short *)(param_1 + 0x15e)) {
            *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_1 + 0x15e);
            halt_baddata();
          }
        }
        else {
          iVar7 = (uint)*(ushort *)(param_1 + 0x44) + (uint)uVar3;
          *(short *)(param_1 + 0x44) = (short)iVar7;
          if ((int)*(short *)(param_1 + 0x15e) < iVar7 * 0x10000 >> 0x10) {
            *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_1 + 0x15e);
          }
        }
        *(undefined1 *)(param_1 + 0x149) = 0;
        uVar6 = func_0x000776f8(sVar5 + 0x1000U & 0xfff,(int)*(short *)(param_1 + 0x56),0x40);
        *(undefined2 *)(param_1 + 0x56) = uVar6;
      }
      else {
        iVar7 = (uint)*(ushort *)(param_1 + 0x44) - (uint)uVar4;
        *(short *)(param_1 + 0x44) = (short)iVar7;
        if (iVar7 * 0x10000 < 1) {
          *(undefined2 *)(param_1 + 0x44) = 0;
          *(undefined1 *)(param_1 + 0x149) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

