/**
 * @brief GPU tile drawer: builds 4-point tile primitive, submits to OT
 * @note Original: func_8007C3CC at 0x8007C3CC
 */
// GPU_DrawTile



void FUN_8007c3cc(undefined4 param_1,short *param_2,undefined1 param_3,uint param_4)

{
  undefined1 uVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_30 [8];
  
  local_38 = DAT_80016ed4;
  local_34 = DAT_80016ed8;
  local_30[0] = DAT_80016edc;
  local_30[1] = DAT_80016edd;
  local_30[2] = DAT_80016ede;
  uVar4 = (uint)*(ushort *)(*(ushort *)((int)&local_38 + (param_4 & 0xffff) * 2) + 0x800bf9b4);
  uVar1 = local_30[param_4 & 0xffff];
  psVar3 = (short *)FUN_8007c2a4(param_1,param_2,param_3,(uVar4 / 0x708) % 10,uVar1);
  sVar2 = *param_2;
  *(undefined1 *)(psVar3 + 1) = param_3;
  *(undefined1 *)((int)psVar3 + 3) = uVar1;
  psVar3[3] = 0x28;
  *psVar3 = sVar2;
  psVar3[2] = 0x38;
  *param_2 = *param_2 + 8;
  psVar3 = (short *)FUN_8007c2a4(psVar3 + 4,param_2,param_3,(uVar4 / 0x1e) % 0x3c,uVar1);
  sVar2 = *param_2;
  *(undefined1 *)(psVar3 + 1) = param_3;
  *(undefined1 *)((int)psVar3 + 3) = uVar1;
  psVar3[2] = 0x10;
  psVar3[3] = 0x28;
  *psVar3 = sVar2;
  *param_2 = *param_2 + 8;
  FUN_8007c2a4(psVar3 + 4,param_2,param_3,((uVar4 % 0x1e) * 100) / 0x1e,uVar1);
  return;
}
