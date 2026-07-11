// FUN_0000cd84

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000cd84(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x40;
    func_0x0007778c(param_1);
    func_0x0004190c(param_1);
    func_0x000518fc(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if ((byte)param_1[5] < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0000cefc */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef6d84))();
          return;
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar2 = func_0x000519e0(param_1,5,
                              *(undefined4 *)
                               (*(int *)((DAT_800bf870 - 10) * 4 + -0x7fedafd8) * 4 + -0x7ff130a8),
                              0x80124cb8);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) =
           *(undefined4 *)(*(int *)((DAT_800bf870 - 10) * 4 + -0x7fedafc4) * 4 + -0x7ff130a8);
      func_0x00077c40(param_1,0x80017fc0,0);
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x80) = 0x32;
      *(undefined2 *)(param_1 + 0x82) = 100;
      *(undefined2 *)(param_1 + 0x84) = 0x32;
      *(undefined2 *)(param_1 + 0x86) = 100;
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

