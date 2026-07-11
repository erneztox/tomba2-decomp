// FUN_0801870c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801870c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  undefined4 *puVar7;
  int iVar8;
  short *psVar9;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar8 = *(int *)(param_1 + 0x10);
  psVar9 = (short *)(param_1 + 0x50);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 10;
        sVar3 = *(short *)(param_1 + 0x50) + 0x100;
        *(short *)(param_1 + 0x50) = sVar3;
        if (0xfff < sVar3) {
          *(undefined1 *)(param_1 + 4) = 3;
          halt_baddata();
        }
        *(ushort *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + 1U & 0x1f;
        *(undefined1 *)(param_1 + 1) = 1;
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    iVar5 = 0;
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x50) = 0x1000;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined2 *)(param_1 + 0x52) = 0x1e;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0xffce;
    puVar7 = (undefined4 *)&DAT_80126a68;
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar8 + 0x2e);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar8 + 0x32);
    psVar6 = (short *)&DAT_80126968;
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar8 + 0x36);
    do {
      uVar2 = func_0x0009a450();
      *psVar6 = *(short *)(param_1 + 0x2c) + (uVar2 & 0xff) + -0x80;
      uVar2 = func_0x0009a450();
      psVar6[1] = *(short *)(param_1 + 0x2e) + (uVar2 & 0xff) + -0x80;
      uVar2 = func_0x0009a450();
      psVar6[2] = *(short *)(param_1 + 0x30) + (uVar2 & 0xff) + -0x80;
      if (iVar5 < 3) {
        *puVar7 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *puVar7 = 0x206080;
      *(char *)(iVar5 + -0x7fed9518) = '!' - (char)iVar5;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + 1;
      psVar6 = psVar6 + 4;
    } while (iVar5 < 0x20);
  }
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar8 + 1);
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar8 + 0x2e);
  iVar5 = 0x1f;
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar8 + 0x32);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar8 + 0x36);
  do {
    iVar4 = iVar5 * 8;
    iVar5 = iVar5 + -1;
    iVar8 = iVar5 * 8;
    *(undefined2 *)(&DAT_80126968 + iVar4) = *(undefined2 *)(&DAT_80126968 + iVar8);
    *(undefined2 *)(&DAT_8012696a + iVar4) = *(undefined2 *)(&DAT_8012696a + iVar8);
    *(undefined2 *)(&DAT_8012696c + iVar4) = *(undefined2 *)(&DAT_8012696c + iVar8);
  } while (0 < iVar5);
  _DAT_80126968 = *(undefined2 *)(param_1 + 0x2c);
  _DAT_8012696a = *(undefined2 *)(param_1 + 0x2e);
  _DAT_8012696c = *(undefined2 *)(param_1 + 0x30);
  if (*(short *)(param_1 + 0x52) < 0xb4) {
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 10;
  }
  if (0 < *psVar9) {
    *psVar9 = *psVar9 + -0x200;
  }
  *(ushort *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + 1U & 0x1f;
  *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x44;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

