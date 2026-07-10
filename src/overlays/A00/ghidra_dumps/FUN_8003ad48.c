// FUN_8003ad48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003ad48(int param_1)

{
  short sVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        *(undefined1 *)(param_1 + 4) = 3;
        DAT_800bf849 = DAT_800bf849 + -1;
        DAT_800ed06c = DAT_800ed06c + -1;
        return;
      }
      if (bVar2 != 3) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar2 != 0) {
      return;
    }
    if (*(char *)(param_1 + 3) == '\x02') {
      uVar7 = 0x16;
      cVar3 = FUN_80073750(PTR_s_Clear_800a3a8c);
      *(char *)(param_1 + 8) = cVar3 + '\x01';
    }
    else {
      uVar7 = 0xf;
      bVar2 = FUN_80073750((&PTR_DAT_800a33cc)[*(short *)(param_1 + 0x60) * 3]);
      *(byte *)(param_1 + 8) = bVar2;
      if (0x20 < bVar2) {
        FUN_8009a730(s_cube_moji_over_flow_80014a54);
        FUN_8009a730(&DAT_80014a6c,(&PTR_DAT_800a33cc)[*(short *)(param_1 + 0x60) * 3]);
        *(undefined1 *)(param_1 + 4) = 2;
        return;
      }
    }
    if (_DAT_800ed098 < (short)(ushort)*(byte *)(param_1 + 8)) {
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 8);
    *(undefined1 *)(param_1 + 0xb) = 4;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf58;
    iVar5 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        iVar4 = FUN_8007aae8();
        *(int *)(iVar5 + 0xc0) = iVar4;
        *(undefined2 *)(iVar4 + 6) = 0xffff;
        **(undefined2 **)(iVar5 + 0xc0) = 0;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2) = 0;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4) = 0;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 8) = 0;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 10) = 0;
        *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0xc) = 0;
        FUN_80051b04(*(undefined4 *)(iVar5 + 0xc0),1,uVar7);
        *(undefined1 *)(*(int *)(iVar5 + 0xc0) + 0x3e) = 0;
        *(char *)(*(int *)(iVar5 + 0xc0) + 0x3f) = (char)iVar6;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < (int)(uint)*(byte *)(param_1 + 8));
    }
    sVar1 = _DAT_801003f8;
    *(undefined2 *)(param_1 + 0x2e) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0xffc0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(short *)(param_1 + 0x36) = sVar1 + 8;
    if (*(char *)(param_1 + 3) != '\x02') {
      *(undefined1 *)(param_1 + 0x5e) = 0;
      *(short *)(param_1 + 0x36) = sVar1 + *(short *)(param_1 + 0x36) + 8;
      return;
    }
    *(undefined1 *)(param_1 + 0x5e) = 1;
    return;
  }
  bVar2 = *(byte *)(param_1 + 3);
  if (bVar2 == 1) {
    FUN_8003a9a0(param_1);
  }
  else if (bVar2 < 2) {
    if (bVar2 != 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_8003aff0;
    }
    FUN_8003a790(param_1);
  }
  else {
    if (bVar2 != 2) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_8003aff0;
    }
    FUN_8003abe4(param_1);
  }
  *(undefined1 *)(param_1 + 1) = 1;
LAB_8003aff0:
  FUN_800517f8(param_1);
  return;
}

