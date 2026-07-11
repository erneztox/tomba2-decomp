// FUN_8012e858

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x8012e868) overlaps instruction at (ram,0x8012e864)
    */

void FUN_8012e858(int param_1,int param_2)

{
  int in_v1;
  int in_t2;
  
  if (in_v1 < param_1) {
    trap(0);
  }
  if ((param_2 != 0) && (in_v1 < param_1)) {
    trap(0);
  }
  if (in_t2 == 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

