// FUN_08017da4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017da4(int param_1)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 5) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08017dd8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6d5c))(param_1,&DAT_800e7e80);
    return;
  }
  if (*(char *)(param_1 + 6) == '\0') {
    if ((DAT_800bf818 == '\x01') && (_DAT_800bf850 == 1)) {
      *(undefined1 *)(param_1 + 6) = 1;
      *(undefined1 *)(param_1 + 0x46) = 0;
      func_0x00074590(0x17,0,0xf);
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = func_0x0007302c(param_1,*(undefined4 *)(param_1 + 200));
    if (iVar1 != 0) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      DAT_800bf818 = '\0';
    }
  }
  if (*(char *)(param_1 + 7) == '\0') {
    if (DAT_800bf818 != '\x01') {
      return;
    }
    if (_DAT_800bf850 != 2) {
      return;
    }
    *(undefined1 *)(param_1 + 7) = 1;
    *(undefined1 *)(param_1 + 0x46) = 0;
    func_0x00074590(0x17,0,0xf);
  }
  else if (*(char *)(param_1 + 7) == '\x01') {
    iVar1 = func_0x0007302c(param_1,*(undefined4 *)(param_1 + 0xcc));
    if (iVar1 != 0) {
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      DAT_800bf818 = '\0';
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

