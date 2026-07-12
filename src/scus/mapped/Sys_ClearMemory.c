/**
 * @brief Memory clearing utility
 * @note Original: func_80011B8C at 0x80011B8C
 */
// Sys_ClearMemory



/* WARNING: Control flow encountered bad instruction data */

void Sys_ClearMemory(void)

{
  int iVar1;
  undefined1 auStack_28 [24];
  
  iVar1 = Sys_ClearMemory(auStack_28,DAT_800253e8);
  if (iVar1 != 0) {
    Sys_ClearMemory(&DAT_80038460,0,0,0,0x100);
    Sys_ClearMemory(auStack_28,s__s_timeout__80011540 + 4);
    iVar1 = Sys_ClearMemory(&DAT_80038460);
    if (iVar1 != -1) {
      Sys_ClearMemory(*(undefined4 *)(&DAT_80038460 + DAT_80038468 * 4),0);
      Sys_ClearMemory(*(undefined4 *)(&DAT_8003846c + DAT_80038474 * 4),
                   ((int)DAT_80038490 * (int)DAT_80038492) / 2);
      iVar1 = Sys_ClearMemory(&DAT_80038460);
      if (iVar1 != -1) {
        Sys_ClearMemory(&DAT_80038460,0);
                    /* WARNING: Subroutine does not return */
        Sys_ClearMemory(0);
      }
                    /* WARNING: Subroutine does not return */
      Sys_ClearMemory(&DAT_8001003c);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
