// A09_ScrollPanEntity - Scroll/pan entity: slide timer with wrap-around

/* WARNING: Control flow encountered bad instruction data */

void A09_ScrollPanEntity(int param_1)

{
  u8 bVar1;
  u16 uVar2;
  u16 *puVar3;
  int iVar4;
  u16 *puVar5;
  
  bVar1 = param_1->state;
  puVar5 = param_1->angle_offset;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        Entity_Dealloc(param_1);
        return;
      }
      goto LAB_08013e8c;
    }
    iVar4 = 0;
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1->state = 1;
    puVar3 = puVar5;
    do {
      iVar4 = iVar4 + 1;
      uVar2 = Math_Random();
      *puVar3 = (uVar2 & 0xfff) + 800;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 0x1c);
    param_1->sprite_x = 0x4000;
    *(s32 *)(param_1 + 0x50) = 0x3c;
  }
  iVar4 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar4 + -1;
  if (iVar4 == 0) {
    param_1->state = 2;
  }
LAB_08013e8c:
  param_1->flags = 1;
  iVar4 = 0;
  do {
    uVar2 = *puVar5;
    *puVar5 = uVar2 - 0x66;
    if ((int)((uint)(u16)(uVar2 - 0x66) << 0x10) < 0) {
      if (param_1->state == '\x01') {
        uVar2 = Math_Random();
        *puVar5 = (uVar2 & 0xfff) + 800;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *puVar5 = 0;
    }
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 0x1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

