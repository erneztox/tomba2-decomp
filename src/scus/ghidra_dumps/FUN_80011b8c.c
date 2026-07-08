
/* WARNING: Control flow encountered bad instruction data */

void FUN_80011b8c(void)

{
  int iVar1;
  undefined1 auStack_28 [24];
  
  iVar1 = FUN_8001ad7c(auStack_28,DAT_800253e8);
  if (iVar1 != 0) {
    FUN_80011654(&DAT_80038460,0,0,0,0x100);
    FUN_800116cc(auStack_28,s__s_timeout__80011540 + 4);
    iVar1 = FUN_8001174c(&DAT_80038460);
    if (iVar1 != -1) {
      FUN_8001f250(*(undefined4 *)(&DAT_80038460 + DAT_80038468 * 4),0);
      FUN_8001f2cc(*(undefined4 *)(&DAT_8003846c + DAT_80038474 * 4),
                   ((int)DAT_80038490 * (int)DAT_80038492) / 2);
      iVar1 = FUN_8001174c(&DAT_80038460);
      if (iVar1 != -1) {
        FUN_800117d0(&DAT_80038460,0);
                    /* WARNING: Subroutine does not return */
        FUN_80017e4c(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(&DAT_8001003c);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

