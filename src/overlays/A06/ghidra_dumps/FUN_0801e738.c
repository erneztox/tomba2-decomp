// FUN_0801e738

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801e738(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = param_1[6];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (2 < DAT_800bfa4c) {
          param_1[6] = 1;
          local_1e = _DAT_1f8000de;
          local_1a = _DAT_1f8000e2 + -200;
          local_16 = _DAT_1f8000e6;
          func_0x0003116c(0x708,auStack_20,0xffffff6a);
          func_0x0003116c(0x714,auStack_20,0xffffff6a);
          func_0x0003116c(0x70d,auStack_20,0xffffff6a);
          *(undefined2 *)(param_1 + 0x40) = 5;
          _DAT_800e8046 = _DAT_800e8046 + -200;
          DAT_800e806c = 8;
          DAT_800e807e = 1;
          halt_baddata();
        }
        return 0;
      }
    }
    else if (bVar1 == 2) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if ((short)(sVar2 + -1) != -1) {
        return 0;
      }
      param_1[6] = 0;
      DAT_1f800137 = 0;
      DAT_800bf841 = 0;
      DAT_800bf809 = 0;
      DAT_800e807e = 0;
      func_0x0006e1e4();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar2 + -1;
  if ((short)(sVar2 + -1) == -1) {
    func_0x00074590(0x83,0,0);
  }
  *(short *)(*(int *)(param_1 + 200) + 0x3a) = *(short *)(*(int *)(param_1 + 200) + 0x3a) + -0x100;
  if (*(short *)(*(int *)(param_1 + 200) + 0x3a) == 0) {
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
    param_1[6] = param_1[6] + '\x01';
    *(undefined4 *)(*(int *)(param_1 + 200) + 0x40) = 0;
    *param_1 = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

