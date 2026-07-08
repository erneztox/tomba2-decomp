
void FUN_80018cfc(int *param_1,int param_2,int param_3)

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
    FUN_80018558();
    return;
  }
  uVar2 = ~(ushort)(1 << (unaff_s1 & 0x1f));
  *param_1 = 0;
  *(ushort *)(param_2 + 0x2c) = *(ushort *)(param_2 + 0x2c) & uVar2;
  if (unaff_s1 == 0) {
    FUN_8001799c(1);
    FUN_8001805c(3,1);
  }
  if (unaff_s1 == 4) {
    FUN_8001805c(0,1);
  }
  if (unaff_s1 == 5) {
    FUN_8001805c(1,1);
  }
  if (unaff_s1 == 6) {
    FUN_8001805c(2,1);
  }
  *DAT_8002677c = uVar1 & uVar2;
  return;
}

