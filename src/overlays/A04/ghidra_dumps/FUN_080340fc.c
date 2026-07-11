// FUN_080340fc

/* WARNING: Control flow encountered bad instruction data */

void FUN_080340fc(void)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  int unaff_s0;
  
  iVar2 = func_0x00049250();
  if (iVar2 == 0) {
    func_0x0012f41c();
    *(undefined1 *)(unaff_s0 + 5) = 1;
    *(undefined1 *)(unaff_s0 + 6) = 0;
    *(undefined2 *)(unaff_s0 + 0x72) = 0;
  }
  else if (*(char *)(unaff_s0 + 6) == '\0') {
    func_0x0012f298();
  }
  else if (*(char *)(unaff_s0 + 6) == '\x01') {
    if (((*(char *)(unaff_s0 + 1) != '\0') && (*(short *)(unaff_s0 + 0x42) != 0)) &&
       (*(short *)(*(int *)(unaff_s0 + 0x38) + 4) == 1)) {
      uVar3 = (ushort)DAT_1f800207;
      *(undefined2 *)(unaff_s0 + 0x42) = 0;
      if ((*(short *)(unaff_s0 + 0x74) <= (short)uVar3) &&
         ((short)uVar3 <= *(short *)(unaff_s0 + 0x76))) {
        func_0x00074590(0x90,0,0);
      }
    }
    sVar1 = *(short *)(unaff_s0 + 0x40);
    *(short *)(unaff_s0 + 0x40) = sVar1 + -1;
    if (sVar1 == 1) {
      *(undefined1 *)(unaff_s0 + 6) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

