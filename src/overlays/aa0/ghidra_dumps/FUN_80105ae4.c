// FUN_80105ae4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80105ae4(byte *param_1,char *param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_v1;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *(ushort *)(param_1 + 0x17e) & 0x200;
  if (((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) && (uVar2 = (uint)DAT_800bf841, uVar2 == 0)) {
    iVar3 = func_0x8001f40c(param_1,param_2,1);
    uVar2 = 0x1f800000;
    if (-1 < iVar3) {
      DAT_1f800182 = 0;
      if (*param_2 == '\x01') {
        iVar5 = 0x1f800000;
        if ((param_1[0x144] == 1) && (iVar3 < 2)) {
          if (((int)*(short *)(param_1 + 0x17e) & 0x8000U) == 0) {
            uVar6 = func_0x8001fdb4(param_2,0xffff8002,3,0x20);
          }
          else {
            uVar6 = func_0x8001f830(param_1,param_2);
          }
        }
        else {
          iVar3 = func_0x80083f50(_DAT_1f80009c);
          iVar5 = iVar3 * ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) >> 0xc
          ;
          iVar3 = func_0x80083e80(_DAT_1f80009c);
          sVar1 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) = *(short *)(param_2 + 0x2e) + (short)iVar5;
          iVar4 = iVar3 * ((int)*(short *)(param_1 + 0x80) + (int)sVar1) >> 0xc;
          iVar3 = (uint)*(ushort *)(param_2 + 0x36) - iVar4;
          uVar6 = CONCAT44(iVar4,iVar3);
          *(short *)(param_1 + 0x36) = (short)iVar3;
        }
        iVar3 = (int)((ulonglong)uVar6 >> 0x20);
        uVar7 = CONCAT44(iVar3,(uint)(iVar3 < 2));
        if (iVar3 == (int)uVar6) {
          iVar3 = func_0x8005308c();
          if (iVar3 == 0) {
            return 0;
          }
          func_0x80040cdc(param_1,0,0x80148574);
          param_1[0x70] = (byte)iVar5;
          uVar7 = CONCAT44(extraout_v1,param_1[5] + 1);
          param_1[5] = (byte)(param_1[5] + 1);
        }
        else if (iVar3 < 2 == 0) {
          uVar7 = CONCAT44(iVar3,0xff);
          if (iVar3 == iVar5) {
            if (param_1[0x70] == 0xff) {
              param_1[4] = 3;
              uVar7 = 0xff00000003;
            }
            else {
              uVar7 = func_0x80041098(param_1);
            }
          }
        }
        else if (iVar3 == 0) {
          func_0x8004d4f4(0x28,1);
          func_0x8004ed94(0x2d,0x42);
          func_0x8004b0d8(param_1);
          iVar3 = func_0x8004bd04(param_1,0,0);
          if (iVar3 != 0) {
            func_0x8004bea8(0x28,iVar3);
            func_0x80042354(1,1);
            DAT_800bf9dc = DAT_800bf9dc | 1;
          }
          return param_1[5] + 1;
        }
LAB_80117ce0:
                    /* WARNING: Could not recover jumptable at 0x80117cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)((int)((ulonglong)uVar7 >> 0x20) + (int)uVar7))();
        return uVar2;
      }
      uVar2 = (uint)DAT_1f800137;
      if (((uVar2 == 0) && (uVar2 = *param_1 & 6, (*param_1 & 6) == 0)) &&
         (uVar2 = 0, param_1[0x144] < 2)) {
        uVar6 = func_0x80077768((int)*(short *)(param_1 + 0x56),(int)_DAT_1f80009c,0);
        if ((int)uVar6 != 0) {
          uVar7 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),_DAT_1f80009c >> 4);
          goto LAB_80117ce0;
        }
        param_1[0x2b] = (byte)(_DAT_1f80009c + 0x800 >> 4);
        param_1[4] = 2;
        param_1[5] = 2;
        *param_1 = 3;
        uVar2 = 0x78;
        param_1[6] = 0;
        param_1[0x172] = 0x78;
        param_1[0x173] = 0;
      }
    }
  }
  return uVar2;
}

