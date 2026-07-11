// FUN_801145dc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_801145dc(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint unaff_s1;
  int unaff_s4;
  int unaff_s5;
  
  bVar1 = param_1[4];
  uVar5 = (ushort)(bVar1 < 2);
  if (bVar1 != 1) {
    if (bVar1 >= 2) {
      uVar5 = 3;
      if (bVar1 != 2) {
        if (bVar1 != 3) goto LAB_8011d818;
        func_0x8007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar6 = func_0x800519e0(param_1,0xd,_DAT_800ecfb8,0x8014c0bc);
      uVar2 = _DAT_800ecfbc;
      if (iVar6 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x7c) = 0x8014de54;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      param_1[0xb] = 0x40;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 0xa0;
      *(undefined2 *)(param_1 + 0x86) = 0x120;
      *(undefined4 *)(param_1 + 0x2c) = 0x26de0000;
      *(undefined4 *)(param_1 + 0x30) = 0xfc040000;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0x16440000;
      if (param_1[3] == '\0') {
        *(undefined2 *)(param_1 + 0x56) = 0xc00;
        param_1[0x7b] = 7;
        FUN_8011d6a4();
        return;
      }
      if (param_1[3] != '\x01') {
        func_0x80077b38(param_1,0x8014c808,0x17);
        *(undefined2 *)(param_1 + 0x2e) = 0x1040;
        *(undefined2 *)(param_1 + 0x32) = 0xf544;
        if ((*(ushort *)(param_1 + 0x68) & 1) == 0) {
          *(undefined2 *)(param_1 + 0x36) = 0x1bd1;
          *(undefined2 *)(param_1 + 0x44) = 0;
          *(undefined2 *)(param_1 + 0x40) = 1;
          *(undefined2 *)(param_1 + 100) = 0;
          param_1[0x2a] = 3;
          param_1[0x47] = 1;
          param_1[5] = 3;
          param_1[6] = 1;
          func_0x8004766c(param_1);
          func_0x80049760(param_1);
          return;
        }
        if ((_DAT_800ecfd2 & 2) == 0) {
          uVar7 = (uint)*(short *)(_DAT_800ed01c + 8);
          if (0x800 < (int)uVar7) {
            uVar7 = uVar7 | 0xf000;
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
          switch(DAT_800ecf5e) {
          case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(ushort *)(_DAT_800ed01c + 8) = (ushort)uVar7 & 0xfff;
          FUN_801314b4(&DAT_800ecf58);
          if (unaff_s5 != 0) {
            iVar6 = func_0x80083e80((int)(short)(ushort)uVar7);
            iVar6 = (iVar6 * -(int)*(short *)(_DAT_800ed020 + 4) >> 0xc) - unaff_s4;
            if (iVar6 * 0x10000 < 0) {
              FUN_8012fd38();
              return;
            }
            _DAT_800e7eb2 = _DAT_800e7eb2 + (short)iVar6;
          }
          if (_DAT_800ecfd0 != 0) {
            uVar4 = FUN_801308e0(&DAT_800ecf58);
            *(undefined1 *)(uVar7 + 6) = uVar4;
            func_0x80072efc();
            *(undefined2 *)(uVar7 + 0x40) = 0xf;
            FUN_80138e70();
            return;
          }
          FUN_80131578(&DAT_800ecf58);
        }
        return;
      }
      *(undefined2 *)(param_1 + 0x56) = 0x400;
      param_1[0x7b] = 0;
      func_0x80041718(param_1,param_1[0x7b],0);
      uVar5 = (byte)param_1[4] + 1;
      param_1[4] = (char)uVar5;
    }
    goto LAB_8011d818;
  }
  if (param_1[3] == '\0') {
    FUN_8011d108(param_1);
    goto LAB_8011d7e8;
  }
  if (param_1[3] != '\x01') goto LAB_8011d7e8;
  cVar3 = param_1[5];
  if (cVar3 == '\0') {
    if ((DAT_1f800207 != '\n') || (7999 < _DAT_1f800160)) {
      iVar6 = func_0x8007778c(param_1);
      if (iVar6 == 0) {
        cVar3 = '\x03';
        if (DAT_800bf8bc == -1) {
          param_1[4] = 3;
code_r0x8011d7dc:
          if (cVar3 != '\0') {
LAB_8011d7e8:
            func_0x80074590();
            return;
          }
          if ((unaff_s1 & 1) != 0) {
            func_0x80049674(param_1);
            *(undefined2 *)(param_1 + 100) = 0;
            FUN_801267b8();
            return;
          }
          func_0x80049760(param_1);
          uVar5 = 4;
          goto LAB_8011d818;
        }
      }
      else if (param_1[0x2b] == '\x03') {
        param_1[0x7a] = 0x14;
        func_0x80042354(1,1);
        func_0x80040d68(param_1,0x80148d2c);
        param_1[0x70] = 2;
        cVar3 = param_1[1];
        goto code_r0x8011d7dc;
      }
    }
  }
  else {
    if (cVar3 != '\x01') goto code_r0x8011d7dc;
    param_1[1] = 1;
    func_0x80077e7c(param_1);
    if (param_1[0x70] == -1) {
      param_1[5] = param_1[5] + -1;
    }
  }
  func_0x80041098(param_1);
  func_0x8004190c(param_1);
  uVar5 = (ushort)(byte)param_1[1];
  if (param_1[1] != 0) {
    func_0x800518fc(param_1);
    uVar5 = FUN_8011d82c(param_1);
  }
  param_1[0x2b] = 0;
LAB_8011d818:
  *(ushort *)(param_1 + 100) = uVar5;
  func_0x80077b38(param_1,0x8014c808,0x17);
  *(undefined2 *)(param_1 + 0x44) = 0x800;
  *param_1 = 1;
  *(undefined2 *)(param_1 + 0x80) = 0x1e;
  *(undefined2 *)(param_1 + 0x82) = 0x3c;
  *(undefined2 *)(param_1 + 0x84) = 0x3c;
  *(undefined2 *)(param_1 + 0x86) = 0x5a;
  param_1[5] = 2;
  param_1[6] = 4;
  return;
}

