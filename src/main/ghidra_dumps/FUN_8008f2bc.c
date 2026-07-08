
void FUN_8008f2bc(ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar3 = -(ushort)(param_1[6] != 0) & 0x8000;
  if (param_1[8] != 0) {
    uVar3 = uVar3 | 0x4000;
  }
  if (param_1[7] != 0) {
    uVar3 = uVar3 | 0x20;
  }
  uVar1 = param_1[4];
  uVar2 = param_1[3];
  *param_2 = -(ushort)(param_1[5] != 0) & 0x8000 | (*param_1 & 0x7f) << 8 | (param_1[1] & 0xf) << 4
             | param_1[2] & 0xf;
  *param_3 = uVar3 | (uVar2 & 0x7f) << 6 | uVar1 & 0x1f;
  return;
}

