
void FUN_80066478(int param_1)

{
  short sVar1;
  ushort uVar2;
  
  if ((-0x2400 < *(short *)(param_1 + 0x4a)) &&
     (sVar1 = *(short *)(param_1 + 0x58) + 0x40, *(short *)(param_1 + 0x58) = sVar1, -0x200 < sVar1)
     ) {
    *(undefined2 *)(param_1 + 0x58) = 0xfe00;
    FUN_80076d68();
  }
  FUN_80056b48(param_1,1);
  FUN_80055d5c(param_1);
  FUN_800541f4(param_1,3);
  uVar2 = *(short *)(param_1 + 0x4a) + 0x400;
  *(ushort *)(param_1 + 0x4a) = uVar2;
  if (0 < (int)((uint)uVar2 << 0x10)) {
    *(undefined1 *)(param_1 + 0x145) = 2;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  return;
}

