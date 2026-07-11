// FUN_0801bad4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801bad4(int param_1)

{
  int iVar1;
  
  if ((DAT_800bf816 != '\0') && (iVar1 = func_0x00113ad8(param_1,&DAT_800e7e80), iVar1 != 0)) {
    return;
  }
  *(undefined2 *)(param_1 + 0x26) = 0xfe70;
  *(undefined2 *)(param_1 + 0x56) = 0;
  if (DAT_800bf871 < 9) {
    func_0x00113ddc(param_1,&DAT_800e7e80);
    if (DAT_800bf816 != '\0') {
LAB_0801bbd8:
      *(undefined1 *)(param_1 + 0x74) = 0;
      return;
    }
    if (_DAT_1f8000d6 < -0x1130) {
      *(undefined1 *)(param_1 + 0x74) = 0;
      halt_baddata();
    }
  }
  else {
    if (DAT_800bf871 < 0x10) {
      func_0x00114118(param_1,&DAT_800e7e80);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x001144d4(param_1,&DAT_800e7e80);
    if ((DAT_800bf816 != '\0') || (_DAT_1f8000d6 < -0x1130)) goto LAB_0801bbd8;
  }
  *(undefined1 *)(param_1 + 0x74) = 2;
  _DAT_1f8000d6 = 0xeed0;
  *(undefined2 *)(param_1 + 0x4a) = 0xeed0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

