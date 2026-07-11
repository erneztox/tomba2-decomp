// FUN_0801aeb0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801aeb0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = func_0x001176ec(_DAT_800e7eea & 0xf0,DAT_800bf817);
  if (iVar2 == 4) {
    func_0x001138f0(param_1,*(undefined4 *)(param_1 + 0xcc));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar2 < 5) {
    if (iVar2 == 3) {
      func_0x001138f0(param_1,*(undefined4 *)(param_1 + 0xc4));
      halt_baddata();
    }
  }
  else {
    if (iVar2 == 5) {
      func_0x001138f0(param_1,*(undefined4 *)(param_1 + 0xd4));
      halt_baddata();
    }
    if (iVar2 == 6) {
      func_0x001138f0(param_1,*(undefined4 *)(param_1 + 0xdc));
      *(undefined2 *)(*(int *)(param_1 + 0xe0) + 10) =
           *(undefined2 *)(*(int *)(param_1 + 0xdc) + 10);
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 1) {
        if (DAT_800bf80f != '\0') {
          func_0x00051b04(*(int *)(param_1 + 0xc4),0xc,
                          *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38));
          func_0x00051b04(*(int *)(param_1 + 0xcc),0xc,
                          *(undefined2 *)(*(int *)(param_1 + 0xcc) + 0x38));
          func_0x00051b04(*(int *)(param_1 + 0xd4),0xc,
                          *(undefined2 *)(*(int *)(param_1 + 0xd4) + 0x38));
          func_0x00051b04(*(int *)(param_1 + 0xdc),0xc,
                          *(undefined2 *)(*(int *)(param_1 + 0xdc) + 0x38));
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        }
      }
      else if ((((bVar1 < 2) && (bVar1 == 0)) && (DAT_800bf816 != '\0')) && (DAT_800bf80f == '\0'))
      {
        *(undefined1 *)(param_1 + 6) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x40) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xcc) + 0x40) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x40) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

