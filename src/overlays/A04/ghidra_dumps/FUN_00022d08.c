// FUN_00022d08

/* WARNING: Control flow encountered bad instruction data */

void FUN_00022d08(void)

{
  undefined2 uVar1;
  int in_v0;
  int iVar2;
  undefined1 *unaff_s0;
  undefined1 unaff_s1;
  int unaff_s2;
  
  if ((*(ushort *)(in_v0 + -0x1aa) & 0x10) == 0) {
    *(undefined2 *)(unaff_s0 + 0x80) = 100;
    *(undefined2 *)(unaff_s0 + 0x82) = 200;
    *(undefined2 *)(unaff_s0 + 0x84) = 0x80;
    *(undefined2 *)(unaff_s0 + 0x44) = 0;
    unaff_s0[0x46] = 0;
    *(undefined2 *)(unaff_s0 + 0x86) = 0x100;
    if ((byte)unaff_s0[3] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x00022ddc */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)unaff_s0[3] * 4 + -0x7fef5f28))();
      return;
    }
    *unaff_s0 = 1;
    unaff_s0[4] = unaff_s0[4] + '\x01';
    unaff_s0[0x29] = 0;
    unaff_s0[0x5f] = 0;
    unaff_s0[0x2b] = 0;
    unaff_s0[0x5e] = 0;
    unaff_s0[0xbf] = 0;
    *(undefined2 *)(unaff_s0 + 0x58) = 0;
    *(undefined2 *)(unaff_s0 + 0x62) = 0;
    *(undefined2 *)(unaff_s0 + 100) = 0;
    *(undefined2 *)(unaff_s0 + 0x66) = 0;
    *(undefined2 *)(unaff_s0 + 0x68) = 0;
    *(undefined2 *)(unaff_s0 + 0x6c) = 0;
    if (unaff_s0[3] == '\x04') {
      return;
    }
    *(short *)(unaff_s0 + 0x6a) = *(short *)(unaff_s2 + 0x80) + *(short *)(unaff_s0 + 0x80);
  }
  else {
    if ((unaff_s0[3] != '\0') && (iVar2 = func_0x0007a980(3,2,0), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x1c) = 0x80124394;
      *(undefined1 *)(iVar2 + 2) = 0xd;
      *(undefined1 *)(iVar2 + 3) = 0;
      *(undefined1 *)(iVar2 + 0x46) = unaff_s1;
      *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(unaff_s0 + 0x2e);
      *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(unaff_s0 + 0x32);
      uVar1 = *(undefined2 *)(unaff_s0 + 0x36);
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined2 *)(iVar2 + 0x54) = 0;
      *(undefined2 *)(iVar2 + 0x56) = 0;
      *(undefined2 *)(iVar2 + 0x58) = 0;
      *(undefined2 *)(iVar2 + 0x36) = uVar1;
    }
    unaff_s0[4] = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

