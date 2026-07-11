// FUN_0801b7e8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801b7e8(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  sVar2 = *(short *)(*(int *)(param_1 + 0x14) + 0x4a);
  *(short *)(param_1 + 0x4a) = sVar2;
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x46) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(*(int *)(param_1 + 0xc4) + 0xc) =
         *(short *)(*(int *)(param_1 + 0xc4) + 0xc) - sVar2 / 0x3e;
    if (*(short *)(param_1 + 0x4a) == 0) {
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 0;
    }
    else {
      if (0x1eff < *(short *)(param_1 + 0x4a)) {
        *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x60) + 1;
      *(short *)(param_1 + 0x60) = sVar2;
      if ((int)sVar2 < (0x1f00 - *(short *)(param_1 + 0x4a) >> 7) + 7) goto LAB_0801ba10;
      func_0x00074590(0x8e,0,0);
      *(undefined2 *)(param_1 + 0x60) = 0;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (sVar2 == 0) {
        if (*(char *)(param_1 + 0x5e) != '\x02') goto LAB_0801ba10;
        *(undefined1 *)(param_1 + 5) = 2;
      }
      else {
        *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 2;
        *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x46) = *(undefined1 *)(param_1 + 0x46);
        *(undefined1 *)(param_1 + 5) = 1;
      }
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)(param_1 + 0x46) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(*(int *)(param_1 + 0xc4) + 0xc) =
         *(short *)(*(int *)(param_1 + 0xc4) + 0xc) - sVar2 / 0x3e;
    if (*(char *)(param_1 + 0x5e) == '\0') {
      *(undefined1 *)(param_1 + 5) = 0;
    }
LAB_0801ba10:
    iVar3 = func_0x0007778c(param_1);
    if (iVar3 != 0) {
      func_0x000517f8(param_1);
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

