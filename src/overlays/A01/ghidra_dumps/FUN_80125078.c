// FUN_80125078

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80125078(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      FUN_8012e1a4();
      return;
    }
    *(undefined4 *)(param_1 + 0x40) = 0x801387c0;
    *(undefined4 *)(param_1 + 0x3c) = 0x801387c0;
    *(undefined4 *)(param_1 + 0x50) = 0x80138160;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    iVar2 = func_0x8009a450();
    *(short *)(param_1 + 0x2c) = (short)(iVar2 >> 5) + 0x4e0a;
    iVar2 = func_0x8009a450();
    *(short *)(param_1 + 0x30) = (short)(iVar2 >> 4) + 8000;
    *(undefined2 *)(param_1 + 0x2e) = 0xe890;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0xa0;
  }
  if (*(char *)(param_1 + 5) == '\0') {
    if (*(short *)(param_1 + 0x2e) < -0x1a0e) {
      *(undefined1 *)(param_1 + 5) = 1;
      FUN_8012e144();
      return;
    }
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + -0x1a;
    iVar2 = func_0x8009a450();
    *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + -0x10 + (short)(iVar2 >> 0xb);
    iVar2 = func_0x8009a450();
    *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + -0x10 + (short)(iVar2 >> 0xb);
    FUN_8012e144();
    return;
  }
  if (*(char *)(param_1 + 5) != '\x01') {
    FUN_8012e144();
    return;
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x40) == 0) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  iVar2 = func_0x8002b278(param_1);
  if (iVar2 == 0) {
    func_0x80031708(param_1);
    FUN_8012e1a4();
    return;
  }
  *(short *)(param_1 + 0x48) = -_DAT_1f8000f0;
  *(short *)(param_1 + 0x4a) = -_DAT_1f8000f2;
  *(short *)(param_1 + 0x4c) = -_DAT_1f8000f4;
  FUN_8012e1a4();
  return;
}

