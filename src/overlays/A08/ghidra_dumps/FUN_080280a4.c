// FUN_080280a4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080280a4(void)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(_DAT_1f800138 + 0x50);
  if (uVar1 == 1) {
    func_0x0014095c();
  }
  else if (uVar1 < 2) {
    if (uVar1 == 0) {
      func_0x00140834();
    }
  }
  else {
    if (uVar1 == 2) {
      func_0x00074590(0x11,0,0);
      *(undefined1 *)(_DAT_1f800138 + 0x6b) = 0xb;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (uVar1 == 3) {
      func_0x00074590(0x11,0,0);
      *(undefined1 *)(_DAT_1f800138 + 0x6b) = 2;
      *(undefined2 *)(_DAT_1f800138 + 0x50) = 0;
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

