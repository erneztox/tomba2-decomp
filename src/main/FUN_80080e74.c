
undefined4 FUN_80080e74(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (1 < DAT_800a59a2) {
    (*(code *)PTR_FUN_800a599c)(s_DrawSyncCallback__08x_____8001beac,param_1);
  }
  uVar1 = DAT_800a59ac;
  DAT_800a59ac = param_1;
  return uVar1;
}

