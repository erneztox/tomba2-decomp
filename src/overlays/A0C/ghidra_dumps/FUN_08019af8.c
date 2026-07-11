// FUN_08019af8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019af8(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = _DAT_1f80024c;
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(_DAT_1f80024c + 0x2e);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar6 + 0x32);
  bVar1 = *(byte *)(param_1 + 4);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar6 + 0x36);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined1 *)(param_1 + 1) = 1;
        bVar1 = *(byte *)(param_1 + 5) >> 1;
        *(byte *)(param_1 + 5) = bVar1;
        if (bVar1 < 0x11) {
          *(undefined1 *)(param_1 + 4) = 3;
          halt_baddata();
        }
        return;
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    iVar6 = 0;
    if (bVar1 != 0) {
      halt_baddata();
    }
    puVar3 = (undefined2 *)&DAT_80126bd8;
    do {
      *puVar3 = *(undefined2 *)(param_1 + 0x2c);
      puVar3[1] = *(undefined2 *)(param_1 + 0x2e);
      uVar2 = *(undefined2 *)(param_1 + 0x30);
      iVar6 = iVar6 + 1;
      puVar3[3] = 0;
      puVar3[2] = uVar2;
      puVar3 = puVar3 + 4;
    } while (iVar6 < 0x20);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  iVar6 = 0x1f;
  if (DAT_1f800250 == '\0') {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  do {
    iVar5 = iVar6 * 8;
    iVar6 = iVar6 + -1;
    iVar4 = iVar6 * 8;
    *(undefined2 *)(&DAT_80126bd8 + iVar5) = *(undefined2 *)(&DAT_80126bd8 + iVar4);
    *(undefined2 *)(&DAT_80126bda + iVar5) = *(undefined2 *)(&DAT_80126bda + iVar4);
    *(undefined2 *)(&DAT_80126bdc + iVar5) = *(undefined2 *)(&DAT_80126bdc + iVar4);
    *(undefined2 *)(&DAT_80126bde + iVar5) = *(undefined2 *)(&DAT_80126bde + iVar4);
  } while (0 < iVar6);
  _DAT_80126bd8 = *(undefined2 *)(param_1 + 0x2c);
  _DAT_80126bda = *(undefined2 *)(param_1 + 0x2e);
  _DAT_80126bdc = *(undefined2 *)(param_1 + 0x30);
  _DAT_80126bde = 1;
  *(undefined1 *)(param_1 + 1) = 1;
  *(byte *)(param_1 + 5) =
       *(byte *)(param_1 + 5) + (char)((int)(0xff - (uint)*(byte *)(param_1 + 5)) >> 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

