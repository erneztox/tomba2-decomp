
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80067ef4(int param_1)

{
  ushort uVar1;
  
  switch(*(undefined1 *)(param_1 + 0x6f)) {
  case 0:
    uVar1 = *(ushort *)(param_1 + 0x17e) & 0x8000 | 0x10;
    break;
  default:
    goto switchD_80067f24_caseD_1;
  case 0xe:
    uVar1 = 0x22;
    break;
  case 0xf:
    uVar1 = 0x41;
    break;
  case 0x10:
    uVar1 = 0x83;
    break;
  case 0x11:
    uVar1 = 0x10a;
    break;
  case 0x12:
    uVar1 = 0x404;
    break;
  case 0x13:
    uVar1 = 0x805;
    break;
  case 0x14:
    uVar1 = 0x1006;
    break;
  case 0x15:
    uVar1 = *(ushort *)(param_1 + 0x17e) & 0x8000 | 0x2007;
    break;
  case 0x16:
    uVar1 = 0x4008;
    break;
  case 0x6c:
    uVar1 = 0x209;
  }
  *(ushort *)(param_1 + 0x17e) = uVar1;
switchD_80067f24_caseD_1:
  if ((*(byte *)(param_1 + 0x174) & 4) != 0) {
    *(ushort *)(param_1 + 0x17e) = *(ushort *)(param_1 + 0x17e) | 0x8000;
  }
  _DAT_800bf89e = *(undefined2 *)(param_1 + 0x17e);
  FUN_80024e00(0x800ed058);
  return;
}

