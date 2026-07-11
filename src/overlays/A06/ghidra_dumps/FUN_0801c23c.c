// FUN_0801c23c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c23c(int param_1)

{
  if (DAT_800bf816 != '\0') {
    if (DAT_800bf817 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0801c28c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)DAT_800bf817 * 4 + -0x7fef6708))();
      return;
    }
    DAT_800e806c = DAT_800e806c & 0x7f;
  }
  if (DAT_800bf871 < 6) {
    func_0x00114a18(param_1,&DAT_800e7e80);
    if (DAT_800bf816 != '\0') {
LAB_0801c438:
      *(undefined1 *)(param_1 + 0x74) = 0;
      halt_baddata();
    }
    if (_DAT_1f8000d6 < -2000) {
      *(undefined1 *)(param_1 + 0x74) = 0;
      halt_baddata();
    }
  }
  else {
    if (8 < DAT_800bf871) {
      func_0x00114c1c(param_1,&DAT_800e7e80);
      return;
    }
    *(undefined1 *)(param_1 + 0x72) = 0;
    if (*(char *)(param_1 + 3) == '\0') {
      *(undefined1 *)(param_1 + 3) = 1;
    }
    else if (*(char *)(param_1 + 3) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0x45ec < _DAT_800e7eae) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (_DAT_800e7eae < 0x396c) {
      *(undefined1 *)(param_1 + 0x72) = 3;
    }
    if ((DAT_800bf816 != '\0') || (_DAT_1f8000d6 < -2000)) goto LAB_0801c438;
  }
  *(undefined1 *)(param_1 + 0x74) = 2;
  _DAT_1f8000d6 = 0xf830;
  *(undefined2 *)(param_1 + 0x4a) = 0xf830;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

