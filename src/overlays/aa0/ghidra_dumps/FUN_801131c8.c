// FUN_801131c8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_801131c8(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_1[3]) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      param_1[0x29] = 0;
      FUN_8011c5f8();
      return;
    }
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8011c5f8();
      return;
    }
    param_1[4] = 1;
    uVar2 = _DAT_800ecf80;
    param_1[0xd] = 0;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    param_1[0xb] = 0x10;
    param_1[0x47] = 0;
    *(undefined2 *)(param_1 + 0x5a) = 0;
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    func_0x80077b38(param_1,0x8014c808,8);
    uVar4 = (uint)(byte)param_1[3];
    *(undefined2 *)(param_1 + 0x80) = 0x32;
    *(undefined2 *)(param_1 + 0x82) = 100;
    *(undefined2 *)(param_1 + 0x84) = 0x46;
    *(undefined2 *)(param_1 + 0x86) = 100;
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    if (uVar4 < 2) {
      iVar3 = uVar4 * 8;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar3 + -0x7feb76ec);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar3 + -0x7feb76ea);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar3 + -0x7feb76e8);
      param_1[0x2a] = *(undefined1 *)(iVar3 + -0x7feb76e6);
      FUN_8011c5f8();
      return;
    }
    if (uVar4 != 3) {
      FUN_8011c5f8();
      return;
    }
    if (DAT_800bf8bc == -1) {
      param_1[4] = param_1[3];
      FUN_8011c5f8();
      return;
    }
  }
  else if (bVar1 == 2) {
    param_1[1] = 1;
    func_0x80077e7c(param_1);
    bVar1 = param_1[5];
    if (bVar1 != 1) {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          FUN_8011c5f8();
          return;
        }
      }
      else if (bVar1 != 2) {
        return;
      }
      FUN_8011c090(param_1);
      FUN_8011c5f8();
      return;
    }
    if (param_1[6] == '\0') {
      param_1[6] = 1;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      func_0x80077b38(param_1,0x8014c808,0xc);
      FUN_8011c5f8();
      return;
    }
  }
  else {
    if (bVar1 != 3) {
      FUN_8011c5f8();
      return;
    }
    func_0x8007a624(param_1);
  }
  return;
}

