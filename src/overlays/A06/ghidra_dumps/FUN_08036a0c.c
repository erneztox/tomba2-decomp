// FUN_08036a0c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08036a0c(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[5] == '\0') {
    iVar2 = func_0x000519e0(param_1,4,_DAT_800ecfb8,0x80142258);
    uVar1 = _DAT_800ecfbc;
    if (iVar2 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x7c) = 0x8014da1c;
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    *(undefined2 *)(param_1 + 0x74) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(param_1 + 0x76) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(param_1 + 0x36);
  }
  else if (param_1[5] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x74);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x76);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x6a);
  func_0x000518fc(param_1);
  func_0x00041718(param_1,0,0);
  *param_1 = 2;
  *(undefined2 *)(param_1 + 0x80) = 0x60;
  *(undefined2 *)(param_1 + 0x82) = 0xc0;
  *(undefined2 *)(param_1 + 0x84) = 0xa0;
  *(undefined2 *)(param_1 + 0x86) = 0x100;
  func_0x00041ac0(param_1);
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  func_0x0004130c(param_1,1);
  param_1[0x5f] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0xbf] = 0;
  iVar2 = func_0x00136c10(param_1);
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 != 0) {
    param_1[5] = 5;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[4] = 1;
  }
  return;
}

