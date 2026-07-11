// FUN_08020fa8

/* WARNING: Control flow encountered bad instruction data */

void FUN_08020fa8(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (DAT_800bf921 == -1) {
    if ((DAT_800bf922 == -1) || (DAT_800bfb04 != '\0')) {
      func_0x00051b70(param_1,0xc,0x48);
      *(undefined1 *)(param_1 + 5) = 2;
    }
    else {
      func_0x00051b70(param_1,0xc,0x49);
      *(undefined1 *)(param_1 + 5) = 1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00051b70(param_1,0xc,0x48);
  *(undefined1 *)(param_1 + 5) = 0;
  iVar2 = 0;
  if (DAT_800bfa21 != 0) {
    bVar1 = true;
    do {
      if (!bVar1) {
        return;
      }
      func_0x00141020(param_1 + 0x2c,1,0);
      iVar2 = iVar2 + 1;
      bVar1 = iVar2 < 10;
    } while (iVar2 < (int)(uint)DAT_800bfa21);
  }
  return;
}

