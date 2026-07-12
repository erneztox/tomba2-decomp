/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80018CFC at 0x80018CFC
 */
// GPU_Setup11



void GPU_Setup11(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint unaff_s1;
  int unaff_s2;
  
  uVar1 = *DAT_8002677c;
  *DAT_8002677c = 0;
  if (unaff_s2 != 0) {
    *param_1 = unaff_s2;
    *(ushort *)(param_3 + 0x30) = *(ushort *)(param_3 + 0x30) | (ushort)(1 << (unaff_s1 & 0x1f));
    GPU_Setup11();
    return;
  }
  uVar2 = ~(ushort)(1 << (unaff_s1 & 0x1f));
  *param_1 = 0;
  *(ushort *)(param_2 + 0x2c) = *(ushort *)(param_2 + 0x2c) & uVar2;
  if (unaff_s1 == 0) {
    GPU_Setup11(1);
    GPU_Setup11(3,1);
  }
  if (unaff_s1 == 4) {
    GPU_Setup11(0,1);
  }
  if (unaff_s1 == 5) {
    GPU_Setup11(1,1);
  }
  if (unaff_s1 == 6) {
    GPU_Setup11(2,1);
  }
  *DAT_8002677c = uVar1 & uVar2;
  return;
}
