// FUN_0803bc70

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803bc70(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined2 *puVar4;
  
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  func_0x00077b38(param_1,0x8014cef0,3);
  *(undefined2 *)(param_1 + 0x5c) = 0;
  param_1[0x47] = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  param_1[8] = 0xec;
  if ((param_1[3] & 0x80) == 0) {
    param_1[0x47] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = 2;
  if ((param_1[3] & 0x40) == 0) {
    uVar2 = 1;
  }
  param_1[0x47] = uVar2;
  bVar1 = param_1[3];
  *param_1 = 1;
  *(undefined2 *)(param_1 + 0x80) = 0x3c;
  *(undefined2 *)(param_1 + 0x84) = 0x3c;
  param_1[3] = bVar1 & 0x3f;
  *(undefined2 *)(param_1 + 0x82) = 0x78;
  *(undefined2 *)(param_1 + 0x86) = 0x78;
  puVar4 = *(undefined2 **)((uint)(bVar1 & 0x3f) * 8 + -0x7feb7190);
  *(undefined2 *)(param_1 + 0x2e) = *puVar4;
  *(undefined2 *)(param_1 + 0x32) = puVar4[1];
  *(undefined2 *)(param_1 + 0x36) = puVar4[2];
  func_0x00041ac0(param_1);
  *(undefined2 *)(param_1 + 0x7e) = 0x1000;
  *(undefined2 *)(param_1 + 0x7c) = 0x1000;
  *(undefined2 *)(param_1 + 0x7a) = 0x1000;
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined2 *)(param_1 + 100) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xd] = 1;
  param_1[0xb] = 0xff;
  iVar3 = func_0x000310f4(0x703,0);
  if (iVar3 != 0) {
    *(undefined1 **)(iVar3 + 0x10) = param_1;
    *(int *)(param_1 + 0x10) = iVar3;
  }
  param_1[0x29] = 0;
  param_1[4] = param_1[4] + '\x01';
  return;
}

