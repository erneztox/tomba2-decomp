/**
 * @brief Initializes entity GTE matrix to identity (0x1000 scale) at entity[0x98]
 * @note Original: func_80051C8C at 0x80051C8C
 */
// Entity_InitMatrix



void FUN_80051c8c(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x98;
  *(undefined4 *)(param_1 + 0x98) = 0x1000;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x1000;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x1000;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  FUN_80084d10((int)*(short *)(param_1 + 0x54),iVar1);
  FUN_80084eb0((int)*(short *)(param_1 + 0x56),iVar1);
  FUN_80085050((int)*(short *)(param_1 + 0x58),iVar1);
  *(int *)(param_1 + 0xac) = (int)*(short *)(param_1 + 0x2e);
  *(int *)(param_1 + 0xb0) = (int)*(short *)(param_1 + 0x32);
  *(int *)(param_1 + 0xb4) = (int)*(short *)(param_1 + 0x36);
  FUN_80051464();
  return;
}
