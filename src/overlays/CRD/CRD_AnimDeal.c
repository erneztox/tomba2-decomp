// CRD_AnimDeal (CRD_AnimDeal) - Card deal animation

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_AnimDeal(int param_1,int param_2,uint param_3,u8 *param_4)

{
  u8 *pbVar1;
  s32 uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  s32 uVar8;
  short local_48;
  short local_46;
  s16 local_44;
  s16 local_42;
  u8 local_40;
  u8 local_3f;
  s16 local_3e;
  short local_38;
  short local_36;
  s16 local_34;
  s16 local_32;
  uint local_30;
  
  uVar8 = 0;
  if (param_3 == 1) {
    uVar8 = 6;
  }
  CD_EventMain(0x801003b8,0x8018a0dc,*param_4 + 1);
  iVar5 = (param_2 + 10) * 0x10000 >> 0x10;
  GPU_RenderSprite_V1((param_1 + 4) * 0x10000 >> 0x10,iVar5,uVar8,0x801003b8,5);
  local_30 = (uint)param_4->kind;
  sVar7 = (short)param_1;
  sVar4 = (short)param_2;
  if (local_30 == 1) {
    uVar3 = param_4->scale_y;
    CD_EventMain(0x801003b8,0x8018a0e4,(uVar3 / 0x1a5e0) % 1000,
                    uVar3 / 0x708 + (uVar3 / 0x1a5e0) * -0x3c,uVar3 / 0x1e + (uVar3 / 0x708) * -0x3c
                   );
    iVar5 = (param_1 + 0x18) * 0x10000 >> 0x10;
    GPU_RenderSprite_V1(iVar5,(param_2 + 2) * 0x10000 >> 0x10,uVar8,0x801003b8,5);
    CD_EventMain(0x801003b8,0x8018a0f4,param_4->anim_data);
    GPU_RenderSprite_V2(iVar5,(param_2 + 0x14) * 0x10000 >> 0x10,uVar8,0x801003b8,5);
    iVar5 = (param_1 + 0xb0) * 0x10000 >> 0x10;
    GPU_RenderSprite_V2(iVar5,(int)sVar4,uVar8,0x8018a0fc,5);
    CD_EventMain(0x801003b8,0x8018a104,(uint)*(u16 *)(param_4 + 0x30) % 1000,
                    (uint)*(u16 *)(param_4 + 0x32) % 1000);
    GPU_RenderSprite_V2(iVar5,(param_2 + 8) * 0x10000 >> 0x10,uVar8,0x801003b8,5);
    func_0x0018c4b4(param_4,param_3,param_1,param_2);
    if (param_4[0x27] != 0) {
      local_38 = sVar7 + 0x70;
      if (param_3 == local_30) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      local_40 = 0;
      local_3f = 5;
      local_3e = 0;
      local_32 = 0;
      local_34 = 0;
      local_36 = (short)(param_2 + 8);
      sVar6 = 0;
      GPU_SpriteRender(&local_38,_DAT_800176a0,_DAT_800ecf58,&local_40);
      CD_EventMain(0x801003b8,0x8018a10c,param_4[0x27]);
      GPU_RenderSprite_V1((param_1 + 0x7c) * 0x10000 >> 0x10,(param_2 + 2) * 0x10000 >> 0x10,uVar8,
                      0x801003b8,5);
      iVar5 = 0;
      pbVar1 = param_4;
      do {
        if ((pbVar1->alloc_flags & 0x80) != 0) {
          sVar6 = sVar6 + 1;
        }
        iVar5 = iVar5 + 1;
        pbVar1 = param_4 + iVar5;
      } while (iVar5 < 8);
      if (sVar6 != 0) {
        local_38 = sVar7 + 0x94;
        local_36 = sVar4 + 8;
        if (param_3 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        local_40 = 0;
        local_3f = 5;
        local_3e = 0;
        local_32 = 0;
        local_34 = 0;
        GPU_SpriteRender(&local_38,_DAT_80017828,_DAT_800ecf58,&local_40);
        CD_EventMain(0x801003b8,0x8018a10c,(int)sVar6);
        GPU_RenderSprite_V1((param_1 + 0xa0) * 0x10000 >> 0x10,(param_2 + 2) * 0x10000 >> 0x10,uVar8,
                        0x801003b8,5);
      }
    }
    uVar2 = String_LookupDialog(param_4[0x22],param_4[0x23]);
    GPU_RenderSprite_V2((param_1 + 0x78) * 0x10000 >> 0x10,(param_2 + 0x10) * 0x10000 >> 0x10,uVar8,
                    uVar2,5);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  GPU_RenderSprite_V1((param_1 + 0x78) * 0x10000 >> 0x10,iVar5,uVar8,0x8018a110,5);
  uVar8 = 0x40;
  local_44 = 0x108;
  local_42 = 0x20;
  if (param_3 == 1) {
    uVar8 = 0x60;
  }
  local_48 = sVar7;
  local_46 = sVar4;
  UI_DrawPanel(&local_48,uVar8,0,5);
  return;
}

