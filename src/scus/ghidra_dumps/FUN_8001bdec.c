
uint FUN_8001bdec(void)

{
  char cVar1;
  uint uVar2;
  int in_v0;
  char *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s5;
  undefined4 unaff_s6;
  
  if ((unaff_s0 < (char *)(in_v0 + -0x3d20)) && (*unaff_s0 != '\0')) {
    FUN_80019498(*(undefined4 *)(unaff_s0 + 2));
    *(undefined4 *)(unaff_s1 + unaff_s5 + 4) = *(undefined4 *)(unaff_s0 + 10);
    cVar1 = s_ResetGraph_jtb__08x_env__08x_8001097c[0x16];
    if (unaff_s2 == 0) {
      uVar2 = (uint)(ushort)s_ResetGraph_jtb__08x_env__08x_8001097c._16_2_;
      *(undefined2 *)(unaff_s5 + 8) = s_ResetGraph_jtb__08x_env__08x_8001097c._16_2_;
    }
    else {
      if (unaff_s2 != 1) {
        uVar2 = FUN_8001b550();
        return uVar2;
      }
      uVar2 = (uint)(short)s_ResetGraph_jtb__08x_env__08x_8001097c._20_2_;
      *(undefined2 *)(unaff_s5 + 0x20) = s_ResetGraph_jtb__08x_env__08x_8001097c._20_2_;
      *(char *)(unaff_s5 + 0x22) = cVar1;
    }
    return uVar2;
  }
  DAT_80026be8 = unaff_s6;
  if (unaff_s2 < 0x40) {
    (&DAT_80039ee8)[unaff_s2 * 0x18] = 0;
  }
  if (1 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(s_SetGraphDebug_level__d_type__d_r_800109b0);
  }
  return 1;
}

