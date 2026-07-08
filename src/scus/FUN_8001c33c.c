
/* WARNING: Removing unreachable block (ram,0x8001bd14) */
/* WARNING: Removing unreachable block (ram,0x8001bd1c) */
/* WARNING: Removing unreachable block (ram,0x8001bd34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8001c33c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_s2;
  undefined4 unaff_s6;
  undefined1 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  iVar1 = FUN_80019038(2);
  if (iVar1 != 0) {
    FUN_80018f34();
    in_stack_00000010 = (undefined1)DAT_80026c04;
    uVar4 = DAT_80026c04 & 0xff;
    uVar2 = FUN_80018e9c();
    if (((uVar4 == uVar2) && (unaff_s2 == 0)) ||
       (iVar1 = FUN_80019038(0xe,&stack0x00000010,0), iVar1 != 0)) {
      uVar3 = FUN_80018ebc();
                    /* WARNING: Subroutine does not return */
      FUN_8001959c(uVar3);
    }
  }
  DAT_80026c0c = 0xffffffff;
  iVar1 = FUN_8001b678();
  if (iVar1 == 1) {
    if (1 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(s__Id__sys_c_v_1_140_1998_01_12_07_80010944 + 0x2c);
    }
    if (DAT_8003bae0 != '\0') {
      in_stack_00000018 = _DAT_8003bae2;
      FUN_80019498(_DAT_8003bae2,&DAT_80039ee0);
      _DAT_80039ee4 = _DAT_8003baea;
      DAT_80039ee8 = s_ResetGraph_jtb__08x_env__08x_8001097c[0x10];
      DAT_80039ee8_1 = s_ResetGraph_jtb__08x_env__08x_8001097c[0x11];
      return (uint)(ushort)s_ResetGraph_jtb__08x_env__08x_8001097c._16_2_;
    }
    _DAT_80039ee8 = _DAT_80039ee8 & 0xff00;
    uVar2 = 1;
    DAT_80026be8 = unaff_s6;
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
  return uVar2;
}

