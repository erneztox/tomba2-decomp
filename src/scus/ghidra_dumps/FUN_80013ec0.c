
void FUN_80013ec0(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  uint *unaff_s0;
  int unaff_s1;
  
  do {
    unaff_s1 = unaff_s1 + -1;
    puVar1 = unaff_s0 + 1;
    *(undefined1 *)((int)unaff_s0 + 3) = 0;
    *unaff_s0 = *unaff_s0 & 0xff000000 | (uint)puVar1 & param_2;
    unaff_s0 = puVar1;
  } while (unaff_s1 != 0);
  DAT_800255d4 = 0x40255c0;
  *puVar1 = 0x255d4;
  return;
}

