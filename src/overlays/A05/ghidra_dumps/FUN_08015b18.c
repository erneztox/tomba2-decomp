// FUN_08015b18

/* WARNING: Control flow encountered bad instruction data */

void FUN_08015b18(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x00022f04();
  if (iVar1 != 0) {
    if (DAT_800bf873 != '\0') {
      func_0x0001e860(param_1,param_2,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_2 + 0x5e) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x5f) == '\x10') {
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_2 + 0x2e);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_2 + 0x36);
      *(short *)(param_1 + 0x32) =
           *(short *)(param_1 + 0x84) +
           *(short *)(param_2 + 0x32) + (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84));
    }
    uVar2 = func_0x0001dc9c(param_1,param_2,0,0x1101);
    if ((uVar2 & 0x80) == 0) {
      DAT_1f800182 = 0;
    }
  }
  return;
}

