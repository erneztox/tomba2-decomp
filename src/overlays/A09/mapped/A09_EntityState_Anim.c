// A09_EntityState_Anim - Entity state: plays animation, sets behavior pointer

/* WARNING: Control flow encountered bad instruction data */

undefined4 A09_EntityState_Anim(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 6) = 2;
    func_0x00040cdc(param_1,0,0x8010e3b0);
    *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((DAT_800bf809 == '\0') && (*(char *)(param_1 + 0x29) != '\0')) {
        if (DAT_800bf8e6 == '\0') {
          func_0x00040b48(0x32);
        }
        if (DAT_800bfa40 == '\0') {
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          func_0x00042354(1,4);
          DAT_800bfa40 = 1;
          halt_baddata();
        }
      }
      return 0;
    }
  }
  else if (bVar1 == 2) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x00042310();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

