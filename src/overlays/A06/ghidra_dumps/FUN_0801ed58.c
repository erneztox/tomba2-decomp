// FUN_0801ed58

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ed58(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0801ed90 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef65a0))
              (param_1,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  if ((3 < *(byte *)(param_1 + 5)) && ((_DAT_1f80017c & 3) == 0)) {
    sVar1 = *(short *)(param_1 + 0x40) + 1;
    *(short *)(param_1 + 0x40) = sVar1;
    if (5 < sVar1) {
      *(undefined2 *)(param_1 + 0x40) = 0;
    }
    local_c = 0x10;
    local_a = 1;
    local_10 = 0x3f0;
    if (((int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    local_e = 0xd0;
    func_0x00081218(&local_10,
                    (uint)*(byte *)(*(short *)(param_1 + 0x40) + -0x7febb1f8) * 0x20 + -0x7febb278,
                    param_3,&DAT_800e7e80);
  }
  return;
}

