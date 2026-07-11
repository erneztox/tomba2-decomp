// FUN_08028d2c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08028d2c(undefined1 *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_1[6] == '\0') {
    *param_1 = 2;
    func_0x00074590(0x95,0xf,0);
    func_0x00133a30(param_1,0);
    DAT_800bfa07 = DAT_800bfa07 | 0x80;
    param_1[6] = param_1[6] + '\x01';
  }
  else if (param_1[6] == '\x01') {
    if ((_DAT_1f80017c & 3) == 0) {
      iVar3 = 0;
      uVar2 = func_0x0009a450();
      if ((uVar2 & 1) != 0xfffffffe) {
        do {
          local_28 = *(undefined4 *)(param_1 + 0x2c);
          local_24 = *(undefined4 *)(param_1 + 0x30);
          local_20 = *(undefined4 *)(param_1 + 0x34);
          sVar1 = func_0x00070698(0x40);
          iVar3 = iVar3 + 1;
          local_28 = CONCAT22(local_28._2_2_ + sVar1,(undefined2)local_28);
          sVar1 = func_0x00070698(0x40);
          local_24 = CONCAT22(local_24._2_2_ + sVar1,(undefined2)local_24);
          sVar1 = func_0x00070698(0x40);
          local_20 = CONCAT22(local_20._2_2_ + sVar1,(undefined2)local_20);
          func_0x0003116c(0x503,&local_28,0xffffffce);
        } while (iVar3 < (int)((uVar2 & 1) + 2));
      }
    }
    sVar1 = *(short *)(param_1 + 0xb8);
    *(ushort *)(param_1 + 0xb8) = sVar1 - 0x80U;
    if ((ushort)(sVar1 - 0x80U) < 0x201) {
      param_1[4] = 3;
    }
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0xb8);
    *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xb8);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

