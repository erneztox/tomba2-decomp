/**
 * @brief Sound effect trigger wrapper: calls Audio_PlaySoundEffect with preset params
 * @note Original: func_8002369C at 0x8002369C
 */
// Sys_PlaySFX



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8002369c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_80020c34();
  if (-1 < iVar1) {
    *(undefined1 *)(param_1 + 0x2b) = 2;
    *(undefined1 *)(param_2 + 0x2b) = 2;
    if (((_DAT_800e7ffe & 0x200) == 0) && (*(int *)(param_1 + 0x10) == 0)) {
      *(int *)(param_1 + 0x10) = param_2;
      *(undefined1 *)(param_1 + 0x2b) = 2;
      *(undefined2 *)(param_2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(param_2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
      *(undefined2 *)(param_2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    }
    *(byte *)(param_2 + 0x46) = *(byte *)(param_1 + 0x46) & 1;
    FUN_80074590(0x2f,0,0);
    FUN_80031470(2,param_1 + 0x2c,*(undefined1 *)(param_1 + 0x5e),param_1 + 0x68);
    DAT_1f800182 = 0;
  }
  return;
}
