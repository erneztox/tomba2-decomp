// FUN_80132358

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80132348(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  
  bVar1 = param_1[4];
  puVar7 = (undefined1 *)(uint)bVar1;
  uVar3 = (ushort)(puVar7 < (undefined1 *)0x2);
  if (puVar7 != (undefined1 *)0x1) {
    if (puVar7 >= (undefined1 *)0x2) {
      uVar3 = 3;
      if (puVar7 != (undefined1 *)0x2) {
        if (puVar7 != (undefined1 *)0x3) goto LAB_8013b520;
        func_0x8007a624(param_1);
      }
      return;
    }
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_800ecf58;
      iVar5 = func_0x800519e0(param_1,3,_DAT_800ecfd4,0x8014aabc);
      if (iVar5 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfd8;
      uVar3 = 3;
      if (DAT_800bf873 == '\0') {
        if (((int)(uint)DAT_800bfa13 >> (param_1[3] & 0x1f) & 1U) != 0) {
          param_1[0x5e] = 0;
          FUN_8013b3d8(param_1,0x8001b7b0,0);
          return;
        }
        FUN_8013af18(param_1,1,0x1f);
        func_0x80077c40(param_1,0x8001b7b0,1);
        *param_1 = 1;
        param_1[0x80] = 0x90;
        param_1[0x81] = 1;
        param_1[0x82] = 0x20;
        param_1[0x83] = 3;
        param_1[0x84] = 0xb4;
        param_1[0x85] = 0;
        param_1[0x86] = 0xb4;
        param_1[0x87] = 0;
        param_1[0x29] = 0;
        param_1[0x2b] = 0;
        param_1[4] = param_1[4] + 1;
        if (param_1[0x5e] != 0) {
          return;
        }
        uVar3 = 4;
        param_1[5] = 4;
      }
      else {
        param_1[4] = 3;
      }
    }
    goto LAB_8013b520;
  }
  iVar5 = func_0x8007778c(param_1);
  uVar3 = 0;
  if (iVar5 != 0) {
    func_0x80076d68(param_1);
    bVar2 = param_1[6];
    if (bVar2 == 1) {
      sVar4 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar4 + -1;
      if (sVar4 == 1) {
        *param_1 = 2;
        param_1[6] = param_1[6] + 1;
      }
    }
    else {
      if (bVar2 < 2) {
        if (bVar2 != 0) {
          sVar4 = FUN_80142a94(param_1);
          if (sVar4 == -1) {
            _DAT_00000005 = 0xa01;
          }
          else {
            uVar3 = 3;
            if (sVar4 != 0) goto LAB_8013b520;
          }
          return;
        }
      }
      else {
        if (bVar2 != 2) goto LAB_80132560;
        *param_1 = bVar1;
        param_1[6] = 0;
        DAT_800bf809 = 0;
      }
      if (param_1[0x2b] == 3) {
        param_1[0x40] = 0x1e;
        param_1[0x41] = 0;
        param_1[6] = param_1[6] + 1;
        uVar6 = 0x61;
        if (param_1[0x5e] == 0) {
          uVar6 = 0x62;
        }
        func_0x8004ed94(uVar6,0x41);
        DAT_800bf809 = 1;
        FUN_8013b4f8();
        return;
      }
    }
LAB_80132560:
    FUN_8013b024(param_1,0x1f);
    uVar3 = func_0x800518fc(param_1);
  }
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
LAB_8013b520:
  *(ushort *)(puVar7 + 6) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

