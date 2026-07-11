// FUN_80116214

void FUN_80116214(void)

{
  char cVar1;
  int iVar2;
  int unaff_s0;
  
  iVar2 = func_0x8005308c();
  if (iVar2 != 0) {
    func_0x80042354(1,1);
    func_0x80040d68();
    *(undefined1 *)(unaff_s0 + 0x70) = 2;
    cVar1 = *(char *)(unaff_s0 + 5) + '\x01';
    *(char *)(unaff_s0 + 5) = cVar1;
    *(char *)(unaff_s0 + 5) = cVar1;
    FUN_801282dc();
    return;
  }
  func_0x80041098();
  func_0x8004190c();
  return;
}

