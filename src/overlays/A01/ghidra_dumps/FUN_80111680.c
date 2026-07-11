// FUN_80111680

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80111990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80111680(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint in_v1;
  uint extraout_v1;
  int unaff_s0;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      bVar1 = param_1[6];
      if (bVar1 == 1) {
        param_1[6] = 2;
        iVar3 = func_0x80040cdc(param_1,0x8013995c,0x80135f24);
        param_1[0x70] = 1;
        if (iVar3 != 0) {
          func_0x80077e7c(1);
        }
        in_v1 = _DAT_00000015;
        *(undefined2 *)(_DAT_00000015 + 0x2c) = uRam0000002f;
        unaff_s0 = 1;
        sVar2 = _DAT_00000033;
        goto LAB_8011a948;
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          FUN_8011a924();
          return;
        }
        if (param_1[0x2b] == '\x03') {
          param_1[6] = 1;
          func_0x80042354(1,1);
          FUN_8011a924();
          return;
        }
      }
      else {
        if (bVar1 != 2) {
          FUN_8011a924();
          return;
        }
        func_0x80041098(param_1);
        if (param_1[0x70] == -1) goto LAB_80111974;
      }
    }
    else {
      sVar2 = 2;
      if (bVar1 < 2) {
        if (bVar1 != 0) goto LAB_8011a948;
        bVar1 = param_1[6];
        if (bVar1 == 1) {
          FUN_8011a8e4(param_1,0x8013995c,0x80135d88);
          return;
        }
        if (1 < bVar1) {
          if (bVar1 != 2) {
            FUN_8011a924();
            return;
          }
          func_0x80041098(param_1);
          if (param_1[0x70] != -1) {
            FUN_8011a924();
            return;
          }
LAB_80111974:
          param_1[6] = 0;
          func_0x80042310();
          FUN_8011a924();
          return;
        }
        if (bVar1 != 0) {
          FUN_8011a924();
          return;
        }
        if (param_1[0x2b] == '\x03') {
          param_1[6] = 1;
          FUN_8011a8bc();
          return;
        }
      }
      else {
        if (bVar1 != 2) {
LAB_8011a948:
          *(short *)(in_v1 + 0x2e) = sVar2 + -0x40;
          *(undefined2 *)(in_v1 + 0x30) = *(undefined2 *)(unaff_s0 + 0x36);
          *(undefined2 *)(param_1 + 0x84) = 0xb4;
          *(undefined2 *)(param_1 + 0x86) = 0xb4;
          param_1[0x29] = 0;
          param_1[0x2b] = 0;
          param_1[4] = param_1[4] + '\x01';
          if (param_1[0x5e] == '\0') {
            param_1[5] = 4;
          }
          *(short *)(param_1 + 0x84) = *(short *)(param_1 + 0x84) << 1;
          *(short *)(param_1 + 0x86) = *(short *)(param_1 + 0x86) << 1;
          FUN_8012cb14();
          return;
        }
        FUN_8011a4ac(param_1);
      }
    }
    func_0x8007778c(param_1);
    func_0x8004190c(param_1);
    func_0x800518fc(param_1);
    param_1[0x2b] = 0;
    in_v1 = extraout_v1;
code_r0x8011a974:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(in_v1) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      return;
    }
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) goto code_r0x8011a974;
    if (DAT_800bf873 == '\0') {
      iVar3 = func_0x800519e0(param_1,0xd,_DAT_800ecfdc,0x80135a0c);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfe0;
        func_0x80077c40(param_1,0x8013995c,0);
        *param_1 = 9;
        *(undefined2 *)(param_1 + 0x80) = 0x96;
        *(undefined2 *)(param_1 + 0x82) = 300;
        *(undefined2 *)(param_1 + 0x84) = 0x80;
        *(undefined2 *)(param_1 + 0x86) = 0x100;
        *(undefined2 *)(param_1 + 0x56) = 0x530;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        param_1[0x2b] = 0;
        param_1[0x29] = 0;
        param_1[4] = param_1[4] + '\x01';
        in_v1 = (uint)DAT_800bf8e5;
        if (in_v1 == 0xff) {
          if (DAT_800bfa3e < 3) {
            param_1[5] = 1;
          }
          else if (DAT_800bf873 == '\0') {
            param_1[5] = 2;
          }
          else {
            param_1[5] = 3;
          }
        }
        else {
          param_1[5] = 0;
        }
        goto code_r0x8011a974;
      }
    }
    else {
      iVar3 = func_0x800519e0(param_1,0xd,_DAT_800ecfe4,0x80135a0c);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfe0;
        func_0x80077c40(param_1,0x8013995c,6);
        FUN_8011a708();
        return;
      }
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) goto code_r0x8011a974;
    func_0x8007a624(param_1);
  }
  return;
}

