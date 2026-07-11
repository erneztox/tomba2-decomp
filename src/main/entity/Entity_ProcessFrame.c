/**
 * @brief Entity frame processor: iterates framebuffer array at 0x801FE000
 * @note Original: func_80051E00 at 0x80051E00
 */
// Entity_ProcessFrame



void Entity_ProcessFrame(void)

{
  int in_zero;
  u8 *puVar1;
  int iVar2;
  int iVar3;
  s16 *puVar4;
  int iVar5;
  
  puVar4 = (s16 *)&DAT_801fe000;
  iVar3 = 0;
  iVar2 = -0x7fe01600;
  puVar1 = &DAT_801fe06f;
  iVar5 = *(int *)(in_zero + 0x110);
  do {
    *puVar4 = 0;
    *(int *)(puVar1 + -0x67) = iVar2;
    puVar1[-3] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x70;
    puVar4 = puVar4 + 0x38;
    iVar2 = iVar2 + 0x800;
    iVar3 = iVar3 + 1;
    *(s32 *)(iVar5 + 0x154) = 0x40000404;
    iVar5 = iVar5 + 0xc0;
  } while (iVar3 < 3);
  return;
}
