// CRD_AnimFlip (CRD_AnimFlip) - Card flip animation

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_AnimFlip(int param_1)

{
  short sVar1;
  int iVar2;
  s32 uVar3;
  int iVar4;
  short local_28->state;
  u16 local_20->state;
  
  local_28->type = 0x2e;
  local_28->flags = 0x2f;
  if (*_DAT_800bf4a4 == '\0') {
    iVar4 = 0;
    local_20->sub_type = 0x10;
    local_20->kind = 0;
    local_20->flags = 100;
    iVar2 = param_1;
    do {
      if (*(u8 *)(iVar2 + 0x4a) < 3) {
        uVar3 = *(s32 *)(local_28[iVar4] * 4 + -0x7ff5d7ac);
        sVar1 = String_Compare(uVar3);
        local_20->type = sVar1 * -4 + 0x50;
        if (iVar4 != 0) {
          local_20->type = sVar1 * -4 + 0xf0;
        }
        local_20->flags = 100;
        local_20->kind = 0;
        if ((uint)*(u8 *)(param_1 + 0x44) == iVar4 + 1U) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        GPU_RenderSprite_V1((int)((uint)local_20->type * 0x10000) >> 0x10,100,6,uVar3,3);
        local_20->kind = local_20->kind << 1;
        sVar1 = String_Compare(uVar3);
        local_20->kind = local_20->kind + sVar1 * 8;
        UI_DrawPanel(local_20,0x60,0);
      }
      iVar4 = iVar4 + 1;
      iVar2 = param_1 + iVar4;
    } while (iVar4 < 2);
  }
  return;
}

