/**
 * @brief GPU sprite drawer: builds sprite primitive from entity data
 * @note Original: func_80033A0C at 0x80033A0C
 */
// GPU_DrawSprite



void FUN_80033a0c(int param_1,int param_2,undefined1 param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 local_30;
  undefined1 local_2f;
  undefined2 local_2e;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  iVar3 = 2;
  param_2 = param_2 + 4;
  puVar2 = &DAT_800a23ac;
  local_30 = 0;
  local_2e = 0;
  do {
    if ((iVar3 == 4) || (local_2f = param_3, iVar3 == 7)) {
      local_2f = 0x32;
    }
    local_28 = *puVar2;
    iVar3 = iVar3 + 1;
    local_26 = puVar2[1];
    local_24 = puVar2[2];
    local_22 = puVar2[3];
    puVar2 = puVar2 + 4;
    psVar1 = (short *)(param_2 + -4);
    param_2 = param_2 + 2;
    FUN_8007e1b8(&local_28,(&PTR_DAT_80017334)[*psVar1],*(undefined4 *)(param_1 + 4),&local_30);
  } while (iVar3 < 0xe);
  return;
}
