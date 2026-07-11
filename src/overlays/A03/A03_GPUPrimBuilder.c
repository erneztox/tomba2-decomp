// A03_GPUPrimBuilder - GPU primitive builder: creates sprite/triangle primitives

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * A03_GPUPrimBuilder(int param_1,uint *param_2,int param_3,short *param_4,short *param_5,
                   short *param_6,short *param_7)

{
  s16 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  s32 uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  s16 local_90;
  s16 local_8e;
  s16 local_8c;
  u8 local_8a;
  u8 local_89;
  u8 local_88;
  u8 local_87;
  u8 local_86;
  s16 local_80;
  s16 local_7e;
  s16 local_7c;
  u8 local_7a;
  u8 local_79;
  u8 local_78;
  u8 local_77;
  u8 local_76;
  s16 local_70;
  s16 local_6e;
  s16 local_6c;
  u8 local_6a;
  u8 local_69;
  u8 local_68;
  u8 local_67;
  u8 local_66;
  s16 local_60;
  s16 local_5e;
  s16 local_5c;
  u8 local_5a;
  u8 local_59;
  u8 local_58;
  u8 local_57;
  u8 local_56;
  s16 local_50;
  s16 local_4e;
  s16 local_4c;
  u8 local_4a;
  u8 local_49;
  u8 local_48;
  u8 local_47;
  u8 local_46;
  u8 auStack_40->state;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (param_3 == 0) {
    _DAT_8011c0e4 = _DAT_8011c0e4 + 1;
    func_0x00084730(param_4,param_5,param_6,param_7,param_2 + 2,param_2 + 5,param_2 + 8,
                    param_2 + 0xb,auStack_40,&local_3c);
    if ((((((u16)param_2->kind < 0x140) || ((u16)param_2->behavior_state < 0x140)) ||
         ((u16)param_2->counter1 < 0x140)) || ((u16)param_2->render_flags < 0x140)) &&
       (((*(u16 *)((int)param_2 + 10) < 0xf0 || (*(u16 *)((int)param_2 + 0x16) < 0xf0)) ||
        ((*(u16 *)((int)param_2 + 0x22) < 0xf0 || (*(u16 *)((int)param_2 + 0x2e) < 0xf0))))))
    {
      func_0x000846b0(&local_38,&local_34,&local_30,&local_2c);
      iVar2 = g_OrderingTableEnd;
      iVar3 = local_34;
      if (local_34 < local_38) {
        iVar3 = local_38;
      }
      iVar4 = local_2c;
      if (local_2c < local_30) {
        iVar4 = local_30;
      }
      if (iVar4 < iVar3) {
        iVar4 = iVar3;
      }
      uVar13 = (iVar4 >> 2) + -0xe9 >> 10;
      iVar3 = ((iVar4 >> 2) >> (uVar13 & 0x1f)) + uVar13 * 0x200;
      if (0x7fb < iVar3 - 4U) {
        iVar3 = -1;
      }
      if (((-1 < local_3c) && (5 < iVar3)) && (iVar3 < 2000)) {
        if (iVar3 < 5) {
          iVar3 = 5;
        }
        *(s16 *)((int)param_2 + 0xe) = *(s16 *)(param_1 + 10);
        uVar1 = param_1->anim_timer;
        *(u8 *)((int)param_2 + 7) = 0x3c;
        *(s16 *)((int)param_2 + 0x1a) = uVar1;
        param_2->flags = (char)param_4->state;
        *(u8 *)((int)param_2 + 5) = *(u8 *)((int)param_4 + 9);
        *(char *)((int)param_2 + 6) = (char)param_4->behavior_state;
        param_2->sub_type = (char)param_4->sub_type;
        *(u8 *)((int)param_2 + 0xd) = *(u8 *)((int)param_4 + 7);
        param_2->state = (char)param_5->state;
        *(u8 *)((int)param_2 + 0x11) = *(u8 *)((int)param_5 + 9);
        *(char *)((int)param_2 + 0x12) = (char)param_5->behavior_state;
        param_2->action_state = (char)param_5->sub_type;
        *(u8 *)((int)param_2 + 0x19) = *(u8 *)((int)param_5 + 7);
        param_2->sub_action = (char)param_6->state;
        *(u8 *)((int)param_2 + 0x1d) = *(u8 *)((int)param_6 + 9);
        *(char *)((int)param_2 + 0x1e) = (char)param_6->behavior_state;
        param_2->counter2 = (char)param_6->sub_type;
        *(u8 *)((int)param_2 + 0x25) = *(u8 *)((int)param_6 + 7);
        *(char *)(param_2 + 10) = (char)param_7->state;
        *(u8 *)((int)param_2 + 0x29) = *(u8 *)((int)param_7 + 9);
        *(char *)((int)param_2 + 0x2a) = (char)param_7->behavior_state;
        *(char *)(param_2 + 0xc) = (char)param_7->sub_type;
        *(u8 *)((int)param_2 + 0x31) = *(u8 *)((int)param_7 + 7);
        if (local_38 < 0x514) {
          *(u8 *)((int)param_2 + 6) = 0;
          *(u8 *)((int)param_2 + 5) = 0;
          param_2->flags = 0;
        }
        if (local_34 < 0x514) {
          *(u8 *)((int)param_2 + 0x12) = 0;
          *(u8 *)((int)param_2 + 0x11) = 0;
          param_2->state = 0;
        }
        if (local_30 < 0x514) {
          *(u8 *)((int)param_2 + 0x1e) = 0;
          *(u8 *)((int)param_2 + 0x1d) = 0;
          param_2->sub_action = 0;
        }
        if (local_2c < 0x514) {
          *(u8 *)((int)param_2 + 0x2a) = 0;
          *(u8 *)((int)param_2 + 0x29) = 0;
          *(u8 *)(param_2 + 10) = 0;
        }
        puVar14 = (uint *)(iVar2 + iVar3 * 4);
        *param_2 = *puVar14 | 0xc000000;
        *puVar14 = (uint)param_2;
        param_2 = param_2 + 0xd;
      }
    }
    return param_2;
  }
  local_90 = (s16)((int)*param_4 + (int)*param_5 >> 1);
  local_8e = (s16)((int)param_4->flags + (int)param_5->flags >> 1);
  local_8c = (s16)((int)param_4->kind + (int)param_5->kind >> 1);
  local_8a = (u8)((int)((uint)param_4->sub_type + (uint)param_5->sub_type) >> 1);
  local_89 = (u8)
             ((int)((uint)*(u8 *)((int)param_4 + 7) + (uint)*(u8 *)((int)param_5 + 7)) >> 1);
  local_88 = (u8)((int)((uint)param_4->state + (uint)param_5->state) >> 1);
  local_87 = (u8)
             ((int)((uint)*(u8 *)((int)param_4 + 9) + (uint)*(u8 *)((int)param_5 + 9)) >> 1);
  local_86 = (u8)((int)((uint)param_4->behavior_state + (uint)param_5->behavior_state) >> 1);
  iVar18 = (int)*param_6 + (int)*param_7 >> 1;
  local_80 = (s16)iVar18;
  iVar15 = (int)param_6->flags + (int)param_7->flags >> 1;
  local_7e = (s16)iVar15;
  iVar17 = (int)param_6->kind + (int)param_7->kind >> 1;
  local_7c = (s16)iVar17;
  iVar2 = (int)((uint)param_6->sub_type + (uint)param_7->sub_type) >> 1;
  local_7a = (u8)iVar2;
  iVar3 = (int)((uint)*(u8 *)((int)param_6 + 7) + (uint)*(u8 *)((int)param_7 + 7)) >> 1;
  local_79 = (u8)iVar3;
  iVar4 = (int)((uint)param_6->state + (uint)param_7->state) >> 1;
  local_78 = (u8)iVar4;
  iVar5 = (int)((uint)*(u8 *)((int)param_6 + 9) + (uint)*(u8 *)((int)param_7 + 9)) >> 1;
  local_77 = (u8)iVar5;
  iVar6 = (int)((uint)param_6->behavior_state + (uint)param_7->behavior_state) >> 1;
  local_76 = (u8)iVar6;
  iVar16 = (int)*param_4 + (int)*param_6 >> 1;
  local_70 = (s16)iVar16;
  iVar20 = (int)param_4->flags + (int)param_6->flags >> 1;
  local_6e = (s16)iVar20;
  iVar19 = (int)param_4->kind + (int)param_6->kind >> 1;
  local_6c = (s16)iVar19;
  iVar7 = (int)((uint)param_4->sub_type + (uint)param_6->sub_type) >> 1;
  local_6a = (u8)iVar7;
  iVar8 = (int)((uint)*(u8 *)((int)param_4 + 7) + (uint)*(u8 *)((int)param_6 + 7)) >> 1;
  local_69 = (u8)iVar8;
  iVar9 = (int)((uint)param_4->state + (uint)param_6->state) >> 1;
  local_68 = (u8)iVar9;
  iVar10 = (int)((uint)*(u8 *)((int)param_4 + 9) + (uint)*(u8 *)((int)param_6 + 9)) >> 1;
  local_67 = (u8)iVar10;
  param_3 = param_3 + -1;
  iVar11 = (int)((uint)param_4->behavior_state + (uint)param_6->behavior_state) >> 1;
  local_66 = (u8)iVar11;
  local_60 = (s16)((int)*param_5 + (int)*param_7 >> 1);
  local_5e = (s16)((int)param_5->flags + (int)param_7->flags >> 1);
  local_5c = (s16)((int)param_5->kind + (int)param_7->kind >> 1);
  local_5a = (u8)((int)((uint)param_5->sub_type + (uint)param_7->sub_type) >> 1);
  local_59 = (u8)
             ((int)((uint)*(u8 *)((int)param_5 + 7) + (uint)*(u8 *)((int)param_7 + 7)) >> 1);
  local_58 = (u8)((int)((uint)param_5->state + (uint)param_7->state) >> 1);
  local_57 = (u8)
             ((int)((uint)*(u8 *)((int)param_5 + 9) + (uint)*(u8 *)((int)param_7 + 9)) >> 1);
  local_4e = (s16)(iVar15 + iVar20 >> 1);
  local_50 = (s16)(iVar18 + iVar16 >> 1);
  local_4c = (s16)(iVar17 + iVar19 >> 1);
  local_4a = (u8)(iVar2 + iVar7 >> 1);
  local_49 = (u8)(iVar3 + iVar8 >> 1);
  local_56 = (u8)((int)((uint)param_5->behavior_state + (uint)param_7->behavior_state) >> 1);
  local_48 = (u8)(iVar4 + iVar9 >> 1);
  local_47 = (u8)(iVar5 + iVar10 >> 1);
  local_46 = (u8)(iVar6 + iVar11 >> 1);
  uVar12 = func_0x0010f1a0(param_1,param_2,param_3,param_4,&local_90,&local_70,&local_50);
  uVar12 = func_0x0010f1a0(param_1,uVar12,param_3,&local_90,param_5,&local_50,&local_60);
  uVar12 = func_0x0010f1a0(param_1,uVar12,param_3,&local_70,&local_50,param_6,&local_80);
  func_0x0010f1a0(param_1,uVar12,param_3,&local_50,&local_60,&local_80,param_7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

