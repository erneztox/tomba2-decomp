// FUN_080177d0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080177d0(int param_1,byte *param_2)

{
  int iVar1;
  
  if (((*param_2 & 2) == 0) && (iVar1 = func_0x00022f04(), iVar1 != 0)) {
    if ((DAT_800bf816 == '\0') || (*(char *)(param_1 + 0x164) == '\x04')) {
      param_2[0x29] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)(param_1 + 0x32) < *(short *)(param_2 + 0x32)) {
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_2 + 0x32);
    }
  }
  return;
}

