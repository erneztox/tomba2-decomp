// FUN_801112e0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801112e0(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_v1;
  uint extraout_v1_00;
  uint extraout_v1_01;
  undefined2 *extraout_v1_02;
  undefined2 *puVar7;
  uint unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  undefined8 uVar8;
  
  uVar6 = (uint)(byte)param_1[4];
  if (uVar6 == 1) {
    if (param_1[3] == '\0') {
      FUN_8011a168(param_1);
      uVar6 = extraout_v1_00;
    }
    if (param_1[1] != '\0') {
      func_0x800518fc(param_1);
      uVar6 = extraout_v1_01;
    }
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
  }
  else if (uVar6 < 2) {
    if (uVar6 == 0) {
      unaff_s1 = 0x800ecf58;
      iVar3 = func_0x800519e0(param_1,0xf,_DAT_800ecf94,0x801356ac);
      if (iVar3 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x80040cdc(param_1,0x801393c0,0x800a3d18);
      func_0x80041718(param_1,0x14,0);
      uVar6 = (uint)(byte)param_1[3];
      param_1[0x7b] = 0x14;
      param_1[0xb] = 0x40;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0xaa;
      *(undefined2 *)(param_1 + 0x82) = 0x154;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      *(undefined2 *)(param_1 + 0x86) = 0xf0;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      if (uVar6 == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0x30400000;
        *(undefined4 *)(param_1 + 0x30) = 0xef520000;
        *(undefined4 *)(param_1 + 0x34) = 0x39c30000;
        *(undefined2 *)(param_1 + 0x56) = 0xc00;
        func_0x800416a8(param_1,0xffffffff,0);
        func_0x80041718(param_1,8,0);
        func_0x80040d68(param_1,0x80135c48);
        param_1[0x70] = 2;
        uVar6 = extraout_v1;
      }
      param_1[4] = param_1[4] + '\x01';
    }
  }
  else {
    if (uVar6 == 2) {
      return;
    }
    if (uVar6 == 3) {
      func_0x8007a624(param_1);
      return;
    }
  }
  if (uVar6 != unaff_s1) {
    if ((int)uVar6 < 2) {
      if (uVar6 != 0) goto LAB_80123638;
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x80040cdc(param_1,0x801393c0,0x800a3d18);
      if (param_1[3] == '\0') {
        param_1[0x7b] = (char)unaff_s1;
        _DAT_00000040 = 0xe53e0000;
        _DAT_00000044 = 0x23400000;
        DAT_00000015 = DAT_00000015 + '\x01';
        func_0x8007778c(0x10);
        return;
      }
      param_1[0x7b] = 0;
      uVar8 = func_0x800519e0(param_1,0xf,_DAT_800ecfb4,0x80135894);
      puVar7 = (undefined2 *)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 == 0) {
        param_1[0xb] = 0x40;
        *param_1 = 9;
        *(undefined2 *)(param_1 + 0x80) = 0xaa;
        *(undefined2 *)(param_1 + 0x82) = 0x154;
        *(undefined2 *)(param_1 + 0x84) = 0x90;
        *(undefined2 *)(param_1 + 0x86) = 0xf0;
        bVar1 = param_1[3];
        uVar6 = (uint)bVar1;
        param_1[0x2b] = 0;
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        param_1[4] = param_1[4] + '\x01';
        if (uVar6 == 0) {
          *(undefined4 *)(param_1 + 0x2c) = 0x316a0000;
          *(undefined4 *)(param_1 + 0x30) = 0xef520000;
          *(undefined4 *)(param_1 + 0x34) = 0x3d540000;
          param_1[0x2a] = 0xf;
          *(undefined2 *)(param_1 + 0x56) = 0x400;
          *(undefined2 *)(param_1 + 0x40) = 0;
          uVar2 = func_0x80051b04(*(undefined4 *)(param_1 + ((byte)param_1[9] - 1) * 4 + 0xc0),1,
                                  0x12);
          puVar7 = extraout_v1_02;
        }
        else {
          uVar2 = 1;
          if (uVar6 == 1) {
            uVar8 = func_0x8007a980(1,5,0);
            puVar7 = (undefined2 *)((ulonglong)uVar8 >> 0x20);
            iVar3 = (int)uVar8;
            if (iVar3 != 0) {
              *(undefined1 *)(iVar3 + 2) = 3;
              *(undefined2 *)(iVar3 + 0x2e) = 0x2fee;
              *(undefined2 *)(iVar3 + 0x32) = 0xef98;
              *(undefined2 *)(iVar3 + 0x36) = 0x3f16;
              *(undefined4 *)(iVar3 + 0x1c) = 0x80112100;
              *(byte *)(iVar3 + 3) = bVar1;
              *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
              *param_1 = 2;
              *(undefined4 *)(param_1 + 0x2c) = 0x30700000;
              *(undefined4 *)(param_1 + 0x30) = 0xef520000;
              *(undefined4 *)(param_1 + 0x34) = 0x3a340000;
              param_1[0x2a] = 0xf;
              *(undefined2 *)(param_1 + 0x56) = 0xc00;
              uVar4 = FUN_8012b654(param_1,1);
              *(undefined4 *)(param_1 + 0x14) = uVar4;
              func_0x80041718(param_1,param_1[0x7b],0);
              goto LAB_80123638;
            }
            uVar2 = 2;
            param_1[4] = 2;
          }
        }
LAB_801235c0:
        *puVar7 = uVar2;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = *(undefined2 *)(uVar6 + 4);
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = *(undefined2 *)(uVar6 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (uVar6 != 2) {
      if (uVar6 != 3) goto LAB_80123638;
      func_0x8007a624(param_1);
    }
    return;
  }
  uVar5 = (uint)(byte)param_1[3];
  uVar8 = CONCAT44(uVar6,uVar5);
  if (uVar5 == 0) {
    uVar8 = FUN_80123078(param_1);
  }
  else if (uVar5 == uVar6) {
    FUN_8012322c(param_1);
    if (param_1[1] != '\0') {
      func_0x800518fc(param_1);
    }
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
    goto LAB_80123638;
  }
  while( true ) {
    *(short *)((int)((ulonglong)uVar8 >> 0x20) + 2) = (short)uVar8;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = *(undefined2 *)(unaff_s2 + 6);
    unaff_s3 = unaff_s3 + 1;
    uVar6 = unaff_s1 + 8;
    if (2 < unaff_s3) break;
    if (unaff_s5 == 0) {
      func_0x80051b04(*(undefined4 *)(param_1 + 0xc4));
      puVar7 = *(undefined2 **)(param_1 + 0xc4);
      uVar2 = *(undefined2 *)(unaff_s1 + 10);
      param_1 = param_1 + 4;
      goto LAB_801235c0;
    }
    func_0x80051b04(*(undefined4 *)(param_1 + 0xc4));
    **(undefined2 **)(param_1 + 0xc4) = *(undefined2 *)(unaff_s2 + 10);
    uVar8 = CONCAT44(*(undefined4 *)(param_1 + 0xc4),(uint)*(ushort *)(unaff_s2 + 0xc));
    param_1 = param_1 + 4;
    unaff_s1 = uVar6;
    unaff_s2 = unaff_s2 + 8;
  }
LAB_80123638:
  *(char *)(unaff_s6 + 0x5e) = (char)unaff_s5;
  return;
}

