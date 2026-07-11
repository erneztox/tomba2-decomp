// FUN_08016500

/* WARNING: Control flow encountered bad instruction data */

void FUN_08016500(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_2 + 0xbf) == '\0') {
    if ((*(byte *)(param_2 + 3) & 0x80) == 0) {
      iVar1 = func_0x00022e04(param_1,param_2,*(undefined4 *)(param_2 + 0xd4));
      if ((iVar1 != 0) &&
         (uVar2 = func_0x0001e860(param_1,param_2,*(undefined4 *)(param_2 + 0xd4),0),
         (uVar2 & 0x80) == 0)) {
        DAT_1f800182 = 0;
      }
      if (((*(char *)(param_2 + 0x5e) != '\0') &&
          (iVar1 = func_0x00022e04(param_1,param_2,*(undefined4 *)(param_2 + 0xc0)), iVar1 != 0)) &&
         (uVar2 = func_0x0001dc9c(param_1,param_2,*(undefined4 *)(param_2 + 0xc0),0),
         (uVar2 & 0x80) == 0)) {
        DAT_1f800182 = 0;
      }
    }
    else {
      iVar1 = func_0x00022f04();
      if (iVar1 != 0) {
        func_0x0001e860(param_1,param_2,0,0);
        *(undefined1 *)(param_2 + 0x47) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}

