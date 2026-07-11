/**
 * @brief Entity frame loop: iterates framebuffer array at 0x801FE000, processes 2-u8 headers
 * @note Original: func_80051E60 at 0x80051E60
 */
// Entity_FrameLoop



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Entity_FrameLoop(void)

{
  s16 *psVar1;
  s32 uVar2;
  
  _g_CurrentEntity = (s16 *)&DAT_801fe000;
  do {
    if (*_g_CurrentEntity == 2) {
LAB_80051ed0:
      psVar1 = _g_CurrentEntity + 2;
      *_g_CurrentEntity = 4;
      BIOS_Syscall_B0_80080880(*(s32 *)psVar1);
    }
    else if (*_g_CurrentEntity == 3) {
      BIOS_Syscall0();
      uVar2 = BIOS_Syscall_B0_80080860(*(s32 *)(_g_CurrentEntity + 6),*(s32 *)(_g_CurrentEntity + 4),
                           *(s32 *)(_g_CurrentEntity + 8));
      *(s32 *)(_g_CurrentEntity + 2) = uVar2;
      BIOS_Syscall0_2();
      goto LAB_80051ed0;
    }
    _g_CurrentEntity = _g_CurrentEntity + 0x38;
    if ((s16 *)0x801fe14f < _g_CurrentEntity) {
      return;
    }
  } while( true );
}
