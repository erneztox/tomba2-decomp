// FUN_8011a40c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011a40c(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 *extraout_v1;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  undefined8 uVar8;
  
  bVar1 = param_1[4];
  uVar6 = 1;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_80123638;
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x80040cdc(param_1,0x801393c0,0x800a3d18);
      if (param_1[3] == '\0') {
        param_1[0x7b] = 1;
        _DAT_00000040 = 0xe53e0000;
        _DAT_00000044 = 0x23400000;
        DAT_00000015 = DAT_00000015 + '\x01';
        func_0x8007778c(0x10);
        return;
      }
      param_1[0x7b] = 0;
      uVar8 = func_0x800519e0(param_1,0xf,_DAT_800ecfb4,0x80135894);
      puVar5 = (undefined2 *)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 == 0) {
        param_1[0xb] = 0x40;
        *param_1 = 9;
        *(undefined2 *)(param_1 + 0x80) = 0xaa;
        *(undefined2 *)(param_1 + 0x82) = 0x154;
        *(undefined2 *)(param_1 + 0x84) = 0x90;
        *(undefined2 *)(param_1 + 0x86) = 0xf0;
        bVar1 = param_1[3];
        uVar7 = (uint)bVar1;
        param_1[0x2b] = 0;
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        param_1[4] = param_1[4] + '\x01';
        if (uVar7 == 0) {
          *(undefined4 *)(param_1 + 0x2c) = 0x316a0000;
          *(undefined4 *)(param_1 + 0x30) = 0xef520000;
          *(undefined4 *)(param_1 + 0x34) = 0x3d540000;
          param_1[0x2a] = 0xf;
          *(undefined2 *)(param_1 + 0x56) = 0x400;
          *(undefined2 *)(param_1 + 0x40) = 0;
          uVar2 = func_0x80051b04(*(undefined4 *)(param_1 + ((byte)param_1[9] - 1) * 4 + 0xc0),1,
                                  0x12);
          puVar5 = extraout_v1;
        }
        else {
          uVar2 = 1;
          if (uVar7 == 1) {
            uVar8 = func_0x8007a980(1,5,0);
            puVar5 = (undefined2 *)((ulonglong)uVar8 >> 0x20);
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
        *puVar5 = uVar2;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = *(undefined2 *)(uVar7 + 4);
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = *(undefined2 *)(uVar7 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (bVar1 != 2) {
      if (bVar1 != 3) goto LAB_80123638;
      func_0x8007a624(param_1);
    }
    return;
  }
  uVar7 = (uint)(byte)param_1[3];
  if (uVar7 == 0) {
    uVar8 = FUN_80123078(param_1);
  }
  else {
    if (uVar7 == 1) {
      FUN_8012322c(param_1);
      if (param_1[1] != '\0') {
        func_0x800518fc(param_1);
      }
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      goto LAB_80123638;
    }
    uVar8 = CONCAT44(1,uVar7);
  }
  while( true ) {
    *(short *)((int)((ulonglong)uVar8 >> 0x20) + 2) = (short)uVar8;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = *(undefined2 *)(unaff_s2 + 6);
    unaff_s3 = unaff_s3 + 1;
    uVar7 = uVar6 + 8;
    if (2 < unaff_s3) break;
    if (unaff_s5 == 0) {
      func_0x80051b04(*(undefined4 *)(param_1 + 0xc4));
      puVar5 = *(undefined2 **)(param_1 + 0xc4);
      uVar2 = *(undefined2 *)(uVar6 + 10);
      param_1 = param_1 + 4;
      goto LAB_801235c0;
    }
    func_0x80051b04(*(undefined4 *)(param_1 + 0xc4));
    **(undefined2 **)(param_1 + 0xc4) = *(undefined2 *)(unaff_s2 + 10);
    uVar8 = CONCAT44(*(undefined4 *)(param_1 + 0xc4),(uint)*(ushort *)(unaff_s2 + 0xc));
    param_1 = param_1 + 4;
    uVar6 = uVar7;
    unaff_s2 = unaff_s2 + 8;
  }
LAB_80123638:
  *(char *)(unaff_s6 + 0x5e) = (char)unaff_s5;
  return;
}

