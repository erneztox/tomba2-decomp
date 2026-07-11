// SOP_VerticalMovementEntity (SOP_VerticalMovementEntity) - Vertical movement entity: applies gravity, moves upward with velocity cap

/* WARNING: Control flow encountered bad instruction data */

undefined4 SOP_VerticalMovementEntity(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 1) == '\0') {
      func_0x00074590(7,0,0);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    }
LAB_00002998:
    sVar2 = *(short *)(param_1 + 0x4a) + 0x360;
    *(short *)(param_1 + 0x4a) = sVar2;
    if (0x3e00 < sVar2) {
      *(undefined2 *)(param_1 + 0x4a) = 0x3e00;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + -0x10;
    return 0;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x4a) = 0xd000;
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    }
  }
  else if (bVar1 == 2) goto LAB_00002998;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

