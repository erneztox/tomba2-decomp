// FUN_08017e20

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08017e5c) */
/* WARNING: Removing unreachable block (ram,0x08017e60) */
/* WARNING: Removing unreachable block (ram,0x00110e80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017e20(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_68;
  undefined4 local_64 [9];
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar2 = &local_68;
  puVar1 = (undefined4 *)&DAT_801091ac;
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
  } while (puVar1 != (undefined4 *)&DAT_801091cc);
  *puVar2 = _DAT_801091cc;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  iVar6 = 0;
  _DAT_1f800090 = 0;
  do {
    func_0x000318a0(param_1 + 0x2c,local_64 + (*(byte *)(param_1 + 7) - 1),param_1 + 0x48);
    func_0x00027768(0x8011aefc,
                    *(undefined1 *)((int)local_64 + (uint)*(byte *)(param_1 + 7) * 4 + -1),
                    0xffffffff,0);
    iVar6 = iVar6 + 1;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x400;
  } while (iVar6 < 4);
  iVar6 = 0;
  if (*(byte *)(param_1 + 7) < 6) {
    local_40[0] = _DAT_801091d0;
    local_38[0] = _DAT_801091d4;
    local_30[0] = _DAT_801091d8;
    local_30[1] = _DAT_801091dc;
    local_30[2] = _DAT_801091e0;
    local_30[3] = _DAT_801091e4;
    local_20 = _DAT_801091e8;
    local_1c = _DAT_801091ec;
    uVar3 = local_30[*(byte *)(param_1 + 7)];
    do {
      func_0x000318a0(param_1 + 0x2c,local_40,param_1 + 0x48);
      func_0x00027768(uVar3,0,(int)*(short *)(param_1 + 0x32),0);
      func_0x000318a0(param_1 + 0x2c,local_38,param_1 + 0x48);
      func_0x00027768(uVar3,0,(int)*(short *)(param_1 + 0x32),0);
      iVar6 = iVar6 + 1;
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x400;
    } while (iVar6 < 4);
  }
  return;
}

