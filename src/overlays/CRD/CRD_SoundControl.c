// CRD_SoundControl (CRD_SoundControl) - Card game sound effects

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000036ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_SoundControl(char *param_1)

{
  u8 *puVar1;
  uint *puVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  u8 local_38;
  u8 local_37;
  s16 local_36;
  short local_30;
  short local_2e;
  s16 local_2c;
  s16 local_2a;
  
  iVar3 = 0x34;
  if ((param_1[0x3c] & 1U) != 0) {
    iVar3 = 0x35;
  }
  local_38 = 0;
  local_37 = 5;
  local_30 = 0x30;
  local_2e = 0x18;
  local_36 = 0;
  local_2a = 0;
  local_2c = 0;
  GPU_SpriteRender(&local_30,*(s32 *)(iVar3 * 4 + -0x7ffe8ccc),_DAT_800ecf58,&local_38);
  UI_DrawPanel(0x8018a11c,0x40,0,5);
  GPU_DrawQuad(0x4000,0x14,0x3c,5);
  GPU_DrawQuad(0x8000,0x60,0x3c,5);
  GPU_DrawQuad(0x2000,0xac,0x3c,5);
  GPU_DrawQuad(0x1000,0xf8,0x3c,5);
  GPU_RenderSprite_V2(0x1c,0x38,0x12,_DAT_800a28fc,5);
  GPU_RenderSprite_V2(0x68,0x38,0x12,_DAT_800a3a64,5);
  GPU_RenderSprite_V2(0xb4,0x38,0x12,_DAT_800a28f8,5);
  if (*param_1 != '\x01') {
    GPU_RenderSprite_V2(0x100,0x38,0x12,_DAT_800a3a64,5);
    puVar2 = g_OrderingTable;
    puVar1 = (u8 *)((int)g_OrderingTable + 3);
    g_OrderingTable = g_OrderingTable + 4;
    *puVar1 = 3;
    puVar2->flags = 0x10101;
    *(u8 *)((int)puVar2 + 7) = 0x62;
    *(s16 *)(puVar2 + 2) = _DAT_8018a124;
    *(s16 *)((int)puVar2 + 10) = _DAT_8018a126;
    *(s16 *)(puVar2 + 3) = _DAT_8018a128;
    *(s16 *)((int)puVar2 + 0xe) = _DAT_8018a12a;
    iVar3 = g_OrderingTableEnd;
    *puVar2 = g_OrderingTableEnd->script_ptr | 0x3000000;
    iVar3->script_ptr = puVar2;
    puVar2 = g_OrderingTable;
    g_OrderingTable = g_OrderingTable + 3;
    GPU_SetupDrawMode2(puVar2,0,0,0,0);
    iVar3 = g_OrderingTableEnd;
    *puVar2 = g_OrderingTableEnd->script_ptr | 0x2000000;
    iVar3->script_ptr = puVar2;
    iVar3 = 0xee;
    if ((param_1[0x3c] & 1U) != 0) {
      iVar3 = 0xef;
    }
    iVar7 = 0;
    sVar6 = 0x18;
    do {
      iVar5 = 0;
      local_30 = 0x18;
      do {
        local_38 = 0;
        sVar4 = local_30 + 0x30;
        local_37 = 6;
        local_36 = 0;
        local_2a = 0;
        local_2c = 0;
        iVar5 = iVar5 + 1;
        local_2e = sVar6;
        GPU_SpriteRender(&local_30,*(s32 *)(iVar3 * 4 + -0x7ffe8ccc),_DAT_800ecf58,&local_38);
        local_30 = sVar4;
      } while (iVar5 < 7);
      iVar7 = iVar7 + 1;
      sVar6 = sVar6 + 0x30;
    } while (iVar7 < 5);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

