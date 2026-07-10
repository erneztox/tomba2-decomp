// FUN_8007def8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8007def8(ushort param_1,ushort param_2,undefined1 param_3)

{
  undefined2 uVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar2 = FUN_8007a5a8(3);
  if (iVar2 == 0) {
    return 0;
  }
  *(code **)(iVar2 + 0x1c) = FUN_8007da50;
  *(undefined1 *)(iVar2 + 0x47) = 0;
  *(undefined1 *)(iVar2 + 3) = param_3;
  *(ushort *)(iVar2 + 0x5c) = param_1 & 0xfff;
  *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
  if ((param_1 & 0x6000) == 0) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = 1;
    if ((param_1 & 0x4000) != 0) {
      *(undefined2 *)(iVar2 + 0xe) = 0;
      goto LAB_8007df7c;
    }
  }
  *(undefined2 *)(iVar2 + 0xe) = uVar1;
LAB_8007df7c:
  if ((param_1 & 0x1000) == 0) {
    *(undefined2 *)(iVar2 + 0x44) = 0;
  }
  else {
    *(undefined2 *)(iVar2 + 0x44) = 1;
  }
  if ((param_2 & 0x80) == 0) {
    *(undefined1 *)(iVar2 + 0xd) = 0;
  }
  else {
    *(undefined1 *)(iVar2 + 0xd) = 0xff;
  }
  *(ushort *)(iVar2 + 0x5e) = param_2 & 0x7f;
  *(undefined1 *)(iVar2 + 0x29) = 0xff;
  *(undefined1 *)(iVar2 + 0x2b) = 0xff;
  puVar3 = (ushort *)
           (_DAT_800ecf8c +
           *_DAT_800ecf8c * 2 + *(int *)(_DAT_800ecf8c + *(short *)(iVar2 + 0x5c) * 2 + 8) * 2 + 8);
  *(ushort **)(iVar2 + 0x48) = puVar3;
  *(ushort **)(iVar2 + 0x4c) = puVar3 + 8;
  *(ushort **)(iVar2 + 0x50) = puVar3 + 8 + (uint)*puVar3 * 2;
  return iVar2;
}

