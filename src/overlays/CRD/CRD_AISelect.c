// CRD_AISelect (CRD_AISelect) - AI card selection

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00001c5c) */
/* WARNING: Removing unreachable block (ram,0x00001c6c) */
/* WARNING: Removing unreachable block (ram,0x00001c7c) */
/* WARNING: Removing unreachable block (ram,0x00001cf0) */
/* WARNING: Removing unreachable block (ram,0x00001d0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_AISelect(int param_1)

{
  u8 bVar1;
  s32 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  s32 *puVar6;
  s32 *puVar7;
  u8 *puVar8;
  s32 *puVar9;
  uint uVar10;
  s32 *puVar11;
  s32 uVar12;
  s32 uVar13;
  s32 uVar14;
  s32 *puVar15;
  int iVar16;
  int iVar17;
  u8 auStack_480 [32];
  u8 local_460 [128];
  s32 local_3e0;
  u8 auStack_58 [24];
  int local_40;
  u8 local_30;
  
  local_30 = param_1->anim_id << 4;
  bVar1 = param_1->kind;
  if (bVar1 == 1) {
    func_0x0009ba90(local_30);
    *(u8 *)(param_1 + 0x43) = 0;
    param_1->kind = param_1->kind + '\x01';
  }
  else if (bVar1 < 2) {
    iVar16 = 0;
    if (bVar1 == 0) {
      iVar17 = -0x7ff41270;
      iVar4 = 0;
      do {
        Mem_Set((uint)param_1->anim_id * 900 + iVar17,0);
        Mem_Set((u8 *)((int)&local_3e0 + iVar4),0,0x3c);
        iVar17 = iVar17 + 0x3c;
        *(u8 *)((int)&local_3e0 + iVar4) = (char)iVar16;
        iVar16 = iVar16 + 1;
        *(u8 *)((int)&local_3e0 + iVar4 + 1) = 0;
        iVar4 = iVar4 + 0x3c;
      } while (iVar16 < 0xf);
      iVar16 = 0;
      *(u8 *)(param_1 + (uint)param_1->anim_id + 0x4e) = 0;
      CD_EventMain(auStack_480,0x8018a0b0,local_30 & 0xf0);
      iVar4 = GPU_CallbackDispatch(auStack_480,auStack_58);
      while( true ) {
        if (iVar4 == 0) {
          if (iVar16 < 0) {
            iVar16 = iVar16 + 0x1fff;
          }
          uVar10 = 0xf - (iVar16 >> 0xd);
          uVar5 = uVar10 & 0xff;
          iVar16 = 0;
          if (uVar5 != 0) {
            puVar8 = (u8 *)((int)&local_3e0 + 2);
            do {
              if (puVar8[-1] == '\0') {
                iVar16 = iVar16 + 1;
                puVar8[-1] = 1;
                *puVar8 = 0;
              }
              puVar8 = puVar8 + 0x3c;
            } while (iVar16 < (int)uVar5);
          }
          iVar4 = 0;
          iVar16 = param_1 + (uint)param_1->anim_id;
          *(char *)(iVar16 + 0x4e) = *(char *)(iVar16 + 0x4e) + (char)uVar10;
          puVar11 = &local_3e0;
          puVar15 = (s32 *)((uint)param_1->anim_id * 900 + -0x7ff41270);
          do {
            if (*(char *)((int)puVar11 + 1) == '\x01') {
              puVar7 = puVar11;
              puVar2 = puVar15;
              do {
                puVar9 = puVar2;
                puVar6 = puVar7;
                uVar14 = puVar6->flags;
                uVar12 = puVar6->kind;
                uVar13 = puVar6->sub_type;
                *puVar9 = *puVar6;
                puVar9->flags = uVar14;
                puVar9->kind = uVar12;
                puVar9->sub_type = uVar13;
                puVar7 = puVar6 + 4;
                puVar2 = puVar9 + 4;
              } while (puVar7 != puVar11 + 0xc);
              uVar13 = puVar6->behavior_state;
              uVar12 = puVar6->action_state;
              puVar9->state = *puVar7;
              puVar9->behavior_state = uVar13;
              puVar9->action_state = uVar12;
              puVar15 = puVar15 + 0xf;
            }
            iVar4 = iVar4 + 1;
            puVar11 = puVar11 + 0xf;
          } while (iVar4 < 0xf);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar4 = String_CompareICase(0x8018a0a0,auStack_58,0xf);
        if (iVar4 == 0) break;
        iVar16 = iVar16 + local_40;
        iVar4 = func_0x00080900(auStack_58);
      }
      iVar16 = 0;
      param_1 = param_1 + (uint)param_1->anim_id;
      *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x4e) + '\x01';
      CD_EventMain(auStack_480,0x8018a0bc,local_30,auStack_58);
      do {
        iVar4 = func_0x000808b0(auStack_480,1);
        if (iVar4 != -1) {
          iVar17 = func_0x000808c0(iVar4,0x380,0);
          if ((iVar17 != -1) && (iVar17 = func_0x000808d0(iVar4,local_460,0x80), iVar17 != -1)) {
            func_0x000808f0(iVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          func_0x000808f0(iVar4);
        }
        iVar16 = iVar16 + 1;
        if (6 < iVar16) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      } while( true );
    }
  }
  else if (bVar1 == 2) {
    iVar16 = BIOS_Syscall_B0_80080840(_DAT_800bf4b4);
    cVar3 = '\x01';
    if (iVar16 != 1) {
      iVar16 = BIOS_Syscall_B0_80080840(_DAT_800bf4b8);
      cVar3 = '\x02';
      if (iVar16 != 1) {
        iVar16 = BIOS_Syscall_B0_80080840(_DAT_800bf4bc);
        cVar3 = '\x03';
        if (iVar16 != 1) {
          iVar16 = BIOS_Syscall_B0_80080840(_DAT_800bf4c0);
          cVar3 = '\x04';
          if (iVar16 != 1) {
            DAT_800bf4db = DAT_800bf4db + '\x01';
            cVar3 = '\0';
            if (DAT_800bf4db == -1) {
              cVar3 = '\x02';
            }
          }
        }
      }
    }
    *(char *)(param_1 + 0x3e) = cVar3;
    if (cVar3 != '\0') {
      if (cVar3 != '\x01') {
        Pad_Init_2(param_1,param_1->anim_id);
        *(u8 *)(param_1 + 0x3e) = 2;
      }
      *(u8 *)(param_1 + 0x3f) = 0;
      *(u8 *)(param_1 + 0x40) = 0;
      param_1->kind = 0;
      param_1->flags = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

