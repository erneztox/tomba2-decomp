
void FUN_80019010(void)

{
  code *in_v0;
  int *unaff_s0;
  int unaff_s1;
  
  do {
    (*in_v0)();
    do {
      unaff_s1 = unaff_s1 + 1;
      unaff_s0 = unaff_s0 + 1;
      if (7 < unaff_s1) {
        return;
      }
      in_v0 = (code *)*unaff_s0;
    } while (in_v0 == (code *)0x0);
  } while( true );
}

