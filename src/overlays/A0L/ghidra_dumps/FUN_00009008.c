// FUN_00009008

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00009008(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  iVar4 = 4;
  if (DAT_800bfa58 == '\0') {
    iVar4 = 3;
  }
  if (*(char *)(param_1 + 0x5e) != '\0') {
    iVar4 = iVar4 + 2;
  }
  func_0x00077b38(param_1,0x8011a6d4,iVar4);
  *(undefined1 *)(param_1 + 0xb) = 0x10;
  *(undefined1 *)(param_1 + 0x47) = 0;
  uVar3 = _DAT_1f800164;
  uVar1 = _DAT_1f800160;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)(param_1 + 0x2e) = uVar1;
  *(undefined2 *)(param_1 + 0x60) = uVar1;
  *(undefined2 *)(param_1 + 0x36) = uVar3;
  *(undefined2 *)(param_1 + 100) = uVar3;
  sVar2 = _DAT_1f800162;
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(undefined2 *)(param_1 + 0x66) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0x40;
    *(short *)(param_1 + 0x32) = sVar2 + -0x96;
    *(short *)(param_1 + 0x62) = sVar2 + -0x96;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x66) = 0x578;
  sVar2 = _DAT_1f800162;
  *(undefined2 *)(param_1 + 0x68) = 0x80;
  *(short *)(param_1 + 0x32) = sVar2;
  *(short *)(param_1 + 0x62) = sVar2;
  return;
}

