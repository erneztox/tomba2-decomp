// FUN_0802ecbc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802ecbc(int param_1)

{
  short sVar1;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  if (*(byte *)(param_1 + 5) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x0802ecf4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef60b4))();
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x000517f8(param_1,&DAT_800e7e80);
  if ((_DAT_1f80017c & 3) == 0) {
    if ((6 < *(byte *)(param_1 + 5)) ||
       (sVar1 = *(short *)(param_1 + 0x42) + 1, *(short *)(param_1 + 0x42) = sVar1, 5 < sVar1)) {
      *(undefined2 *)(param_1 + 0x42) = 0;
    }
    local_14 = 0x10;
    local_12 = 1;
    local_18 = 0x3f0;
    local_16 = 0xe7;
    func_0x00081218(&local_18,
                    (uint)*(byte *)(*(short *)(param_1 + 0x42) + -0x7feba59c) * 0x20 + -0x7feba61c);
  }
  return;
}

