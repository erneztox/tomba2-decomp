// FUN_8009ba10

undefined4 FUN_8009ba10(undefined4 *param_1)

{
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_gp;
  undefined4 unaff_s8;
  undefined4 unaff_retaddr;
  undefined1 auStackX_0 [16];
  
  *param_1 = unaff_retaddr;
  param_1[0xb] = unaff_gp;
  param_1[1] = register0x00000074;
  param_1[2] = unaff_s8;
  param_1[3] = unaff_s0;
  param_1[4] = unaff_s1;
  param_1[5] = unaff_s2;
  param_1[6] = unaff_s3;
  param_1[7] = unaff_s4;
  param_1[8] = unaff_s5;
  param_1[9] = unaff_s6;
  param_1[10] = unaff_s7;
  return 0;
}

