
void FUN_80013154(short *param_1,byte *param_2,undefined2 param_3,uint param_4)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int local_60 [3];
  undefined4 local_54;
  undefined2 local_50 [16];
  int local_30;
  
  sVar1 = *param_1;
  local_30 = (int)param_1[1];
  iVar7 = 0;
  local_60[1] = 0xa0000000;
  local_60[0] = ((param_1[2] + 1 >> 1) + 3) * 0x1000000;
  local_54 = *(undefined4 *)(param_1 + 2);
  do {
    puVar5 = local_50;
    iVar6 = 0;
    if ((&DAT_8002545c)[DAT_800384a4 * 0xc] != '\0') {
      do {
        uVar3 = param_4 & 0xffff;
        puVar4 = puVar5;
        if (param_4 >> 0x10 <= uVar3) {
          do {
            puVar5 = puVar4 + 1;
            uVar2 = 0;
            if (((int)(uint)*param_2 >> (uVar3 & 0x1f) & 1U) != 0) {
              uVar2 = param_3;
            }
            uVar3 = uVar3 - 1;
            *puVar4 = uVar2;
            puVar4 = puVar5;
          } while ((int)(param_4 >> 0x10) <= (int)uVar3);
        }
        iVar6 = iVar6 + 1;
        param_2 = param_2 + 1;
      } while (iVar6 < (int)(uint)(byte)(&DAT_8002545c)[DAT_800384a4 * 0xc]);
    }
    iVar6 = 0;
    do {
      local_60[2] = *(int *)param_1;
      FUN_800137e0(local_60);
      iVar6 = iVar6 + 1;
      *param_1 = *param_1 + 1;
    } while (iVar6 < 2);
    iVar7 = iVar7 + 1;
    *param_1 = sVar1;
    param_1[1] = param_1[1] + 1;
  } while (iVar7 < 0xf);
  param_1[1] = (short)local_30;
  return;
}

