
void FUN_8003df04(void)

{
  if (DAT_800bf870 == '\x15') {
    func_0x8010be30(0x800ed018);
  }
  else if (DAT_800bf873 == '\0') {
    switch(DAT_800bf870) {
    case '\0':
      func_0x80115598(0x800ed018);
      break;
    case '\x04':
      func_0x8013f0dc(0x800ed018);
      break;
    case '\x05':
      func_0x80136f28(0x800ed018);
      break;
    case '\x06':
      func_0x80141a94(0x800ed018);
      break;
    case '\a':
      func_0x8012f938(0x800ed018);
      break;
    case '\n':
      func_0x801142ec(0x800ed018);
      break;
    case '\v':
      func_0x801141b0(0x800ed018);
      break;
    case '\r':
      func_0x80116b9c(0x800ed018);
      break;
    case '\x0f':
      func_0x80116778(0x800ed018);
    }
  }
  return;
}

