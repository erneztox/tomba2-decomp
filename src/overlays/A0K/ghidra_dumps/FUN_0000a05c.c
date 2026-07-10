// FUN_0000a05c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000a05c(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  ushort local_28;
  short local_26;
  
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    iVar5 = 0;
    iVar7 = 0;
    do {
      *(undefined2 *)(param_1 + (iVar7 >> 0xf) + 0x60) = 0;
      iVar5 = iVar5 + 1;
      iVar7 = iVar5 * 0x10000;
    } while (iVar5 * 0x10000 >> 0x10 < 0x10);
    *(undefined2 *)(param_1 + 0x5a) = 0xffd0;
    *(undefined2 *)(param_1 + 0x82) = 8;
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    iVar7 = (uint)*(ushort *)(param_1 + 0xe) << 0x10;
    *(char *)(param_1 + 0x5f) = (char)((iVar7 >> 0x10) - (iVar7 >> 0x1f) >> 1);
    if ((*(ushort *)(param_1 + 0xe) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(param_1 + 0x5f) = *(char *)(param_1 + 0x5f) * '\b' + -4;
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
    halt_baddata();
  }
  bVar4 = *(char *)(param_1 + 0x5e) + 1;
  *(byte *)(param_1 + 0x5e) = bVar4;
  if ((bVar4 & 1) == 0) {
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
  }
  sVar1 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00084660(0x1f8000f8);
  func_0x00084690(0x1f8000f8);
  if (*(short *)(param_1 + 0x5a) < 1) {
    *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + _DAT_1f80026c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x42);
  if (sVar1 == 0) {
    trap(0x1c00);
  }
  if ((sVar1 == -1) && (_DAT_1f80026c == -0x80000000)) {
    trap(0x1800);
  }
  sVar2 = _DAT_1f800270 / sVar1;
  if (sVar1 == 0) {
    trap(0x1c00);
  }
  if ((sVar1 == -1) && (_DAT_1f800270 == -0x80000000)) {
    trap(0x1800);
  }
  *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + _DAT_1f80026c / sVar1;
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + sVar2;
  *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + *(short *)(param_1 + 0x5a);
  *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) + 3;
  local_37 = func_0x0003f7a0(param_1 + 0x54,&local_28);
  uVar3 = _DAT_800ecf58;
  bVar4 = *(byte *)(param_1 + 0x5f);
  iVar7 = 0;
  local_38 = 0;
  local_36 = *(undefined2 *)(param_1 + 0x5c);
  local_2c = 0;
  local_2a = 0;
  puVar8 = (undefined1 *)(param_1 + 0x44);
  if (0 < *(short *)(param_1 + 0xe)) {
    iVar5 = 0;
    do {
      iVar6 = (int)(((uint)local_28 - (uint)bVar4) * 0x10000) >> 0x10;
      if (iVar5 >> 0x10 == 0) {
        func_0x00071c48(param_1,iVar6,(int)local_26);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00071cf4(param_1,iVar6,(int)local_26);
      local_30 = *(undefined2 *)(param_1 + 0x2e);
      local_2e = *(undefined2 *)(param_1 + 0x32);
      local_40 = *puVar8;
      puVar8 = puVar8 + 1;
      local_3f = 0;
      iVar5 = func_0x0009a1f0(&local_40);
      func_0x0007e1b8(&local_30,*(undefined4 *)(((iVar5 + 0x69) * 0x10000 >> 0xe) + -0x7ffe8ccc),
                      uVar3,&local_38);
      iVar7 = iVar7 + 1;
      iVar5 = iVar7 * 0x10000;
    } while (iVar7 * 0x10000 >> 0x10 < (int)*(short *)(param_1 + 0xe));
  }
  return;
}

