
uint FUN_80080bf0(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 7;
  if (uVar1 == 3) {
LAB_80080c3c:
    FUN_8009a730(s_ResetGraph_jtb__08x_env__08x_8001be38,
                 &PTR_s__Id__sys_c_v_1_140_1998_01_12_07_800a5958,&DAT_800a59a0);
LAB_80080c58:
    FUN_80083af8(&DAT_800a59a0,0,0x80);
    FUN_80085b20();
    FUN_80083b20((uint)PTR_PTR_800a5998 & 0xffffff);
    DAT_800a59a0 = FUN_80083214(param_1);
    DAT_800a59a1 = 1;
    DAT_800a59a4 = *(undefined2 *)(&DAT_800a5a20 + (uint)DAT_800a59a0 * 4);
    DAT_800a59a6 = *(undefined2 *)(&DAT_800a5a2c + (uint)DAT_800a59a0 * 4);
    FUN_80083af8(&DAT_800a59b0,0xffffffff,0x5c);
    FUN_80083af8(&DAT_800a5a0c,0xffffffff,0x14);
    uVar1 = (uint)DAT_800a59a0;
  }
  else {
    if (uVar1 < 4) {
      if (uVar1 == 0) goto LAB_80080c3c;
    }
    else if (uVar1 == 5) goto LAB_80080c58;
    if (1 < DAT_800a59a2) {
      (*(code *)PTR_FUN_800a599c)(s_ResetGraph__d_____8001be58,param_1);
    }
    uVar1 = (**(code **)(PTR_PTR_800a5998 + 0x34))(1);
  }
  return uVar1;
}

