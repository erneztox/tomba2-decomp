/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80017CFC at 0x80017CFC
 */
// Sys_CopyStruct5



void Sys_CopyStruct5(void)

{
  undefined2 in_v0;
  undefined2 in_v1;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s1 + 0x6e) = in_v1;
  do {
    *(undefined2 *)(unaff_s1 + 0x68) = in_v0;
    *(undefined2 *)(unaff_s1 + 0x6a) = *(undefined2 *)(unaff_s0 + 0xc);
    *(undefined2 *)(unaff_s1 + 0x6c) = *(undefined2 *)(unaff_s0 + 0xe);
    *(undefined2 *)(unaff_s1 + 0x6e) = *(undefined2 *)(unaff_s0 + 0x10);
    *(undefined2 *)(unaff_s1 + 0x70) = *(undefined2 *)(unaff_s0 + 8);
    *(undefined2 *)(unaff_s1 + 0x72) = *(undefined2 *)(unaff_s0 + 8);
    *(undefined2 *)(unaff_s1 + 0x74) = *(undefined2 *)(unaff_s0 + 8);
    in_v0 = 0x14;
    *(undefined2 *)(unaff_s1 + 0x76) = *(undefined2 *)(unaff_s0 + 8);
  } while( true );
}
