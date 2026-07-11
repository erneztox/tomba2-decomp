// FUN_80110d64

int FUN_80110d64(void)

{
  int in_v1;
  
  if (in_v1 < 0x3a14) {
    return -0x1bcc;
  }
  if (in_v1 < 0x3c69) {
    return ((in_v1 + -0x3a14) * 0x300) / 0x255 + -0x1bcc;
  }
  return -0x18cc;
}

