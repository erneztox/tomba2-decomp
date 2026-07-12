/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_8001768C at 0x8001768C
 */
// GPU_HelperC



void GPU_HelperC(void)

{
  undefined2 in_v0;
  int unaff_s0;
  int unaff_s1;
  
  do {
    *(undefined2 *)(unaff_s1 + 0x6c) = in_v0;
    *(undefined2 *)(unaff_s1 + 0x6e) = *(undefined2 *)(unaff_s0 + 0x10);
    *(undefined2 *)(unaff_s1 + 0x70) = *(undefined2 *)(unaff_s0 + 8);
    *(undefined2 *)(unaff_s1 + 0x72) = *(undefined2 *)(unaff_s0 + 8);
    *(undefined2 *)(unaff_s1 + 0x74) = *(undefined2 *)(unaff_s0 + 8);
    *(undefined2 *)(unaff_s1 + 0x76) = *(undefined2 *)(unaff_s0 + 8);
    *(undefined2 *)(unaff_s1 + 0x68) = 0x14;
    *(undefined2 *)(unaff_s1 + 0x6a) = *(undefined2 *)(unaff_s0 + 0xc);
    in_v0 = *(undefined2 *)(unaff_s0 + 0xe);
  } while( true );
}
