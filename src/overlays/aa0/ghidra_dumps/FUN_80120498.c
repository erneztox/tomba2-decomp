// FUN_80120498

/* WARNING: Control flow encountered bad instruction data */

void FUN_80120498(void)

{
  undefined2 uVar1;
  int in_v0;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_s0;
  undefined1 *unaff_s1;
  
  iVar3 = 0;
  iVar2 = unaff_s0;
  if (in_v0 != 0) {
    do {
      iVar4 = *(int *)(iVar2 + 0xc0);
      if (*(short *)(iVar4 + 8) < 0x540) {
        *(short *)(iVar4 + 8) = *(short *)(iVar4 + 8) + 0x40;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < (int)(uint)*(byte *)(unaff_s0 + 8));
  }
  if (DAT_800bf9de != '\t') {
    *(undefined2 *)(unaff_s0 + 0x56) = *(undefined2 *)(unaff_s1 + 10);
    *(undefined2 *)(unaff_s0 + 0x2e) = *(undefined2 *)(unaff_s1 + 0x2c);
    *(undefined2 *)(unaff_s0 + 0x32) = *(undefined2 *)(unaff_s1 + 0x30);
    uVar1 = *(undefined2 *)(unaff_s1 + 0x34);
    *(undefined1 *)(unaff_s0 + 1) = 1;
    *(undefined2 *)(unaff_s0 + 0x36) = uVar1;
    func_0x80051c8c();
    return;
  }
  *(undefined2 *)(unaff_s0 + 0x40) = 8;
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  *(undefined1 *)(unaff_s0 + 0x5e) = 0;
  *(char *)(unaff_s0 + 4) = *(char *)(unaff_s0 + 5) + '\x01';
  *(undefined2 *)(unaff_s0 + 0x32) = 0x88;
  *(undefined1 *)(unaff_s0 + 3) = 0;
  iVar2 = FUN_8013a730();
  *(int *)(unaff_s0 + 0x10) = iVar2;
  *(short *)(unaff_s1 + 0x40) = (short)(iVar2 - 1U);
  if ((iVar2 - 1U & 0xffff) == 0) {
    *unaff_s1 = 2;
    unaff_s1[6] = unaff_s1[6] + '\x01';
  }
  FUN_8013b024();
  uVar1 = func_0x800518fc();
  unaff_s1[0x29] = 0;
  unaff_s1[0x2b] = 0;
  *(undefined2 *)(unaff_s0 + 6) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

