
void FUN_80019454(void)

{
  code *pcVar1;
  undefined4 *unaff_s0;
  int unaff_s1;
  
  do {
    pcVar1 = (code *)*unaff_s0;
    unaff_s0 = unaff_s0 + 1;
    unaff_s1 = unaff_s1 + -1;
    (*pcVar1)();
  } while (unaff_s1 != 0);
  return;
}

