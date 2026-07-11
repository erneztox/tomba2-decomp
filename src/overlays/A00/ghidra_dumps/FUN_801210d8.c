// FUN_801210d8

void FUN_801210d8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,short param_5,
                 int param_6,int param_7)

{
  short sVar1;
  int iVar2;
  int in_v0;
  int iVar3;
  int in_v1;
  undefined4 in_t0;
  int unaff_s0;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  short unaff_s8;
  undefined4 uStack00000020;
  
  uStack00000020 = in_t0;
  while( true ) {
    *(short *)(param_2 + 0x60) = (short)param_1;
    *(short *)(in_v0 + 0x60) = (short)unaff_s0;
    *(short *)(in_v1 + 0x60) = (short)param_1;
    if (3 < unaff_s2) break;
    unaff_s0 = param_7 - ((int)((ulonglong)((longlong)(unaff_s8 * unaff_s2) * (longlong)unaff_s7) >>
                               0x20) - (unaff_s8 * unaff_s2 >> 0x1f));
    iVar2 = func_0x80083e80((int)((ulonglong)((longlong)(unaff_s2 << 10) * (longlong)unaff_s7) >>
                                 0x20) - ((unaff_s2 << 10) >> 0x1f));
    param_2 = unaff_s4 + unaff_s6;
    sVar1 = *(short *)(unaff_s4 + 0x32);
    unaff_s6 = unaff_s6 + 4;
    *(short *)(unaff_s5 + 0x60) =
         param_5 + ((short)((ulonglong)((longlong)unaff_s3 * (longlong)unaff_s7) >> 0x20) -
                   (short)(unaff_s3 >> 0x1f));
    unaff_s5 = unaff_s5 + 4;
    unaff_s3 = unaff_s3 + param_6;
    iVar3 = 7 - unaff_s2;
    unaff_s2 = unaff_s2 + 1;
    param_1 = (int)sVar1 + ((short)uStack00000020 * iVar2 >> 0xc);
    in_v0 = unaff_s4 + iVar3 * 4;
    in_v1 = unaff_s4 + (iVar3 * 4 | 2U);
  }
  return;
}

