
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007cdd4(short *param_1)

{
  int iVar1;
  uint *puVar2;
  
  *(undefined1 *)((int)_DAT_800bf544 + 7) = 0x65;
  *(undefined2 *)((int)_DAT_800bf544 + 0xe) = 0x7c3f;
  *(short *)(_DAT_800bf544 + 2) = *param_1 + param_1[2] + -0x10;
  *(short *)((int)_DAT_800bf544 + 10) = param_1[1] + param_1[3] + -0x10;
  if (DAT_800bfe4c == '\0') {
    *(undefined1 *)(_DAT_800bf544 + 3) = 0;
  }
  else {
    if (DAT_800bfe4c != '\x01') {
      *(undefined1 *)((int)_DAT_800bf544 + 0xd) = 0x78;
      goto LAB_8007ce68;
    }
    *(undefined1 *)(_DAT_800bf544 + 3) = 0x10;
  }
  *(undefined1 *)((int)_DAT_800bf544 + 0xd) = 0x78;
LAB_8007ce68:
  *(undefined2 *)(_DAT_800bf544 + 4) = 0x10;
  *(undefined2 *)((int)_DAT_800bf544 + 0x12) = 0x10;
  iVar1 = _DAT_800ed8c8;
  *_DAT_800bf544 = *(uint *)(_DAT_800ed8c8 + 8) | 0x4000000;
  *(uint **)(iVar1 + 8) = _DAT_800bf544;
  puVar2 = _DAT_800bf544 + 5;
  _DAT_800bf544 = _DAT_800bf544 + 8;
  FUN_80083de0(puVar2,0,0,0x1f,0);
  iVar1 = _DAT_800ed8c8;
  *puVar2 = *(uint *)(_DAT_800ed8c8 + 8) | 0x2000000;
  *(uint **)(iVar1 + 8) = puVar2;
  return;
}

