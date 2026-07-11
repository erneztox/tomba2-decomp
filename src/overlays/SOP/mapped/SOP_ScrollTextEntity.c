// SOP_ScrollTextEntity (SOP_ScrollTextEntity) - Scroll/credits text entity: slide timer with wrap-around, pan effect

/* WARNING: Control flow encountered bad instruction data */

void SOP_ScrollTextEntity(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  puVar4 = (ushort *)(param_1 + 0x50);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x48) = 0x400;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + -0x20;
  uVar2 = *puVar4;
  uVar3 = uVar2 - 9;
  *puVar4 = uVar3;
  if (-1 < (int)((uint)uVar3 << 0x10)) {
    return;
  }
  *puVar4 = uVar2 + 0x4b;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

