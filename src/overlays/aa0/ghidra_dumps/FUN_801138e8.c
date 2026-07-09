// FUN_801138e8

void FUN_801138e8(void)

{
  undefined1 in_v0;
  undefined2 uVar1;
  short extraout_v1;
  short extraout_v1_00;
  short sVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *unaff_s1;
  int unaff_s2;
  
  unaff_s1[0x70] = in_v0;
  unaff_s1[1] = 1;
  func_0x80077e7c();
  if (unaff_s1[0x70] != -1) {
    if (1 < (byte)unaff_s1[5]) {
      func_0x80041098();
    }
    func_0x8004190c();
    return;
  }
  puVar4 = &DAT_800bf870;
  puVar3 = unaff_s1;
  if (DAT_800bfad8 == '\0') {
    func_0x8006e1e4();
    DAT_800bf9eb = 2;
    uVar1 = 3;
    unaff_s1[5] = 3;
    sVar2 = extraout_v1_00;
  }
  else {
    puVar4 = (undefined1 *)0x2;
    *unaff_s1 = 2;
    func_0x80040cdc();
    uVar1 = 10;
    unaff_s1[0x70] = 2;
    unaff_s1[5] = 10;
    sVar2 = extraout_v1;
  }
  *(undefined2 *)(puVar4 + 0x48) = uVar1;
  sVar2 = sVar2 - (short)puVar3;
  *(short *)(puVar4 + 0x4c) = sVar2;
  *(undefined2 *)(puVar4 + 0x40) = 8;
  *(short *)(puVar4 + 0x4c) = sVar2 >> 3;
  if (((*(byte *)(unaff_s2 + 0x5e) & 2) != 0) &&
     (*(short *)(unaff_s2 + 0x6c) == *(short *)(unaff_s2 + 0x7a))) {
    *(int *)(puVar3 + 0x34) = *(int *)(puVar3 + 0x34) + (int)*(short *)(unaff_s1 + 0x36);
    FUN_8012eb18();
    return;
  }
  if (*(short *)(*(int *)(unaff_s2 + (uint)(byte)puVar4[0x5f] * 4 + 0xc0) + 0xc) == 0x800) {
    *(ushort *)(unaff_s2 + 0x7a) = *(ushort *)(unaff_s2 + 0x7a) | 4;
  }
  puVar4[6] = puVar4[6] + '\x01';
  sVar2 = (*(short *)(puVar4 + 0x4a) >> 5) + 100;
  *(short *)(puVar4 + 0x84) = sVar2;
  *(short *)(puVar4 + 0x86) = sVar2 * 2;
  FUN_80125c1c();
  return;
}

