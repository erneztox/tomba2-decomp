/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80017E4C at 0x80017E4C
 */
// Sys_WriteStruct11_Loop



void Sys_WriteStruct11_Loop(void)

{
  undefined1 in_v0;
  undefined2 uVar1;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined1 *)(unaff_s1 + 0x11) = in_v0;
  uVar1 = 0x2c;
  *(undefined1 *)(unaff_s1 + 0x12) = *(undefined1 *)(unaff_s0 + 0x22);
  do {
    *(undefined2 *)(unaff_s1 + 0x68) = uVar1;
    *(undefined2 *)(unaff_s1 + 0x6a) = *(undefined2 *)(unaff_s0 + 0xc);
    *(undefined2 *)(unaff_s1 + 0x6c) = *(undefined2 *)(unaff_s0 + 0xe);
    *(undefined2 *)(unaff_s1 + 0x6e) = *(undefined2 *)(unaff_s0 + 0x10);
    *(undefined2 *)(unaff_s1 + 0x70) = *(undefined2 *)(unaff_s0 + 8);
    *(undefined2 *)(unaff_s1 + 0x72) = *(undefined2 *)(unaff_s0 + 8);
    *(undefined2 *)(unaff_s1 + 0x74) = *(undefined2 *)(unaff_s0 + 8);
    uVar1 = 0x14;
    *(undefined2 *)(unaff_s1 + 0x76) = *(undefined2 *)(unaff_s0 + 8);
  } while( true );
}
