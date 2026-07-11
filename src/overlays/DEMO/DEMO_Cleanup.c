// DEMO_Cleanup (DEMO_Cleanup) - Demo cleanup/reset handler

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 DEMO_Cleanup(int param_1,uint param_2)

{
  s16 uVar1;
  int iVar2;
  int iVar3;
  s32 local_18;
  int local_14;
  
  iVar3 = 2000;
  do {
    iVar2 = func_0x0008d030(&local_18,&local_14);
    iVar3 = iVar3 + -1;
    if (iVar2 == 0) {
      if (param_2 <= *(uint *)(local_14 + 8)) {
        g_OverlayEntity->velocity_y = 7;
      }
      uVar1 = *(s16 *)(local_14 + 0x10);
      *(s16 *)(param_1 + 0x24) = uVar1;
      *(s16 *)(param_1 + 0x1c) = uVar1;
      uVar1 = *(s16 *)(local_14 + 0x12);
      *(s16 *)(param_1 + 0x26) = uVar1;
      *(s16 *)(param_1 + 0x1e) = uVar1;
      *(s16 *)(param_1 + 0x32) = *(s16 *)(local_14 + 0x12);
      return local_18;
    }
  } while (iVar3 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

