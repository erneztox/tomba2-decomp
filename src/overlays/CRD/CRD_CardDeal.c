// CRD_CardDeal (CRD_CardDeal) - Card dealing logic

/* WARNING: Control flow encountered bad instruction data */

void CRD_CardDeal(int param_1)

{
  u8 bVar1;
  s32 *puVar2;
  s32 *puVar3;
  s32 uVar4;
  s32 uVar5;
  s32 uVar6;
  int iVar7;
  
  bVar1 = *(u8 *)(param_1 + 0x51);
  *(u8 *)(param_1 + 0x51) = bVar1 + 1;
  if (6 < bVar1) {
    iVar7 = *(int *)(param_1 + 8);
    Mem_Set(param_1->script_ptr,0,0x980);
    func_0x0018a428(param_1->script_ptr);
    puVar2 = (s32 *)&g_GameState;
    DAT_800bf9eb = 0;
    puVar3 = (s32 *)(param_1->script_ptr + 0x380);
    if (((uint)puVar3 & 3) != 0) {
      do {
        uVar4 = puVar2->flags;
        uVar5 = puVar2->kind;
        uVar6 = puVar2->sub_type;
        *puVar3 = *puVar2;
        puVar3->flags = uVar4;
        puVar3->kind = uVar5;
        puVar3->sub_type = uVar6;
        puVar2 = puVar2 + 4;
        puVar3 = puVar3 + 4;
      } while (puVar2 != (s32 *)0x800bfe60);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    do {
      uVar4 = puVar2->flags;
      uVar5 = puVar2->kind;
      uVar6 = puVar2->sub_type;
      *puVar3 = *puVar2;
      puVar3->flags = uVar4;
      puVar3->kind = uVar5;
      puVar3->sub_type = uVar6;
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar2 != (s32 *)0x800bfe60);
    *puVar3 = uRam800bfe60;
    iVar7 = func_0x0018aeb8(param_1->script_ptr,param_1->anim_id,
                            iVar7 + (uint)param_1->sub_anim_id * 0x3c + 4);
    if (iVar7 == 1) {
      param_1->kind = 0;
      *(u8 *)(param_1 + 0x3f) = 6;
      halt_baddata();
    }
    if (iVar7 < 2) {
      if (iVar7 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((param_1->anim_id == -1) ||
         (bVar1 = *(char *)(param_1 + 0x5a) + 1, *(u8 *)(param_1 + 0x5a) = bVar1, 2 < bVar1)) {
        Pad_Init_2(param_1,param_1->anim_id);
        *(u8 *)(param_1 + 0x3e) = 2;
        *(u8 *)(param_1 + 0x3f) = 0;
        *(u8 *)(param_1 + 0x40) = 0;
        halt_baddata();
      }
    }
    else {
      if (iVar7 != 2) {
        halt_baddata();
      }
      *(u8 *)(param_1 + 0x5a) = 0;
    }
    *(u8 *)(param_1 + 0x51) = 0;
    param_1->kind = 0;
  }
  return;
}

