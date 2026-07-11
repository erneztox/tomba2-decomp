// FUN_08014198

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08014198(char *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 != '\x06') {
    *(undefined1 *)(param_2 + 0x29) = 0;
    if (param_1[0x16b] == '\0') {
      iVar1 = func_0x0010cae8(param_1,param_2,*(undefined4 *)(param_2 + 200));
      if (iVar1 == 0) {
        iVar1 = func_0x0010cae8(param_1,param_2,*(undefined4 *)(param_2 + 0xcc));
        if ((iVar1 == 2) && (*(undefined1 *)(param_2 + 0x29) = 0x81, _DAT_1f80018e != 0)) {
          _DAT_1f80018e = 0x20;
        }
      }
      else if ((iVar1 == 2) && (*(undefined1 *)(param_2 + 0x29) = 1, _DAT_1f80018e != 0)) {
        _DAT_1f80018e = 0x10;
        halt_baddata();
      }
    }
    else if (((_DAT_1f800184 == param_2) &&
             (func_0x0010c7f8(param_1,param_2,*(undefined4 *)(param_2 + 0xc4)),
             *(short *)(param_2 + 0x72) != 0)) &&
            ((iVar1 = func_0x0010ce50(param_1,*(undefined4 *)(param_2 + 0xd0),100,0x28), iVar1 == 2
             || (iVar1 = func_0x0010ce50(param_1,*(undefined4 *)(param_2 + 0xd8),100,0xffff8078),
                -1 < iVar1)))) {
      param_1[0x2b] = (char)(_DAT_1f80009c >> 4);
      func_0x00022d08(param_1,param_2,1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

