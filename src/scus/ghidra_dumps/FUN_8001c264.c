
/* WARNING: Removing unreachable block (ram,0x8001bd14) */
/* WARNING: Removing unreachable block (ram,0x8001bd1c) */
/* WARNING: Removing unreachable block (ram,0x8001bd34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8001c264(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_s6;
  undefined1 local_18 [8];
  
  FUN_80019010(0);
  FUN_80019024(0);
  if ((DAT_8002683c & 1) != 0) {
    FUN_80019454(0);
  }
  uVar1 = FUN_80018e8c();
  if ((uVar1 & 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_80017e4c(0xffffffff);
  }
  if (param_1 != 0) {
    FUN_8001effc(s_DrawSyncCallback__08x_____800109f0 + 0x14);
    FUN_80019038(9,0,0);
    uVar2 = FUN_80018ebc();
    iVar3 = FUN_80019038(2,uVar2,0);
    if (iVar3 == 0) goto LAB_8001bc34;
  }
  FUN_80018f34();
  local_18[0] = (undefined1)DAT_80026c04;
  uVar4 = DAT_80026c04 & 0xff;
  uVar1 = FUN_80018e9c();
  if (((uVar4 == uVar1) && (param_1 == 0)) || (iVar3 = FUN_80019038(0xe,local_18,0), iVar3 != 0)) {
    uVar2 = FUN_80018ebc();
                    /* WARNING: Subroutine does not return */
    FUN_8001959c(uVar2);
  }
LAB_8001bc34:
  DAT_80026c0c = 0xffffffff;
  iVar3 = FUN_8001b678();
  if (iVar3 == 1) {
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
    uVar1 = 1;
    DAT_80026be8 = unaff_s6;
    if (1 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(s_SetGraphDebug_level__d_type__d_r_800109b0,0);
    }
  }
  else {
    uVar1 = 0xffffffff;
    if (0 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(s__Id__sys_c_v_1_140_1998_01_12_07_80010944 + 0xc);
    }
  }
  return uVar1;
}

