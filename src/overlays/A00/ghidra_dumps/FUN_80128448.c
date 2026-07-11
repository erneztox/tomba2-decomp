// FUN_80128448

/* WARNING: Removing unreachable block (ram,0x801314bc) */

void FUN_80128448(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *unaff_s2;
  
  param_2 = param_2 | 0xf000;
  if (*(char *)(param_1 + 6) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x5e) = 0;
  if ((*(ushort *)(param_1 + 0x60) & 0xf0) == 0x40) {
    *(undefined1 *)(param_1 + 5) = 0;
    return;
  }
  uVar3 = *(ushort *)(param_1 + 0x68) & 0x7fff;
  if (uVar3 == 1) {
    iVar2 = (int)*(short *)(param_1 + 100) + (int)*(short *)(param_1 + 0x66);
    iVar4 = -(iVar2 >> 0x1f);
    uVar1 = iVar2 + iVar4;
    uVar5 = uVar1 >> 1;
    uVar3 = (uint)*(byte *)(iVar4 + 0x49);
  }
  else {
    if (1 < uVar3) {
      if (uVar3 == 2) {
        *(short *)(param_1 + 0x48) = (*(short *)(param_1 + 0x66) - (short)param_2) * 0x10;
        *(undefined2 *)(param_1 + 0x40) = 0x10;
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined1 *)(param_1 + 6) = 4;
        return;
      }
      FUN_80131490();
      return;
    }
    if ((*(ushort *)(param_1 + 0x68) & 0x7fff) != 0) {
      FUN_80131490();
      return;
    }
    uVar5 = (uint)*(ushort *)(param_1 + 100);
    uVar1 = uVar5 - param_2;
  }
  if (uVar3 != uVar1) {
    FUN_80118974(*(undefined4 *)(unaff_s2 + 0xd0),param_2,uVar5);
  }
  FUN_8013a184();
  FUN_8013989c();
  *unaff_s2 = 1;
  *(undefined2 *)(unaff_s2 + 0x82) = 0xc0;
  unaff_s2[0x29] = 0;
  *(undefined2 *)(unaff_s2 + 0x80) = 0x60;
  *(undefined2 *)(unaff_s2 + 0x84) = 0x10;
  *(undefined2 *)(unaff_s2 + 0x86) = 0x60;
  unaff_s2[4] = unaff_s2[4] + '\x01';
  return;
}

