
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800624b4(undefined1 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  
  param_1[0x17b] = 1;
  DAT_1f80027a = 2;
  switch(param_1[6]) {
  case 0:
    DAT_800bf80e = 0;
    *param_1 = 6;
    DAT_800bf809 = 1;
    if (param_1[2] == '\0') {
      FUN_80053d90(param_1);
      FUN_800551c4(param_1);
    }
    DAT_800bf88f = param_1[0x6f];
    FUN_80067ef4(param_1);
    FUN_8001cf2c();
    if (param_1[2] == '\0') {
      FUN_80055d5c(param_1);
    }
    param_1[6] = param_1[6] + '\x01';
    FUN_80076d68(param_1);
    iVar3 = FUN_800310f4(0x1e,0);
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
    }
    FUN_80074590(0x37,0x16,0x1e);
    *(int *)(param_1 + 0x10) = iVar3;
    *(undefined2 *)(param_1 + 0x40) = 5;
    break;
  case 1:
    if (*(short *)(param_1 + 0x40) != 0) {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      return;
    }
    cVar2 = param_1[6];
    param_1[1] = 0;
    goto code_r0x8006266c;
  case 2:
    if (_DAT_801fe0e0 != 0) {
      FUN_8001cf2c();
      return;
    }
    goto LAB_80062664;
  case 3:
    iVar3 = FUN_80044cd4(_DAT_800ed014,
                         *(uint *)(&DAT_800fb170 + (*(ushort *)(param_1 + 0x17e) & 0xf) * 8) >> 0xb,
                         *(int *)(&DAT_800fb170 + ((*(ushort *)(param_1 + 0x17e) & 0xf) << 3 | 4)) -
                         *(uint *)(&DAT_800fb170 + (*(ushort *)(param_1 + 0x17e) & 0xf) * 8));
    if (iVar3 == 0) {
      return;
    }
LAB_80062664:
    cVar2 = param_1[6];
code_r0x8006266c:
    param_1[6] = cVar2 + '\x01';
    break;
  case 4:
    if (DAT_1f80019b != '\0') {
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 != 0) {
        *(undefined1 *)(iVar3 + 4) = 2;
        *(undefined1 *)(iVar3 + 5) = 0;
      }
      FUN_80057fd4(param_1);
      param_1[1] = 1;
      if (DAT_1f800137 != '\x01') {
        FUN_80074f24(DAT_800bf870);
      }
      *param_1 = 3;
      uVar1 = _DAT_1f80023c;
      *(undefined2 *)(param_1 + 0x172) = 0x1e;
      *(undefined4 *)(param_1 + 4) = uVar1;
      if (DAT_1f800137 == '\x02') {
        DAT_1f800137 = '\0';
      }
      DAT_800bf809 = 0;
    }
  }
  return;
}

