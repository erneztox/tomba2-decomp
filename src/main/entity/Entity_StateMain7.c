/**
 * @brief Entity state main variant 7: complex dispatch (202L)
 * @note Original: func_8005C8A0 at 0x8005C8A0
 */
// Entity_StateMain7



void FUN_8005c8a0(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 5) == '2') {
      *(undefined1 *)(param_1 + 0x181) = 1;
    }
    iVar6 = 0;
    if (*(char *)(param_1 + 0x79) != '\x02') {
      iVar6 = FUN_80076d68(param_1);
    }
    iVar5 = FUN_800557ec(param_1);
    if (iVar5 == 0) {
      if ((iVar6 == 0) || (iVar6 = FUN_8005376c(param_1), iVar6 != 0)) goto LAB_8005cc64;
      iVar6 = FUN_80055704(param_1,0);
      if (iVar6 == 2) {
        *(undefined1 *)(param_1 + 0x146) = 2;
        FUN_80053670(param_1,1,0);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        goto LAB_8005cc64;
      }
      cVar2 = *(char *)(param_1 + 0x181);
      goto joined_r0x8005cac4;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) goto LAB_8005cc64;
      if (*(char *)(param_1 + 5) == '2') {
        *(undefined1 *)(param_1 + 0x181) = 1;
      }
      FUN_80055e28(param_1,0);
      *(byte *)(param_1 + 0x147) = *(byte *)(param_1 + 0x14a) & 1;
      if (*(char *)(param_1 + 0x181) == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = 2;
      }
      FUN_8005490c(param_1,1,uVar9);
      FUN_800551c4(param_1);
      iVar6 = FUN_800557ec(param_1);
      if (iVar6 != 0) {
        FUN_80074590(0x1d,0,0);
        *(undefined1 *)(param_1 + 5) = 6;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        *(undefined1 *)(param_1 + 0x145) = 1;
        *(undefined1 *)(param_1 + 0x181) = 0;
        *(undefined2 *)(param_1 + 0x6a) = 0;
      }
      iVar6 = FUN_80055704(param_1,1);
      if (iVar6 == 0) {
        DAT_1f800252 = 0;
        *(undefined1 *)(param_1 + 0xbf) = 0;
        *(undefined1 *)(param_1 + 0x146) = 3;
        FUN_80053670(param_1,0,8);
        if (*(char *)(param_1 + 0x181) == '\0') {
          uVar9 = 0;
        }
        else {
          uVar9 = 2;
        }
        FUN_8005490c(param_1,0,uVar9);
        *(undefined1 *)(param_1 + 0xbe) = 0;
        *(undefined1 *)(param_1 + 6) = 1;
        goto LAB_8005cc64;
      }
      if (0 < iVar6) {
        if (iVar6 == 2) {
          FUN_80076d68(param_1);
        }
        goto LAB_8005cc64;
      }
      if (iVar6 != -1) goto LAB_8005cc64;
      cVar2 = *(char *)(param_1 + 0x181);
joined_r0x8005cac4:
      if (cVar2 == '\0') {
        FUN_80054d14(param_1,2,6);
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 0x146) = 0;
      }
      else {
        FUN_80054d14(param_1,0xdc,6);
        *(undefined1 *)(param_1 + 5) = 0x1d;
        *(undefined1 *)(param_1 + 6) = 1;
        *(undefined1 *)(param_1 + 0x146) = 0;
        *(undefined2 *)(param_1 + 0x4a) = 0;
      }
      goto LAB_8005cc64;
    }
    if (bVar1 != 0) goto LAB_8005cc64;
    if (*(char *)(param_1 + 5) == '2') {
      *(undefined1 *)(param_1 + 0x181) = 1;
      *(undefined2 *)(param_1 + 0x4a) = 0;
    }
    DAT_1f800252 = 0;
    *(undefined1 *)(param_1 + 0xbf) = 0;
    *(undefined1 *)(param_1 + 0xbe) = 0;
    FUN_80055e28(param_1,0);
    *(byte *)(param_1 + 0x147) = *(byte *)(param_1 + 0x14a) & 1;
    *(byte *)(param_1 + 0x149) = *(byte *)(param_1 + 0x149) & 1 | 2;
    FUN_800551c4(param_1);
    if (*(char *)(param_1 + 0x175) != '\0') {
      *(undefined1 *)(param_1 + 0x146) = 2;
      FUN_80053670(param_1,1,0);
      if (*(char *)(param_1 + 0x181) == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = 2;
      }
      FUN_8005490c(param_1,1,uVar9);
      *(undefined1 *)(param_1 + 6) = 2;
      goto LAB_8005cc64;
    }
    *(undefined1 *)(param_1 + 0x146) = 1;
    FUN_80053670(param_1,0,0);
    if (*(char *)(param_1 + 0x181) == '\0') {
      uVar9 = 0;
    }
    else {
      uVar9 = 2;
    }
    FUN_8005490c(param_1,0,uVar9);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    iVar6 = FUN_800557ec(param_1);
    if (iVar6 == 0) goto LAB_8005cc64;
  }
  FUN_80074590(0x1d,0,0);
  *(undefined1 *)(param_1 + 5) = 6;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0x145) = 1;
  *(undefined1 *)(param_1 + 0x181) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
LAB_8005cc64:
  if (*(char *)(param_1 + 0x145) != '\x01') {
    if (*(char *)(param_1 + 0x181) == '\0') {
      if (*(char *)(param_1 + 5) != '\x06') {
        FUN_80055fbc(param_1,*(byte *)(param_1 + 0x14a) | 2);
        FUN_80056b48(param_1,0);
        FUN_80055d5c(param_1);
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
        FUN_8005444c(param_1);
        if (*(char *)(param_1 + 0x147) == '\0') {
          uVar4 = *(short *)(param_1 + 0x142) >> 1;
        }
        else {
          uVar4 = 0x1000U - (*(short *)(param_1 + 0x142) >> 1) & 0xfff;
        }
        *(ushort *)(param_1 + 0x58) = uVar4;
        iVar6 = FUN_800532a0(param_1);
        if (iVar6 != 0) {
          *(undefined1 *)(param_1 + 0x146) = 0;
        }
        FUN_80056c00(param_1,0);
      }
    }
    else {
      uVar8 = (uint)*(short *)(param_1 + 0x44);
      uVar7 = uVar8;
      if ((int)uVar8 < 0) {
        uVar7 = -uVar8;
      }
      sVar3 = (short)(uVar7 - 0x120);
      if ((uVar7 & 0xffff) != 0) {
        if ((int)((uVar7 - 0x120) * 0x10000) < 0) {
          sVar3 = 0;
        }
        if ((int)uVar8 < 1) {
          *(short *)(param_1 + 0x44) = -sVar3;
        }
        else {
          *(short *)(param_1 + 0x44) = sVar3;
        }
      }
      if (DAT_800bf870 == '\0') {
        func_0x8010c89c(param_1,0);
      }
      else if (DAT_800bf870 == '\x06') {
        func_0x8011460c(param_1,0);
      }
      else if (DAT_800bf870 == '\b') {
        func_0x801120c4(param_1,0);
      }
      else if (DAT_800bf870 == '\x0e') {
        func_0x8010b408(param_1,0);
      }
    }
  }
  return;
}
