// SOP_MainUpdate (SOP_MainUpdate) - Main SOP state machine: title screen update loop, manages sub-states and CD loading

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_MainUpdate(void)

{
  ushort uVar1;
  int iVar2;
  
  if (*(short *)(_DAT_1f800138 + 0x60) == 0) {
    func_0x0002655c(0x80100400);
    func_0x0010a0e0(0x800f2418);
    func_0x0007b008();
    DAT_1f800234 = 1;
    if (DAT_800e8008 == '\0') {
      DAT_800e8008 = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800e8008 == '\x01') {
      if (DAT_800e806c == '\0') {
        func_0x0006e3b0(&DAT_800e8008,0x800e8040);
      }
      else if (DAT_800e806c == '\x01') {
        DAT_800e806c = 0;
        func_0x00075a80();
        if (DAT_800bf9b4 != '\x05') {
          func_0x0010bffc(0x800ed018);
        }
        func_0x00109fe0(0x800f2418);
        func_0x0003c048();
        if (DAT_800bf9b4 != '\x05') {
          func_0x0010c26c(0x800ed018);
        }
        DAT_1f800234 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(_DAT_1f800138 + 0x60) = *(short *)(_DAT_1f800138 + 0x60) + -1;
  uVar1 = *(ushort *)(_DAT_1f800138 + 0x52);
  if (uVar1 == 1) {
    iVar2 = func_0x0010c79c();
    if (iVar2 != 0) {
      *(short *)(_DAT_1f800138 + 0x52) = *(short *)(_DAT_1f800138 + 0x52) + 1;
    }
  }
  else if ((uVar1 < 2) && (uVar1 == 0)) {
    *(undefined2 *)(_DAT_1f800138 + 0x62) = 0;
    func_0x0001d71c(0xe);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

