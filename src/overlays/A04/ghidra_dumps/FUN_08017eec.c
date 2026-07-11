// FUN_08017eec

/* WARNING: Control flow encountered bad instruction data */

void FUN_08017eec(char *param_1,undefined1 *param_2)

{
  int iVar1;
  
  iVar1 = func_0x0001f40c(param_1,param_2,1);
  if (-1 < iVar1) {
    if (param_1[0x164] == '\f') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (((param_2[0x5e] == '\x01') && (iVar1 == 3)) && (*param_1 == '\x01')) {
      if (((*(short *)(param_1 + 0x16e) != 0) && (DAT_1f800137 == '\0')) &&
         ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0)) {
        *param_1 = '\x03';
        *param_2 = 2;
        param_2[0x5e] = 2;
        param_1[5] = '\x18';
        param_1[6] = '\0';
        param_1[7] = '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      func_0x0001ff7c(param_1,param_2,iVar1,1);
      DAT_1f800182 = 0;
    }
  }
  return;
}

