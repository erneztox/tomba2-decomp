
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8001d364(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *local_28 [4];
  undefined *local_18;
  undefined *local_14;
  undefined *local_10;
  undefined *local_c;
  
  uVar2 = (int)param_1 >> 3 & 7;
  local_28[0] = PTR_DAT_8001005c;
  local_28[1] = PTR_DAT_80010060;
  local_28[2] = PTR_DAT_80010064;
  local_28[3] = PTR_DAT_80010068;
  local_18 = PTR_DAT_8001006c;
  local_14 = PTR_DAT_80010070;
  local_10 = PTR_DAT_80010074;
  local_c = PTR_DAT_80010078;
  iVar1 = _DAT_1f800224 + (uint)*(ushort *)(local_28[uVar2] + (param_1 & 7) * 4) * 8;
  FUN_8001d2a8(uVar2,iVar1,
               iVar1 + (*(ushort *)((int)(local_28[uVar2] + (param_1 & 7) * 4) + 2) - 2) * 8,
               param_2 & 1 | 2);
  return;
}

