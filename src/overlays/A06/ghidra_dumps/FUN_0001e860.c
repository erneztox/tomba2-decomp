// FUN_0001e860

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0001e860(void)

{
  int in_v0;
  undefined1 unaff_s2;
  
  iRam800bf844 = in_v0;
  if (in_v0 != 0) {
    *(undefined2 *)(in_v0 + 0x60) = 0xffe0;
    *(undefined2 *)(in_v0 + 0x62) = 0x30;
    *(undefined1 *)(in_v0 + 0x5e) = unaff_s2;
    *(byte *)(in_v0 + 0x5f) = *(byte *)(in_v0 + 0x5f) | 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

