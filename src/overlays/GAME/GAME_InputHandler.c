// GAME_InputHandler (GAME_InputHandler) - Input/flag handler: reads _DAT_800e7e68 buttons, triggers transitions

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_InputHandler(void)

{
  char *pcVar1;
  
  func_0x0007eae4();
  if ((_DAT_800e7e68 & 0x10) == 0) {
    if ((_DAT_800e7e68 & 0x40) == 0) {
      if ((_DAT_800e7e68 & 0x2008) != 0) {
        *(undefined1 *)(_DAT_1f800138 + 0x6b) = 2;
        func_0x00074bf8(1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((_DAT_800e7e68 & 0x4000) != 0) {
        *(byte *)(_DAT_1f800138 + 0x6b) = DAT_800bf808 + 3;
        pcVar1 = (char *)(_DAT_1f800138 + 0x6b);
        *(undefined2 *)(_DAT_1f800138 + 0x50) = 0;
        if (*pcVar1 == '\x03') {
          DAT_800bf808 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*pcVar1 == '\x04') {
          DAT_800bf808 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        DAT_800bf808 = 1;
        func_0x0005082c(0,0,0);
        DAT_1f800136 = 2;
        func_0x00074590(0x11,0,0);
      }
    }
    else if (DAT_800bf808 < 2) {
      DAT_800bf808 = DAT_800bf808 + 1;
      halt_baddata();
    }
  }
  else if (DAT_800bf808 != 0) {
    DAT_800bf808 = DAT_800bf808 - 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

