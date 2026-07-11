// CRD_CardDraw (CRD_CardDraw) - Card drawing/sprite display

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000017bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_CardDraw(int param_1)

{
  u8 bVar1;
  int iVar2;
  int iVar3;
  s32 uVar4;
  u8 auStack_38 [32];
  
  bVar1 = *(u8 *)(param_1 + 0x51);
  *(u8 *)(param_1 + 0x51) = bVar1 + 1;
  if (bVar1 < 7) {
    return;
  }
  if (param_1->anim_id != -1) {
    iVar3 = 0;
    CD_EventMain(auStack_38,0x8018a090,(uint)param_1->anim_id << 4,0x8018a0a0,
                    *(u8 *)
                     (*(int *)(param_1 + 8) + (uint)param_1->sub_anim_id * 0x3c + 4));
    uVar4 = param_1->script_ptr;
    do {
      iVar2 = func_0x000808b0(auStack_38,0x8001);
      *(int *)(param_1 + 4) = iVar2;
      if (iVar2 != -1) {
        iVar2 = func_0x000808c0(iVar2,0x380,0);
        if (iVar2 != -1) {
          BIOS_Syscall_B0_80080840(_DAT_800bf4b4);
          BIOS_Syscall_B0_80080840(_DAT_800bf4b8);
          BIOS_Syscall_B0_80080840(_DAT_800bf4bc);
          BIOS_Syscall_B0_80080840(_DAT_800bf4c0);
          func_0x000808d0(*(s32 *)(param_1 + 4),uVar4,0x600);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x000808f0(*(s32 *)(param_1 + 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 7);
  }
  Pad_Init_2(param_1,param_1->anim_id);
  *(u8 *)(param_1 + 0x3e) = 2;
  *(u8 *)(param_1 + 0x3f) = 0;
  *(u8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

