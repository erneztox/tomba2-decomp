// A03_EntityCollisionState - Entity state: checks g_GameMode, collision flags, field_0x6e

/* WARNING: Control flow encountered bad instruction data */

void A03_EntityCollisionState(int param_1)

{
  int iVar1;
  u8 auStack_38 [32];
  u8 auStack_18->counter1;
  
  if (g_GameMode == '\0') {
    if (0x554 < (u16)(*(short *)(param_1 + 0x6e) + 0x2aaU)) {
      param_1->sub_action = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((*(u8 *)(param_1 + 0x72) & 1) != 0) {
      if ((((int)*(short *)(*(int *)(param_1 + 0x60) + 6) & 0x8000U) != 0) &&
         (iVar1 = func_0x0010c060(*(int *)(param_1 + 0x60),param_1->type_flags + -1000,
                                  auStack_18,auStack_38),
         ((int)*(short *)(iVar1 + 6) & 0x8000U) != 0)) {
        param_1->sub_action = 1;
        g_GameMode = '\x01';
      }
    }
  }
  return;
}

