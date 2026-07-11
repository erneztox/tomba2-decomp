// FUN_080195a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080195d8) */
/* WARNING: Removing unreachable block (ram,0x080195dc) */
/* WARNING: Removing unreachable block (ram,0x001125fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080195a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_60;
  undefined4 local_5c [9];
  undefined4 local_38 [2];
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar2 = &local_60;
  puVar1 = (undefined4 *)&DAT_801091d0;
  do {
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 4;
  } while (puVar1 != (undefined4 *)&DAT_801091f0);
  *puVar2 = _DAT_801091f0;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  iVar6 = 0;
  _DAT_1f800090 = 0;
  do {
    func_0x000318a0(param_1 + 0x2c,local_5c + (*(byte *)(param_1 + 7) - 1),param_1 + 0x48);
    func_0x00027768(0x8011df94,
                    *(undefined1 *)((int)local_5c + (uint)*(byte *)(param_1 + 7) * 4 + -1),
                    (int)*(short *)(param_1 + 0x32),0);
    iVar6 = iVar6 + 1;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x400;
  } while (iVar6 < 4);
  if (*(byte *)(param_1 + 7) < 6) {
    local_38[0] = _DAT_801091f4;
    local_30[0] = _DAT_801091f8;
    local_30[1] = _DAT_801091fc;
    local_30[2] = _DAT_80109200;
    local_30[3] = _DAT_80109204;
    local_20 = _DAT_80109208;
    local_1c = _DAT_8010920c;
    iVar6 = 0;
    uVar3 = local_30[*(byte *)(param_1 + 7)];
    do {
      func_0x000318a0(param_1 + 0x2c,local_38,param_1 + 0x48);
      func_0x00027768(uVar3,0,(int)*(short *)(param_1 + 0x32),0);
      iVar6 = iVar6 + 1;
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x400;
    } while (iVar6 < 4);
  }
  return;
}

