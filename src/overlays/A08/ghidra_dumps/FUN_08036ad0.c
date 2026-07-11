// FUN_08036ad0

/* WARNING: Control flow encountered bad instruction data */

void FUN_08036ad0(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined4 *)(param_1 + 0x1c) = 0x8012eec8;
  uVar1 = *(undefined1 *)(unaff_s1 + 3);
  *(char *)(param_1 + 0x5e) = (char)unaff_s0;
  *(undefined1 *)(param_1 + 3) = uVar1;
  *(int *)(unaff_s1 + unaff_s0 * 4 + 0xc) = param_1;
  if (param_1 == 0) {
    *(undefined2 *)(unaff_s1 + 8) = 0x96;
  }
  else {
    *(undefined1 *)(param_1 + 0x47) = *(undefined1 *)(*(short *)(unaff_s1 + 10) + -0x7feb9df0);
    uVar2 = *(ushort *)(unaff_s1 + 10) + 1 & 0xf;
    *(short *)(unaff_s1 + 10) = (short)uVar2;
    if (*(char *)(param_1 + 0x47) == *(char *)(uVar2 + 0x80146210)) {
      *(undefined2 *)(unaff_s1 + 8) = 0x78;
    }
    else if (*(char *)(param_1 + 0x47) == '\0') {
      *(undefined2 *)(unaff_s1 + 8) = 0xf0;
    }
    else {
      *(undefined2 *)(unaff_s1 + 8) = 0x5a;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

