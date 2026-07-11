// CRD_InputHandler (CRD_InputHandler) - Card game input handler

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_InputHandler(int param_1)

{
  u8 bVar1;
  char cVar2;
  u8 bVar3;
  int iVar4;
  s32 *puVar5;
  s32 *puVar6;
  u8 *pbVar7;
  u8 *pbVar8;
  s32 *puVar9;
  s32 uVar10;
  s32 uVar11;
  s32 uVar12;
  
  iVar4 = BIOS_Syscall_B0_80080840(_DAT_800bf4b4);
  cVar2 = '\x01';
  if (iVar4 != 1) {
    iVar4 = BIOS_Syscall_B0_80080840(_DAT_800bf4b8);
    cVar2 = '\x02';
    if (iVar4 != 1) {
      iVar4 = BIOS_Syscall_B0_80080840(_DAT_800bf4bc);
      cVar2 = '\x03';
      if (iVar4 != 1) {
        iVar4 = BIOS_Syscall_B0_80080840(_DAT_800bf4c0);
        cVar2 = '\0';
        if (iVar4 == 1) {
          cVar2 = '\x04';
        }
      }
    }
  }
  *(char *)(param_1 + 0x3e) = cVar2;
  if (cVar2 != '\0') {
    func_0x000808f0(*(s32 *)(param_1 + 4));
    if ((*(char *)(param_1 + 0x3e) == '\x01') &&
       (pbVar7 = *(u8 **)(param_1 + 0x14), pbVar7[0x5fe] == 3)) {
      bVar3 = 0;
      iVar4 = 0x5fe;
      pbVar8 = pbVar7;
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        iVar4 = iVar4 + -1;
        bVar3 = bVar3 ^ bVar1;
      } while (-1 < iVar4);
      if (pbVar7[0x5ff] == bVar3) {
        puVar5 = (s32 *)&g_GameState;
        puVar9 = param_1->script_ptr;
        g_ScreenBrightness = g_GameState;
        _DAT_1f800278 = _DAT_800bfe56;
        if (((uint)puVar9 & 3) != 0) {
          puVar6 = puVar9 + 0x17c;
          do {
            uVar10 = puVar9->flags;
            uVar11 = puVar9->kind;
            uVar12 = puVar9->sub_type;
            *puVar5 = *puVar9;
            puVar5->flags = uVar10;
            puVar5->kind = uVar11;
            puVar5->sub_type = uVar12;
            puVar9 = puVar9 + 4;
            puVar5 = puVar5 + 4;
          } while (puVar9 != puVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar6 = puVar9 + 0x17c;
        do {
          uVar10 = puVar9->flags;
          uVar11 = puVar9->kind;
          uVar12 = puVar9->sub_type;
          *puVar5 = *puVar9;
          puVar5->flags = uVar10;
          puVar5->kind = uVar11;
          puVar5->sub_type = uVar12;
          puVar9 = puVar9 + 4;
          puVar5 = puVar5 + 4;
        } while (puVar9 != puVar6);
        *puVar5 = *puVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    cVar2 = -1;
    if (param_1->anim_id != -1) {
      cVar2 = param_1->anim_id << 4;
    }
    if ((*(char *)(param_1 + 0x3e) == '\x04') && (cVar2 != -1)) {
      BIOS_Syscall_B0_80080840(_DAT_800bf4c4);
      BIOS_Syscall_B0_80080840(_DAT_800bf4c8);
      BIOS_Syscall_B0_80080840(_DAT_800bf4cc);
      BIOS_Syscall_B0_80080840(_DAT_800bf4d0);
      func_0x0009bab0(cVar2);
      iVar4 = BIOS_Syscall_B0_80080840(_DAT_800bf4c4);
      if ((((iVar4 != 1) && (iVar4 = BIOS_Syscall_B0_80080840(_DAT_800bf4c8), iVar4 != 1)) &&
          (iVar4 = BIOS_Syscall_B0_80080840(_DAT_800bf4cc), iVar4 != 1)) &&
         (iVar4 = BIOS_Syscall_B0_80080840(_DAT_800bf4d0), iVar4 != 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      *(u8 *)(param_1 + 0x5a) = 0x32;
    }
    bVar3 = *(char *)(param_1 + 0x5a) + 1;
    *(u8 *)(param_1 + 0x5a) = bVar3;
    if (bVar3 < 0x33) {
      *(u8 *)(param_1 + 0x3e) = 0;
      *(u8 *)(param_1 + 0x51) = 0;
      param_1->kind = 0;
      *(u8 *)(param_1 + 0x3f) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(u8 *)(param_1 + 0x3e) = 2;
    *(u8 *)(param_1 + 0x3f) = 0;
    *(u8 *)(param_1 + 0x40) = 0;
  }
  return;
}

