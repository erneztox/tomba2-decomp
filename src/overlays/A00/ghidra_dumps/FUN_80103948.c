// FUN_80103948

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80103948(ushort *param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  short *psVar8;
  int in_t2;
  int in_t5;
  int in_t6;
  int aiStack_20 [4];
  
  *(undefined1 *)(param_2 + 0x29) = 1;
  *(ushort *)(param_2 + 0x60) = -param_1[0xa9];
  func_0x800635d4(param_1,1);
  func_0x80076d68(param_1);
  if ((*(char *)((int)param_1 + 0x169) != '\0') || ((_DAT_800ecf54 & (_DAT_1f800172 | 0x50)) == 0))
  {
    FUN_8010b42c(param_1,param_2);
    iVar2 = func_0x80049280(param_1,0,(int)(short)param_1[0x31]);
    if (iVar2 != 0) {
      *(undefined1 *)((int)param_1 + 0x29) = 1;
      param_1[0x35] = _DAT_1f8001a6;
      func_0x80049674(param_1);
      param_1[0xa1] = _DAT_1f8001a2;
      *(undefined1 *)(param_2 + 0x29) = 0;
      *(undefined1 *)(param_1 + 0xb2) = 0;
      param_1[0xac] = 0;
      param_1[0xad] = 0;
      func_0x80054198(param_1);
      *(undefined1 *)((int)param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      *(undefined1 *)((int)param_1 + 7) = 0;
      func_0x80054d14(param_1,2,4);
    }
    return 0;
  }
  param_1[0x2c] = 0;
  FUN_8010b42c(param_1,param_2);
  do {
    puVar7 = &stack0xfffffff0;
    iVar2 = func_0x8003116c((int)(short)param_1[1],puVar7,(int)(short)param_1[2]);
    iVar3 = 0x100;
    if (iVar2 != 0) {
      uVar1 = param_1[1];
      if ((short)uVar1 == 0x100) {
        *(char *)(iVar2 + 3) = (char)param_2;
LAB_801159e8:
        psVar8 = (short *)(puVar7 + (iVar3 + (short)uVar1) * 2);
        *(int *)(in_t2 + 0x2c) = aiStack_20[0] * *psVar8;
        *(int *)(in_t2 + 0x30) = aiStack_20[0] * psVar8[1];
        iVar3 = 1;
        *(int *)(in_t2 + 0x34) = aiStack_20[0] * psVar8[2];
        do {
          psVar8 = psVar8 + 3;
          param_4 = param_4 + 1;
          if (in_t6 < param_4 * 0x10000 >> 0x10) {
            param_4 = 0;
            psVar8 = *(short **)((uint)*(byte *)(in_t2 + 3) * 4 + iVar2);
          }
          piVar6 = (int *)((int)aiStack_20 + ((iVar3 << 0x10) >> 0xe));
          *(int *)(in_t2 + 0x2c) = *(int *)(in_t2 + 0x2c) + *piVar6 * (int)*psVar8;
          *(int *)(in_t2 + 0x30) = *(int *)(in_t2 + 0x30) + *piVar6 * (int)psVar8[1];
          iVar3 = iVar3 + 1;
          *(int *)(in_t2 + 0x34) = *(int *)(in_t2 + 0x34) + *piVar6 * (int)psVar8[2];
        } while (iVar3 * 0x10000 >> 0x10 < 4);
        if (0 < in_t5 << 0x10) {
          return 1;
        }
        uVar5 = FUN_8011eac8();
        return uVar5;
      }
      iVar3 = 1;
      if ((param_1[2] & 1) != 0) {
        *(undefined1 *)(iVar2 + 3) = 1;
        goto LAB_801159e8;
      }
      *(undefined1 *)(iVar2 + 3) = 0;
    }
    do {
      param_1 = param_1 + 6;
      param_2 = param_2 + 1;
      if ((short)*param_1 < 0) {
        if (0x1d < DAT_800f0005) {
          iVar2 = func_0x800310f4(0x106,0xfffffff5);
          *(undefined1 *)(iVar2 + 3) = 1;
          iVar2 = func_0x800310f4(0x106,0xfffffff6);
          *(undefined1 *)(iVar2 + 3) = 2;
          iVar2 = func_0x800310f4(0x106,0xffffffe1);
          *(undefined1 *)(iVar2 + 3) = 3;
          iVar2 = func_0x800310f4(0x106,0xffffffe2);
          *(undefined1 *)(iVar2 + 3) = 4;
          iVar2 = func_0x800310f4(0x106,0xffffffe2);
          *(undefined1 *)(iVar2 + 3) = 5;
          iVar2 = func_0x800310f4(0x106,0xffffffe2);
          *(undefined1 *)(iVar2 + 3) = 6;
          DAT_800f0004 = 1;
          _DAT_800f000a = 5;
        }
        uVar4 = (uint)DAT_800f0005;
        DAT_800f0005 = (byte)(code *)(uVar4 + 1);
                    /* WARNING: Could not recover jumptable at 0x80115b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)(uVar4 + 1))();
        return uVar5;
      }
    } while (*param_1 != (ushort)DAT_800f0005);
  } while( true );
}

