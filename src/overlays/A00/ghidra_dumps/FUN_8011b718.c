// FUN_8011b718

void FUN_8011b718(undefined1 *param_1)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  byte bVar5;
  undefined1 *puVar6;
  int iVar7;
  short local_20 [8];
  
  local_20[0] = 0x2821;
  local_20[1] = 0x200;
  local_20[2] = 0x4ad9;
  local_20[3] = 0x804;
  local_20[4] = 0x1f80;
  if (*(char *)(*(int *)(param_1 + 0x14) + 1) == '\0') {
    return;
  }
  puVar6 = (undefined1 *)(uint)(byte)param_1[5];
  iVar7 = *(int *)(param_1 + 0x10);
  cVar2 = puVar6 < (undefined1 *)0x2;
  if (puVar6 != (undefined1 *)0x1) {
    if (!(bool)cVar2) {
      cVar2 = '\x03';
      if (puVar6 == (undefined1 *)0x2) {
        bVar5 = param_1[0x46] & 3;
        param_1[5] = 3;
        if (((param_1[0x46] & 3) == 0) || (bVar5 == 2)) {
          *(undefined2 *)(param_1 + 0x4a) = 0xe800;
          *(undefined2 *)(param_1 + 0x4c) = 0;
          FUN_801248d8();
          return;
        }
        uVar3 = 0xfc00;
        if (bVar5 == 1) {
          uVar3 = 0x400;
        }
        *(undefined2 *)(param_1 + 0x4c) = uVar3;
        *(undefined2 *)(param_1 + 0x4a) = 0xf000;
        *(undefined2 *)(param_1 + 0x50) = 0x200;
      }
      else if (puVar6 != (undefined1 *)0x3) goto LAB_801249bc;
      iVar4 = func_0x8007778c(param_1);
      if (iVar4 == 0) {
        return;
      }
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * 0x100;
      if (*(int *)(iVar7 + 0x34) + -0x40 <= (int)*(short *)(param_1 + 0x36)) {
        if (*(int *)(iVar7 + 0x34) + 0x40 < (int)*(short *)(param_1 + 0x36)) {
          *(short *)(param_1 + 0x36) = *(short *)(iVar7 + 0x34) + 0x40;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
        func_0x80077b5c(param_1);
        if (param_1[0x29] == '\0') {
          return;
        }
        param_1[5] = 2;
        param_1[0x47] = '\x01' - param_1[0x47];
        param_1[0x46] = param_1[0x46] + '\x01';
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -8;
        func_0x80074590(0x8f,0,0);
        return;
      }
      FUN_80124940();
      return;
    }
    bVar1 = puVar6 != (undefined1 *)0x0;
    puVar6 = (undefined1 *)0x107;
    if (bVar1) goto LAB_801249bc;
    param_1[5] = 1;
    *param_1 = 1;
    param_1[0xb] = 0x10;
    *(undefined2 *)(param_1 + 0x5a) = 0;
    param_1[0x47] = 0;
    param_1[0x46] = param_1[0x60] & 3;
    func_0x8003116c(0x107,param_1 + 0x2c,0xfffffff6);
    *(short *)(param_1 + 0x2e) = *(short *)(iVar7 + 0x2c) + local_20[*(short *)(param_1 + 0x60)];
    *(short *)(param_1 + 0x32) = *(short *)(iVar7 + 0x30) + -0x20;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar7 + 0x34);
    puVar6 = param_1;
    func_0x80077b38(param_1,0x8014c808,4);
  }
  if (DAT_800bf9dd < 0xf) {
    if (*(int *)(iVar7 + 0x30) <= (int)*(short *)(param_1 + 0x32)) {
      func_0x8009a450();
      return;
    }
    func_0x80077b5c(param_1);
    cVar2 = func_0x8007778c();
    puVar6 = param_1;
  }
  else {
    cVar2 = param_1[5] + '\x01';
    param_1[5] = cVar2;
  }
LAB_801249bc:
  puVar6[0x1a] = cVar2;
  puVar6[0x19] = cVar2;
  puVar6[0x18] = cVar2;
  puVar6[0xd] = 2;
  puVar6[6] = puVar6[6] + '\x01';
  FUN_8012d9e8();
  return;
}

