/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80018FF0 at 0x80018FF0
 */
// GPU_CallCallbacks2



void GPU_CallCallbacks2(void)

{
  int in_v0;
  int unaff_s0;
  undefined4 *puVar1;
  int unaff_s1;
  
  puVar1 = (undefined4 *)(unaff_s0 + 0x6794);
  DAT_800267b4 = in_v0 + 1;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    unaff_s1 = unaff_s1 + 1;
    puVar1 = puVar1 + 1;
  } while (unaff_s1 < 8);
  return;
}
