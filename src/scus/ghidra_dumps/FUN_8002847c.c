
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x800285d8) */
/* WARNING: Removing unreachable block (ram,0x800285c0) */
/* WARNING: Removing unreachable block (ram,0x800285d0) */

void FUN_8002847c(void)

{
  int in_at;
  int in_v1;
  undefined1 *unaff_retaddr;
  undefined8 in_f0_1;
  undefined1 auStackX_0 [16];
  
  trap(0x2c00);
  trap(0xfd400);
  if (in_v1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_retaddr != auStackX_0) {
    trap(0x2800);
    trap(0xfd800);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_at != 0) {
    *(undefined8 *)((int)unaff_retaddr * 2 & 0xfffffff0) = in_f0_1;
    getCopReg(2,0xd);
  }
  copFunction(2,0x1ff000d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

