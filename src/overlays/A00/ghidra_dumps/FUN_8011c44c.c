// FUN_8011c44c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8011c44c(undefined1 *param_1,undefined4 param_2,undefined2 *param_3)

{
  short sVar1;
  int iVar2;
  undefined1 *puVar3;
  short unaff_s1;
  int iVar4;
  
  param_1[8] = 2;
  if (_DAT_800ed098 < 2) {
    param_1[4] = 3;
    iVar2 = func_0x80072ddc(param_1,0,3,0x11);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0x8012e478;
      *(undefined1 *)(iVar2 + 3) = 0;
      *(undefined1 *)(iVar2 + 0x5e) = 0;
      *(short *)(iVar2 + 0x40) = (unaff_s1 >> 4) + 2;
      *(undefined2 *)(iVar2 + 0x2e) = *param_3;
      *(undefined2 *)(iVar2 + 0x32) = param_3[1];
      *(undefined2 *)(iVar2 + 0x36) = param_3[2];
    }
    return iVar2;
  }
  param_1[9] = 2;
  param_1[0xd] = 4;
  *param_1 = 1;
  *(undefined2 *)(param_1 + 0x80) = 0x50;
  *(undefined2 *)(param_1 + 0x82) = 0xa0;
  *(undefined2 *)(param_1 + 0x84) = 200;
  *(undefined2 *)(param_1 + 0x86) = 0xdc;
  iVar2 = *(int *)(param_1 + 0x10);
  param_1[0xb] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[4] = param_1[4] + '\x01';
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar2 + 0xc4) + 0x2c);
  *(short *)(param_1 + 0x32) = *(short *)(*(int *)(iVar2 + 0xc4) + 0x30) + -0x3c;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(iVar2 + 0xc4) + 0x34);
  iVar4 = 0;
  sVar1 = *(short *)(*(int *)(iVar2 + 0xc4) + 10);
  *(undefined2 *)(param_1 + 0xb8) = 0x1000;
  *(undefined2 *)(param_1 + 0xba) = 0x1000;
  *(undefined2 *)(param_1 + 0xbc) = 0x1000;
  *(short *)(param_1 + 0x56) = sVar1 + 0x400;
  puVar3 = param_1;
  if (param_1[8] != '\0') {
    do {
      iVar2 = func_0x8007aae8();
      *(int *)(puVar3 + 0xc0) = iVar2;
      *(undefined2 *)(iVar2 + 6) = 0xffff;
      **(undefined2 **)(puVar3 + 0xc0) = 0;
      if (iVar4 == 0) {
        *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 2) = 0xff86;
        iVar2 = FUN_8012552c();
        return iVar2;
      }
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 2) = 0;
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 4) = 0;
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 8) = 0;
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 0xc) = 0;
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 0x38) = 0x1000;
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 0x3a) = 0x1000;
      iVar2 = iVar4 + 0x50;
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 0x3c) = 0x1000;
      iVar4 = iVar4 + 1;
      *(undefined1 *)(*(int *)(puVar3 + 0xc0) + 0x3f) = 0;
      func_0x80051b04(*(undefined4 *)(puVar3 + 0xc0),0xc,iVar2);
      puVar3 = puVar3 + 4;
    } while (iVar4 < (int)(uint)(byte)param_1[8]);
  }
  param_1[0x5e] = 0;
  return 0;
}

