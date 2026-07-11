// CRD_AnimCollect (CRD_AnimCollect) - Card collect/remove animation

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_AnimCollect(int param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  s32 bVar5;
  short *psVar6;
  short *psVar7;
  s16 local_38;
  short local_36;
  s16 local_34;
  s16 local_32;
  u8 local_30;
  u8 local_2f;
  s16 local_2e;
  s16 local_28;
  s16 local_26;
  s16 local_24;
  s16 local_22;
  
  puVar1 = g_OrderingTable;
  local_34 = 0x140;
  local_32 = 0xf0;
  local_38 = 0;
  g_OrderingTable = g_OrderingTable + 3;
  local_36 = (u16)DAT_1f800135 << 8;
  OT_DrawRectSprite(puVar1,&local_38);
  iVar3 = g_OrderingTableEnd;
  *puVar1 = g_OrderingTableEnd->script_ptr | 0x2000000;
  iVar3->script_ptr = puVar1;
  psVar7 = *(short **)(param_1 + 8);
  if (param_1->rot_y != 0) {
    sVar2 = param_1->rot_z + 1;
    param_1->rot_z = sVar2;
    if (8 < sVar2) {
      param_1->rot_z = 8;
    }
    if (param_1->rot_y < param_1->rot_x) {
      iVar3 = (uint)param_1->rot_y + (uint)param_1->rot_z;
      param_1->rot_y = (short)iVar3;
      if ((int)param_1->rot_x <= iVar3 * 0x10000 >> 0x10) {
        cVar4 = param_1->sub_anim_id + -1;
        param_1->sub_anim_id = cVar4;
        if (((_DAT_800ecf54 & 0x10) != 0) && (cVar4 != '\0')) {
          Audio_PlaySoundEffect(0x15,0,0);
          _DAT_800bf4ee = 0x20;
          _DAT_800bf4ec = 0x50;
          DAT_800bf4ea = param_1->sub_anim_id + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_00003040:
        param_1->rot_x = 0;
        param_1->rot_y = 0;
      }
    }
    else {
      iVar3 = (uint)param_1->rot_y - (uint)param_1->rot_z;
      param_1->rot_y = (short)iVar3;
      if (iVar3 * 0x10000 >> 0x10 <= (int)param_1->rot_x) {
        param_1->sub_anim_id = param_1->sub_anim_id + '\x01';
        if (((_DAT_800ecf54 & 0x40) != 0) && ((int)(uint)param_1->sub_anim_id < *psVar7 + -1))
        {
          Audio_PlaySoundEffect(0x15,0,0);
          DAT_800bf4ea = param_1->sub_anim_id;
          _DAT_800bf4ec = 0x20;
          _DAT_800bf4ee = 0x50;
          halt_baddata();
        }
        goto LAB_00003040;
      }
    }
    sVar2 = param_1->rot_y;
    if (param_1->rot_y != 0) {
      iVar3 = (int)*psVar7 - (uint)*(u8 *)(param_1 + 0x52);
      psVar6 = psVar7 + (uint)*(u8 *)(param_1 + 0x52) * 0x1e + 2;
      puVar1 = g_OrderingTable;
      if (3 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto joined_r0x000030cc;
    }
  }
  iVar3 = (int)*psVar7 - (uint)param_1->sub_anim_id;
  psVar6 = psVar7 + (uint)param_1->sub_anim_id * 0x1e + 2;
  sVar2 = 0x50;
  puVar1 = g_OrderingTable;
  if (2 < iVar3) {
    iVar3 = 3;
  }
joined_r0x000030cc:
  while (iVar3 = iVar3 + -1, iVar3 != -1) {
    bVar5 = true;
    if (param_1->rot_y == 0) {
      bVar5 = psVar6 != psVar7 + (uint)param_1->sub_anim_id * 0x1e + 2;
    }
    g_OrderingTable = puVar1;
    func_0x0018c790(0x20,(int)sVar2,bVar5,psVar6);
    psVar6 = psVar6 + 0x1e;
    sVar2 = sVar2 + 0x30;
    puVar1 = g_OrderingTable;
  }
  local_38 = 0x18;
  local_34 = 0x118;
  local_32 = 0x8d;
  g_OrderingTable = puVar1 + 3;
  local_36 = (u16)DAT_1f800135 * 0x100 + 0x4b;
  OT_DrawRectSprite(puVar1,&local_38);
  iVar3 = g_OrderingTableEnd;
  *puVar1 = g_OrderingTableEnd->script_ptr | 0x2000000;
  iVar3->script_ptr = puVar1;
  if (param_1->sub_anim_id != '\0') {
    local_2f = 5;
    local_30 = 0;
    local_2e = 0;
    local_22 = 0;
    local_24 = 0;
    local_28 = 0xe;
    local_26 = 0x62;
    GPU_SpriteRender(&local_28,_DAT_800174ac,_DAT_800ecf58);
  }
  if (1 < (int)((int)*psVar7 - (uint)param_1->sub_anim_id)) {
    local_2f = 5;
    local_30 = 0;
    local_2e = 0;
    local_22 = 0;
    local_24 = 0;
    local_28 = 0xe;
    local_26 = 0xc2;
    GPU_SpriteRender(&local_28,_DAT_800174b0,_DAT_800ecf58);
  }
  return;
}

