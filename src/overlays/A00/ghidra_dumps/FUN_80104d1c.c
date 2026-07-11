// FUN_80104d1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80104d1c(byte *param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if ((DAT_1f800137 == '\0') && (puVar4 = &DAT_800bf808, DAT_800bf80d == '\0')) {
    if (((int)*(short *)(param_1 + 0x17e) & 0x8200U) == 0) {
      iVar3 = func_0x80022f04(param_1,param_2);
      if (iVar3 != 0) {
        *(undefined1 *)(param_2 + 0x29) = 1;
        DAT_1f800137 = '\x02';
        DAT_800bf841 = 1;
      }
    }
    else {
      iVar3 = func_0x8002300c(param_1,param_2,0x20);
      if (iVar3 != 0) {
        if ((*param_1 & 4) == 0) {
          iVar3 = func_0x80083f50(_DAT_1f80009c + 0x800);
          puVar4 = (undefined1 *)(iVar3 * (*(short *)(param_1 + 0x80) + 0x20) >> 0xc);
          iVar3 = func_0x80083e80(_DAT_1f80009c + 0x800);
          *(short *)(param_1 + 0x2e) = *(short *)(param_2 + 0x2e) + (short)puVar4;
          *(short *)(param_1 + 0x36) =
               *(short *)(param_2 + 0x36) -
               (short)(iVar3 * (*(short *)(param_1 + 0x80) + 0x20) >> 0xc);
        }
        iVar3 = func_0x80077768((int)(((_DAT_1f80009c & 0xffff) + 0x800) * 0x10000) >> 0x10,
                                (int)*(short *)(param_1 + 0x140),1);
        param_1[0x5f] = (byte)(iVar3 + 2);
        if (iVar3 + 2 == 0) {
          sVar2 = *(short *)(puVar4 + 0x4a);
          *(short *)(puVar4 + 0x4a) = sVar2 + 0x100;
          if (0x3000 < (short)(sVar2 + 0x100)) {
            *(undefined2 *)(puVar4 + 0x4a) = 0x3000;
          }
          *(int *)(puVar4 + 0x30) = *(int *)(puVar4 + 0x30) + *(short *)(puVar4 + 0x4a) * 0x100;
          func_0x8004766c(puVar4);
          return;
        }
        *(undefined2 *)(puVar4 + 0x4a) = 0;
        if (-0x55f < *(short *)(puVar4 + 0x32)) {
          bVar1 = puVar4[6];
          *(undefined2 *)(puVar4 + 0x32) = 0xfaa1;
          puVar4[6] = (char)(code *)(bVar1 + 1);
                    /* WARNING: Could not recover jumptable at 0x80116e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(bVar1 + 1))();
          return;
        }
        puVar4[0x29] = 0;
        return;
      }
    }
  }
  return;
}

