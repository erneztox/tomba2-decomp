/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_8001952C at 0x8001952C
 */
// Sys_InitTable8D0



void Sys_InitTable8D0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4;
  do {
    iVar1 = Sys_InitTable8D0();
    if (iVar1 == 1) {
      DAT_800268d0 = 0x80018df8;
      DAT_800268d4 = 0x80018e20;
      DAT_80026838 = 0x80018e48;
      DAT_8002683c = 0;
      Sys_InitTable8D0();
      return;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
                    /* WARNING: Subroutine does not return */
  Sys_InitTable8D0(&DAT_80010554);
}
