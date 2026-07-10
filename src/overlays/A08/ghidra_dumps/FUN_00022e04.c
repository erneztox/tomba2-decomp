// FUN_00022e04

/* WARNING: Control flow encountered bad instruction data */

void FUN_00022e04(void)

{
  byte bVar1;
  uint in_v1;
  int unaff_s0;
  uint uVar2;
  uint unaff_s2;
  
  if (unaff_s2 == 0) {
    bVar1 = *(byte *)(unaff_s0 + 5);
    if (bVar1 == 0) {
      func_0x0007778c();
      if ((DAT_800bfa46 & 0x40) == 0) goto LAB_00022f78;
      FUN_00040d68();
      *(undefined1 *)(unaff_s0 + 0x70) = 2;
      *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
    }
    else if (bVar1 == in_v1) {
      *(byte *)(unaff_s0 + 1) = bVar1;
      func_0x00077e7c();
      func_0x00041098();
      if (*(char *)(unaff_s0 + 0x70) == -1) {
        *(byte *)(unaff_s0 + 3) = bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_00022f78:
      func_0x0004190c();
      if (*(char *)(unaff_s0 + 1) != '\0') {
        func_0x000518fc();
      }
      *(undefined1 *)(unaff_s0 + 0x2b) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (unaff_s2 != in_v1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar1 = *(byte *)(unaff_s0 + 5);
    uVar2 = (uint)bVar1;
    if (uVar2 == 0) {
      func_0x0007778c();
      if (*(char *)(unaff_s0 + 0x2b) != '\x03') goto LAB_00022f78;
      func_0x00042354(1,3);
      FUN_00040d68();
      *(undefined1 *)(unaff_s0 + 0x70) = 2;
      *(undefined1 *)(unaff_s0 + 6) = 0;
      *(char *)(unaff_s0 + 5) = (char)unaff_s2;
    }
    else if (uVar2 == unaff_s2) {
      *(byte *)(unaff_s0 + 1) = bVar1;
      func_0x00077e7c();
      func_0x00041098();
      if (*(char *)(unaff_s0 + 0x70) != -1) goto LAB_00022f78;
      if (*(byte *)(unaff_s0 + 6) == 0) {
        *(undefined1 *)(unaff_s0 + 0x7a) = 0x13;
        FUN_00040d68();
        *(undefined1 *)(unaff_s0 + 0x70) = 2;
        *(byte *)(unaff_s0 + 6) = bVar1;
      }
      else if (*(byte *)(unaff_s0 + 6) == uVar2) {
        *(undefined1 *)(unaff_s0 + 5) = 0;
        goto LAB_00022f78;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

