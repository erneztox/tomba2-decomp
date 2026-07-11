// FUN_80123474

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_80123474(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 auStack_18 [16];
  
  if ((byte)param_1[5] < 6) {
    *param_1 = 1;
    FUN_8012c4e0();
    return;
  }
  if (param_1[5] == 6) {
    func_0x800521f4(0,1,0xc0,4);
    DAT_800bf9fa = 0x19;
    func_0x80042354(1,1);
    func_0x80054198(&DAT_800e7e80);
    func_0x80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x600,8);
    func_0x80074590(0xc,0,0);
    func_0x80074810(0x97,0);
    func_0x80043b88(1);
    DAT_1f800233 = 1;
    func_0x8001d71c();
    param_1[4] = 3;
    return;
  }
  if (auStack_18 <= param_4) {
    trap(0xcc);
  }
  SYNC(0);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}

