// FUN_80107c1c

uint FUN_80107c1c(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint extraout_v1;
  
  iVar4 = func_0x80022f04();
  uVar5 = 0;
  if (iVar4 != 0) {
    if (0xb4 < *(short *)(param_2 + 0x84)) {
      sVar1 = *(short *)(param_1 + 4);
      sVar3 = func_0x800782b0((uint)*(ushort *)(param_1 + 0x84) +
                              ((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)
                              ) + 0xe0);
      if (0x800 < ((sVar1 - sVar3) + 0x400U & 0xfff)) {
        uVar5 = FUN_80119c30();
        return uVar5;
      }
      uVar2 = *(ushort *)(param_1 + 6);
      uVar5 = 0;
LAB_80110c90:
      *(ushort *)(param_1 + 6) = uVar2 & 0xfffe;
      return uVar5;
    }
    uVar5 = (uint)((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
                  (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
                        (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) &
                       0xffff));
    if (uVar5 == 0) {
      if (*(char *)(param_2 + 0xbf) == '\0') {
        uVar2 = func_0x8001dc9c(param_1,param_2,0,3);
        uVar2 = uVar2 & 0x80;
        uVar5 = extraout_v1;
        goto LAB_80110c90;
      }
      uVar5 = func_0x8001e860(param_1,param_2,0,0);
      if ((uVar5 & 0x80) != 0) {
        *(undefined1 *)(param_1 + 0x2b) = 2;
      }
      uVar5 = 0x1f800000;
      DAT_1f800182 = 0;
    }
  }
  return uVar5;
}

