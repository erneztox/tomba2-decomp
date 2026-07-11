/**
 * @brief PsyQ MoveImage wrapper: copies data within VRAM
 * @note Original: func_800812D8 at 0x800812D8
 */
// GPU_MoveImage



undefined4 FUN_800812d8(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_80080fd4(s_MoveImage_8001bf44,param_1);
  uVar1 = 0xffffffff;
  if (*(short *)(param_1 + 1) != 0) {
    if (*(short *)((int)param_1 + 6) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      DAT_800a5a44 = param_3 << 0x10 | param_2 & 0xffff;
      DAT_800a5a40 = *param_1;
      DAT_800a5a48 = param_1[1];
      uVar1 = (**(code **)(PTR_PTR_800a5998 + 8))
                        (*(undefined4 *)(PTR_PTR_800a5998 + 0x18),&DAT_800a5a38,0x14,0);
    }
  }
  return uVar1;
}
