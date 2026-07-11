// FUN_8010c2dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010c2dc(undefined1 *param_1)

{
  short *psVar1;
  undefined2 uVar2;
  int iVar3;
  int unaff_s0;
  undefined1 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  
  param_1[8] = 2;
  if (_DAT_800ed098 < 2) {
    param_1[4] = 3;
    func_0x80077c40(param_1,0x801393c0,1);
    *(undefined1 *)(unaff_s0 + 0x2b) = 0;
    *(char *)(unaff_s0 + 4) = *(char *)(unaff_s0 + 4) + '\x01';
    FUN_8011e1d4();
    if (*(char *)(unaff_s0 + 1) != '\0') {
      func_0x800518fc();
    }
    *(undefined1 *)(unaff_s0 + 0x2b) = 0;
    FUN_8011e3f4();
    return;
  }
  iVar6 = 0;
  param_1[9] = 2;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  if (param_1[8] != '\0') {
    puVar5 = (undefined2 *)&DAT_80135bd4;
    puVar4 = param_1;
    do {
      iVar6 = iVar6 + 1;
      iVar3 = func_0x8007aae8();
      *(int *)(puVar4 + 0xc0) = iVar3;
      *(undefined2 *)(iVar3 + 6) = *puVar5;
      **(undefined2 **)(puVar4 + 0xc0) = puVar5[1];
      *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 2) = puVar5[2];
      *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 4) = puVar5[3];
      *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 8) = 0;
      *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 0xc) = 0;
      *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 0x38) = 0x1000;
      *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 0x3c) = 0x1000;
      psVar1 = puVar5 + 4;
      puVar5 = puVar5 + 5;
      func_0x80051b04(*(undefined4 *)(puVar4 + 0xc0),0xc,(int)*psVar1);
      puVar4 = puVar4 + 4;
    } while (iVar6 < (int)(uint)(byte)param_1[8]);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0x800;
  *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3a) = 0x1000;
  uVar2 = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2);
  *(undefined2 *)(param_1 + 0x2e) = 0x3664;
  *(undefined2 *)(param_1 + 0x32) = 0xf830;
  *(undefined2 *)(param_1 + 0x36) = 0x25c0;
  *param_1 = 1;
  *(undefined2 *)(param_1 + 0x80) = 0x58;
  *(undefined2 *)(param_1 + 0xb8) = 0x1000;
  *(undefined2 *)(param_1 + 0xba) = 0x1000;
  *(undefined2 *)(param_1 + 0xbc) = 0x1000;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x82) = 0xb0;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x60) = uVar2;
  return;
}

