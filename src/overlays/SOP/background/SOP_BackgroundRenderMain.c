// SOP_BackgroundRenderMain (SOP_BackgroundRenderMain) - Background rendering main loop: iterates entities, builds display list

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 SOP_BackgroundRenderMain(void)

{
  u16 uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = g_OverlayEntity;
  uVar1 = g_OverlayEntity->rot_x;
  if (uVar1 != 1) {
    if (1 < uVar1) {
      halt_baddata();
    }
    if (uVar1 != 0) {
      halt_baddata();
    }
    g_OverlayEntity->sprite_param2 = 0;
    _DAT_8010d394 = 0xe0;
    iVar3->rot_x = 1;
    _DAT_8010d398 = 0;
  }
  iVar3 = _DAT_8010d394 + -1;
  if (_DAT_8010d394 + 0x30b < -0x10) {
    _DAT_8010d394 = iVar3;
    g_OverlayEntity->rot_x = g_OverlayEntity->rot_x + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = iVar3 + _DAT_8010d398 * 0x1e;
  if (iVar5 < -0x10) {
    iVar5 = iVar3 + (_DAT_8010d398 + 1) * 0x1e;
    _DAT_8010d398 = _DAT_8010d398 + 1;
  }
  iVar6 = 0;
  _DAT_8010d394 = iVar3;
  while ((*(int *)((_DAT_8010d398 + iVar6) * 4 + -0x7fef2ce0) != 0 && (iVar5 < 0xf0))) {
    iVar3 = String_Length();
    sVar4 = (short)iVar5;
    iVar5 = iVar5 + 0x1e;
    iVar2 = _DAT_8010d398 + iVar6;
    iVar6 = iVar6 + 1;
    GPU_RenderSprite_V1((0xa0 - ((iVar3 << 3) >> 1)) * 0x10000 >> 0x10,(int)sVar4,0,
                    *(s32 *)(iVar2 * 4 + -0x7fef2ce0),1);
    if (0xc < iVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0;
}

