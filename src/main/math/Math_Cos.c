/**
 * @brief Fixed-point cosine function for PS1
 * @note Original address: 0x80083E80
 */
// Math_Cos

int Math_Cos(uint param_1)

{
  int iVar1;
  
  if ((int)param_1 < 0) {
    iVar1 = Math_Sin(-param_1 & 0xfff);
    iVar1 = -iVar1;
  }
  else {
    iVar1 = Math_Sin(param_1 & 0xfff);
  }
  return iVar1;
}

