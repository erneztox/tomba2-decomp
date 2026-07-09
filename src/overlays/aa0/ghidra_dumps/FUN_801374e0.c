// FUN_801374e0

/* WARNING: Control flow encountered bad instruction data */

bool FUN_801374e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x66) != -0x7f) {
    if (*(char *)(param_1 + 0x66) == -0x80) {
      func_0x80145c78(DAT_800e7eaa,&DAT_800e7eac);
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x48);
      if (((iVar2 != -1) || (iVar2 = 0, DAT_800e7eaa < 3)) || (iVar2 = 1, DAT_800e7eaa < 0xc)) {
        iVar1 = func_0x80145c78(*(undefined1 *)(param_1 + 0x2a),param_1 + 0x2c);
        return iVar2 != iVar1;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

