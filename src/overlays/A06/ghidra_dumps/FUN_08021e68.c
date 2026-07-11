// FUN_08021e68

/* WARNING: Control flow encountered bad instruction data */

int FUN_08021e68(int param_1,uint param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)DAT_800bfa14;
  if ((uVar4 & 7) < 7) {
    if (param_2 == 2) {
      if ((DAT_800bfa14 & 2) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if ((param_2 == 1) && ((DAT_800bfa14 & 4) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if ((param_2 == 1) && (1 < DAT_800bfa1c)) {
      return 0;
    }
    if ((param_2 == 0) && (DAT_800bfa1c != 0)) {
      return 0;
    }
  }
  iVar3 = func_0x00072ddc(0,1,3,0x1f);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x1c) = 0x8011b76c;
    *(char *)(iVar3 + 3) = (char)param_2;
    if (((int)uVar4 >> (param_2 & 0x1f) & 1U) == 0) {
      *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(iVar3 + 0x32) = *(undefined2 *)(param_1 + 0x32);
      uVar1 = *(undefined2 *)(param_1 + 0x36);
      *(undefined1 *)(iVar3 + 0x5e) = 0;
      *(undefined2 *)(iVar3 + 0x36) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = param_2 * 6;
    *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(iVar2 + -0x7febb1f0);
    *(undefined2 *)(iVar3 + 0x32) = *(undefined2 *)(iVar2 + -0x7febb1ee);
    uVar1 = *(undefined2 *)(iVar2 + -0x7febb1ec);
    *(undefined1 *)(iVar3 + 0x5e) = 1;
    *(undefined2 *)(iVar3 + 0x36) = uVar1;
  }
  return iVar3;
}

