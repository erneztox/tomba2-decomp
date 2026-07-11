// FUN_80112054

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80112054(int param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int extraout_v1;
  int iVar4;
  int unaff_s1;
  
  if (*(char *)(param_1 + 7) == '\0') {
    sVar2 = func_0x80085690(-((int)(((uint)_DAT_800e7eb6 - (uint)*(ushort *)(param_1 + 0x36)) *
                                   0x10000) >> 0x10),
                            (int)(((uint)_DAT_800e7eae - (uint)*(ushort *)(param_1 + 0x2e)) *
                                 0x10000) >> 0x10);
    iVar4 = (int)sVar2;
    param_3 = 0;
    cVar1 = func_0x80077768(iVar4,(int)*(short *)(param_1 + 0x60));
    *(char *)(param_1 + 0xbe) = cVar1;
    if (cVar1 == *(char *)(param_1 + 0x46)) goto LAB_8011214c;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    *(ushort *)(param_1 + 0x96) = *(short *)(param_1 + 0x56) + 0x800U & 0xfff;
    if (*(char *)(param_1 + 0x46) == '\0') {
      *(undefined2 *)(param_1 + 0x92) = 0x80;
    }
    else {
      *(undefined2 *)(param_1 + 0x92) = 0xff80;
    }
  }
  else {
    iVar4 = param_1;
    if (*(char *)(param_1 + 7) == '\x01') {
      uVar3 = (uint)*(ushort *)(param_1 + 0x56) + (uint)*(ushort *)(param_1 + 0x92) & 0xfff;
      *(short *)(param_1 + 0x56) = (short)uVar3;
      if (uVar3 == (int)*(short *)(param_1 + 0x96)) {
        *(undefined1 *)(param_1 + 7) = 0;
        *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_1 + 0xbe);
      }
LAB_8011214c:
      thunk_FUN_80123f10(param_1);
      return;
    }
  }
  if (*(char *)(iVar4 + 5) != '\0') {
    func_0x800735f4(param_1,0x48);
    return;
  }
  *(undefined2 *)(param_1 + 0x42) = 8;
  *(undefined1 *)(param_1 + 5) = param_3;
  DAT_1f800137 = 2;
  func_0x8004ed94(0x34,0x41);
  func_0x80074590(0x19,0,0);
  if (extraout_v1 == 2) {
    *(undefined1 *)(unaff_s1 + 5) = 3;
    DAT_1f800236 = 7;
    DAT_800bf839 = (char)param_1;
    _DAT_800bf83a = (ushort)*(byte *)(unaff_s1 + 0xbf) << 4;
    return;
  }
  FUN_8012d2a8();
  return;
}

