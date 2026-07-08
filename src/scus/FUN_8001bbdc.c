
/* WARNING: Removing unreachable block (ram,0x8001bd14) */
/* WARNING: Removing unreachable block (ram,0x8001bd1c) */
/* WARNING: Removing unreachable block (ram,0x8001bd34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8001bbdc(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == DAT_80026be8) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_8001b678(1,*(undefined4 *)(param_1 * 0x2c + -0x7ffc5b44),&DAT_8003bae0);
    if (iVar1 == 1) {
      if (1 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(s__Id__sys_c_v_1_140_1998_01_12_07_80010944 + 0x2c);
      }
      if (DAT_8003bae0 != '\0') {
        FUN_80019498(_DAT_8003bae2,&DAT_80039ee0);
        _DAT_80039ee4 = _DAT_8003baea;
        DAT_80039ee8 = s_ResetGraph_jtb__08x_env__08x_8001097c[0x10];
        DAT_80039ee8_1 = s_ResetGraph_jtb__08x_env__08x_8001097c[0x11];
        return (uint)(ushort)s_ResetGraph_jtb__08x_env__08x_8001097c._16_2_;
      }
      _DAT_80039ee8 = _DAT_80039ee8 & 0xff00;
      uVar2 = 1;
      DAT_80026be8 = param_1;
      if (1 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(s_SetGraphDebug_level__d_type__d_r_800109b0,0);
      }
    }
    else {
      uVar2 = 0xffffffff;
      if (0 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(s__Id__sys_c_v_1_140_1998_01_12_07_80010944 + 0xc);
      }
    }
  }
  return uVar2;
}

