// FUN_00026a68

/* WARNING: Control flow encountered bad instruction data */

void FUN_00026a68(void)

{
  undefined1 uVar1;
  int in_v0;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_s1;
  
  iVar4 = 0;
  iVar2 = unaff_s1;
  if (0x2c60 < *(short *)(in_v0 + 0x160)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    if (*(int *)(iVar2 + 0xc) == 0) goto LAB_00026ab0;
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar4 < 5);
  iVar4 = -1;
LAB_00026ab0:
  if (-1 < iVar4) {
    iVar2 = func_0x00072ddc();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0x8012eec8;
      uVar1 = *(undefined1 *)(unaff_s1 + 3);
      *(char *)(iVar2 + 0x5e) = (char)iVar4;
      *(undefined1 *)(iVar2 + 3) = uVar1;
    }
    *(int *)(unaff_s1 + iVar4 * 4 + 0xc) = iVar2;
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x47) = *(undefined1 *)(*(short *)(unaff_s1 + 10) + -0x7feb9df0);
      uVar3 = *(ushort *)(unaff_s1 + 10) + 1 & 0xf;
      *(short *)(unaff_s1 + 10) = (short)uVar3;
      if (*(char *)(iVar2 + 0x47) == *(char *)(uVar3 + 0x80146210)) {
        *(undefined2 *)(unaff_s1 + 8) = 0x78;
        halt_baddata();
      }
      if (*(char *)(iVar2 + 0x47) == '\0') {
        *(undefined2 *)(unaff_s1 + 8) = 0xf0;
        halt_baddata();
      }
      *(undefined2 *)(unaff_s1 + 8) = 0x5a;
      halt_baddata();
    }
  }
  *(undefined2 *)(unaff_s1 + 8) = 0x96;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

