/**
 * @brief Clear pending interrupts
 * @note Original: func_80011864 at 0x80011864
 */
// Sys_ClearInterrupts



void Sys_ClearInterrupts(void)

{
  undefined2 unaff_s1;
  int unaff_s3;
  undefined4 unaff_s7;
  undefined2 unaff_s8;
  
  *(undefined4 *)(unaff_s3 + 4) = unaff_s7;
  Sys_ClearInterrupts();
  *(undefined2 *)(unaff_s3 + 8) = 0x218;
  *(undefined1 *)(unaff_s3 + 0xd) = 0x80;
  *(undefined2 *)(unaff_s3 + 10) = 200;
  *(undefined1 *)(unaff_s3 + 0xc) = 0;
  *(undefined2 *)(unaff_s3 + 0x10) = unaff_s8;
  *(undefined2 *)(unaff_s3 + 0x12) = 0x20;
  *(undefined2 *)(unaff_s3 + 0xe) = unaff_s1;
  Sys_ClearInterrupts();
  Sys_ClearInterrupts(0);
                    /* WARNING: Subroutine does not return */
  Sys_ClearInterrupts(0);
}
