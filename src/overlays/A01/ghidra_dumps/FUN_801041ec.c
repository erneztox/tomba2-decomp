// FUN_801041ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_801041ec(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = *(ushort *)(param_1 + 0x17e) & 0x200;
  if (((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) && (uVar4 = 0, *param_1 < 4)) {
    if ((*(byte *)(param_2 + 3) & 0x80) == 0) {
      iVar5 = FUN_8010cf68(param_1,param_2,*(undefined4 *)(param_2 + 0xcc),0);
      if (iVar5 < 0) {
        iVar5 = func_0x80022f04(param_1,param_2);
        if (iVar5 == 0) {
          return 0;
        }
        param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
        if ((*param_1 & 4) == 0) {
          iVar5 = func_0x80083f50(_DAT_1f80009c);
          sVar1 = *(short *)(param_1 + 0x80);
          sVar2 = *(short *)(param_2 + 0x80);
          func_0x80083e80(_DAT_1f80009c);
          sVar3 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) =
               *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
          uVar4 = FUN_8010d3ac((int)sVar3);
          return uVar4;
        }
      }
      else {
        if (((iVar5 < 2) && (*(char *)(param_2 + 0x5e) == '\x01')) && (param_1[0x144] == 1)) {
          iVar5 = func_0x8001ff7c(param_1,param_2,iVar5,2);
          if (*(byte *)(iVar5 + 0x7eaa) < 0xb) {
            return 1;
          }
          return (uint)(0xd < *(byte *)(iVar5 + 0x7eaa));
        }
        param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
        if ((*param_1 & 4) == 0) {
          iVar5 = func_0x80083f50(_DAT_1f80009c);
          sVar1 = *(short *)(param_1 + 0x80);
          iVar6 = func_0x80083e80(_DAT_1f80009c);
          *(short *)(param_1 + 0x2e) =
               (short)(iVar5 * (sVar1 + 0x96) >> 0xc) +
               *(short *)(*(int *)(param_2 + 0xcc) + 0x2c) + *(short *)(param_2 + 0x60);
          *(short *)(param_1 + 0x36) =
               (*(short *)(*(int *)(param_2 + 0xcc) + 0x34) + *(short *)(param_2 + 100)) -
               (short)(iVar6 * (*(short *)(param_1 + 0x80) + 0x96) >> 0xc);
        }
      }
      uVar4 = func_0x80022d08(param_1,param_2,1,0);
    }
    else {
      iVar5 = func_0x8001f830();
      uVar4 = 0;
      if (iVar5 != 0) {
        func_0x80058304(param_1,1);
        uVar4 = (uint)DAT_800bfad6;
        if (uVar4 == 0) {
          param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
          uVar4 = FUN_8010d3c0(param_1,param_2,1,0);
          return uVar4;
        }
      }
    }
  }
  return uVar4;
}

