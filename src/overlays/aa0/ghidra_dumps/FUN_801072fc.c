// FUN_801072fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801072fc(undefined1 *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  puVar6 = param_1 + 0x60;
  iVar7 = param_2;
  while (iVar3 = func_0x80022e04(param_1,param_2,*(undefined4 *)(iVar7 + 0xc0)), iVar3 == 0) {
    iVar7 = iVar7 + 4;
    if (param_2 + 8 <= iVar7) {
      return;
    }
  }
  if (param_1[0x5f] == '\x10') {
    if (1 < (byte)param_1[0x46] >> 1) {
      if ((byte)param_1[0x46] >> 1 < 4) {
        *(short *)(param_1 + 0x32) =
             *(short *)(param_1 + 0x84) +
             *(short *)(*(int *)(iVar7 + 0xc0) + 0x30) + *(short *)(param_2 + 0x84);
      }
      goto LAB_80107424;
    }
    iVar3 = func_0x80083f50(*(short *)(param_1 + 0x68) + 0x800);
    sVar1 = *(short *)(param_1 + 0x80);
    sVar2 = *(short *)(param_2 + 0x80);
    iVar4 = func_0x80083e80(*(short *)(param_1 + 0x68) + 0x800);
    puVar5 = (undefined1 *)(int)*(short *)(param_2 + 0x80);
    *(short *)(param_1 + 0x2e) =
         *(short *)(*(int *)(iVar7 + 0xc0) + 0x2c) +
         (short)(iVar3 * ((int)sVar1 + (int)sVar2) >> 0xc);
    *(short *)(param_1 + 0x36) =
         *(short *)(*(int *)(iVar7 + 0xc0) + 0x34) -
         (short)(iVar4 * (int)(puVar5 + *(short *)(param_1 + 0x80)) >> 0xc);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(*(int *)(iVar7 + 0xc0) + 0x30);
    puVar6 = *(undefined1 **)(puVar5 + 0x10);
    param_1 = puVar5;
    if (puVar5[5] != '\0') {
      if (puVar5[5] != '\x01') {
        FUN_8011943c();
        return;
      }
      goto LAB_80110424;
    }
    puVar5[5] = 1;
  }
  else {
LAB_80107424:
    func_0x8001e860(param_1,param_2,*(undefined4 *)(iVar7 + 0xc0),0x200);
    DAT_1f800182 = 0;
  }
  param_1[0xb] = 0x10;
  param_1[0x47] = 1;
  *(undefined2 *)(param_1 + 0x5a) = 0x200;
  param_1[8] = 0xfc;
  *(undefined2 *)(param_1 + 0x88) = 0xffc8;
  *(undefined2 *)(param_1 + 0x8a) = 0x20;
  *(undefined2 *)(param_1 + 0x8c) = 0;
LAB_80110424:
  if (*(short *)(*(int *)(param_1 + 0x10) + 0x16) != 2) {
    *param_1 = 1;
    if (puVar6[0x3f] != '\0') {
      param_1[1] = 1;
      func_0x80077efc(param_1);
      func_0x80051d90(puVar6,param_1 + 0x88,&DAT_1f8000c0);
      *(undefined2 *)(param_1 + 0x2e) = _DAT_1f8000c0;
      *(undefined2 *)(param_1 + 0x32) = _DAT_1f8000c2;
      *(undefined2 *)(param_1 + 0x36) = _DAT_1f8000c4;
    }
    return;
  }
  *param_1 = 2;
  FUN_801193e4();
  return;
}

