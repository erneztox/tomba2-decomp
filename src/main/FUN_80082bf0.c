
void FUN_80082bf0(uint param_1)

{
  *DAT_800a5aa8 = param_1;
  *(char *)((param_1 >> 0x18) + 0x80100b28) = (char)param_1;
  return;
}

