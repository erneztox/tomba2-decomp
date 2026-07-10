// FUN_8009a170

void FUN_8009a170(int param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)(param_1 * 0x10 + DAT_800ac604);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  if (uVar1 < 0x4000) {
    *param_2 = uVar1;
  }
  else {
    *param_2 = uVar1 + 0x8000;
  }
  if (uVar2 < 0x4000) {
    *param_3 = uVar2;
  }
  else {
    *param_3 = uVar2 + 0x8000;
  }
  return;
}

