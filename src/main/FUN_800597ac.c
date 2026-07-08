
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800597ac(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  if (((*(ushort *)(param_1 + 0x17e) & 0x20) != 0) && (*(char *)(param_1 + 0x179) != '\0')) {
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 9);
  }
  FUN_800517bc(0x1f800000,(int)*(short *)(param_1 + 0xb8),(int)*(short *)(param_1 + 0xba),
               (int)*(short *)(param_1 + 0xbc));
  _DAT_1f8000c0 = *(undefined2 *)(param_1 + 0x54);
  _DAT_1f8000c2 = *(undefined2 *)(param_1 + 0x56);
  _DAT_1f8000c4 = *(undefined2 *)(param_1 + 0x58);
  FUN_80085480(&DAT_1f8000c0,&DAT_1f800040);
  _DAT_1f8000c2 = 0;
  if ((*(byte *)(param_1 + 0x177) & 1) != 0) {
    _DAT_1f8000c2 = *(undefined2 *)(param_1 + 0x14e);
  }
  _DAT_1f8000c0 = 0;
  _DAT_1f8000c4 = 0;
  FUN_800851f0(&DAT_1f8000c0,&DAT_1f800020);
  iVar8 = param_1 + 0x98;
  FUN_80084110(&DAT_1f800020,0x1f800000,iVar8);
  FUN_80084360(&DAT_1f800040,iVar8);
  FUN_80084470(iVar8,param_1 + 0x88,param_1 + 0xac);
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + (int)*(short *)(param_1 + 0x2e);
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + (int)*(short *)(param_1 + 0x36);
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + (int)*(short *)(param_1 + 0x32);
  if (*(char *)(param_1 + 0x164) == '\x05') {
    FUN_80084250(iVar8,*(int *)(param_1 + 0x10) + 0x18);
  }
  bVar4 = false;
  if ((*(char *)(param_1 + 0x145) == '\0') && ((*(byte *)(param_1 + 0x146) & 3) != 0)) {
    _DAT_1f8000c0 = *(undefined2 *)(param_1 + 0x54);
    _DAT_1f8000c2 = *(undefined2 *)(param_1 + 0x56);
    _DAT_1f8000c4 = 0;
    FUN_80085480(&DAT_1f8000c0,&DAT_1f800040);
    FUN_80084110(&DAT_1f800020,0x1f800000,0x1f800060);
    FUN_80084360(&DAT_1f800040,0x1f800060);
    FUN_80084470(0x1f800060,param_1 + 0x88,&DAT_1f800074);
    _DAT_1f800074 = _DAT_1f800074 + *(short *)(param_1 + 0x2e);
    _DAT_1f800078 = _DAT_1f800078 + *(short *)(param_1 + 0x32);
    bVar3 = true;
    _DAT_1f80007c = _DAT_1f80007c + *(short *)(param_1 + 0x36);
  }
  else {
    bVar3 = false;
  }
  iVar9 = 0;
  iVar8 = param_1;
  if (*(char *)(param_1 + 9) != '\0') {
    do {
      if ((int)(uint)*(byte *)(param_1 + 8) <= iVar9) break;
      iVar5 = *(int *)(iVar8 + 0xc0);
      sVar2 = *(short *)(iVar5 + 6);
      FUN_800517bc(0x1f800000,(int)*(short *)(iVar5 + 0x38),(int)*(short *)(iVar5 + 0x3a),
                   (int)*(short *)(iVar5 + 0x3c));
      FUN_80085480(*(int *)(iVar8 + 0xc0) + 8,&DAT_1f800020);
      FUN_80084110(&DAT_1f800020,0x1f800000,&DAT_1f800040);
      if (sVar2 < 0) {
        if (bVar3) {
          if (!bVar4) {
            FUN_80084110(0x1f800060,&DAT_1f800040,*(int *)(iVar8 + 0xc0) + 0x18);
            FUN_80084220(*(int *)(iVar8 + 0xc0),*(int *)(iVar8 + 0xc0) + 0x2c);
            *(int *)(*(int *)(iVar8 + 0xc0) + 0x2c) =
                 *(int *)(*(int *)(iVar8 + 0xc0) + 0x2c) + _DAT_1f800074;
            *(int *)(*(int *)(iVar8 + 0xc0) + 0x30) =
                 *(int *)(*(int *)(iVar8 + 0xc0) + 0x30) + _DAT_1f800078;
            iVar7 = *(int *)(iVar8 + 0xc0);
            iVar6 = *(int *)(iVar7 + 0x34);
            bVar4 = true;
            iVar5 = _DAT_1f80007c;
            goto code_r0x80059c08;
          }
          FUN_80084110(param_1 + 0x98,&DAT_1f800040,*(int *)(iVar8 + 0xc0) + 0x18);
          FUN_80084220(*(int *)(iVar8 + 0xc0),*(int *)(iVar8 + 0xc0) + 0x2c);
          *(int *)(*(int *)(iVar8 + 0xc0) + 0x2c) =
               *(int *)(*(int *)(iVar8 + 0xc0) + 0x2c) + *(int *)(param_1 + 0xac);
          *(int *)(*(int *)(iVar8 + 0xc0) + 0x30) =
               *(int *)(*(int *)(iVar8 + 0xc0) + 0x30) + *(int *)(param_1 + 0xb0);
          iVar7 = *(int *)(iVar8 + 0xc0);
          iVar6 = *(int *)(iVar7 + 0x34) + *(int *)(param_1 + 0xb4);
        }
        else {
          FUN_80084110(param_1 + 0x98,&DAT_1f800040,*(int *)(iVar8 + 0xc0) + 0x18);
          FUN_80084220(*(int *)(iVar8 + 0xc0),*(int *)(iVar8 + 0xc0) + 0x2c);
          *(int *)(*(int *)(iVar8 + 0xc0) + 0x2c) =
               *(int *)(*(int *)(iVar8 + 0xc0) + 0x2c) + *(int *)(param_1 + 0xac);
          *(int *)(*(int *)(iVar8 + 0xc0) + 0x30) =
               *(int *)(*(int *)(iVar8 + 0xc0) + 0x30) + *(int *)(param_1 + 0xb0);
          iVar7 = *(int *)(iVar8 + 0xc0);
          iVar6 = *(int *)(iVar7 + 0x34) + *(int *)(param_1 + 0xb4);
        }
      }
      else {
        iVar5 = param_1 + sVar2 * 4;
        FUN_80084110(*(int *)(iVar5 + 0xc0) + 0x18,&DAT_1f800040,*(int *)(iVar8 + 0xc0) + 0x18);
        FUN_80084220(*(int *)(iVar8 + 0xc0),*(int *)(iVar8 + 0xc0) + 0x2c);
        *(int *)(*(int *)(iVar8 + 0xc0) + 0x2c) =
             *(int *)(*(int *)(iVar8 + 0xc0) + 0x2c) + *(int *)(*(int *)(iVar5 + 0xc0) + 0x2c);
        *(int *)(*(int *)(iVar8 + 0xc0) + 0x30) =
             *(int *)(*(int *)(iVar8 + 0xc0) + 0x30) + *(int *)(*(int *)(iVar5 + 0xc0) + 0x30);
        iVar7 = *(int *)(iVar8 + 0xc0);
        iVar6 = *(int *)(iVar7 + 0x34);
        iVar5 = *(int *)(*(int *)(iVar5 + 0xc0) + 0x34);
code_r0x80059c08:
        iVar6 = iVar6 + iVar5;
      }
      *(int *)(iVar7 + 0x34) = iVar6;
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar9 < (int)(uint)*(byte *)(param_1 + 9));
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  return;
}

