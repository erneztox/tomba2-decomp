// FUN_000031c4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000031c4(int param_1)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  
  if (((uint)DAT_800ecf53 + (uint)DAT_800ecf52 != 0) && (_DAT_800ecf48 == 7)) {
    bVar2 = DAT_800ecf51;
    if (DAT_800ecf51 < DAT_800ecf50) {
      bVar2 = DAT_800ecf50;
    }
    *(byte *)(param_1 + 0x14b) = bVar2;
    uVar1 = func_0x00085690((int)(char)DAT_800ecf53,(int)(char)DAT_800ecf52);
    *(char *)(param_1 + 0x147) = (char)((uVar1 & 0xfff) >> 5);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = _DAT_800ecf54 & 0xf0;
  if (uVar3 == 0x40) {
    *(undefined1 *)(param_1 + 0x147) = 0x20;
  }
  else if (uVar3 < 0x41) {
    if (uVar3 == 0x20) {
      *(undefined1 *)(param_1 + 0x147) = 0;
    }
    else if (uVar3 < 0x21) {
      if (uVar3 != 0x10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x147) = 0x60;
    }
    else {
      if (uVar3 != 0x30) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x147) = 0x70;
    }
  }
  else if (uVar3 == 0x80) {
    *(undefined1 *)(param_1 + 0x147) = 0x40;
  }
  else if (uVar3 < 0x81) {
    if (uVar3 != 0x60) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x147) = 0x10;
  }
  else if (uVar3 == 0x90) {
    *(undefined1 *)(param_1 + 0x147) = 0x50;
  }
  else {
    if (uVar3 != 0xc0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x147) = 0x30;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

