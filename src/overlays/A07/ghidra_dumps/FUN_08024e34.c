// FUN_08024e34

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08024e34(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      goto LAB_08024ed8;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x40) = 10;
    func_0x000312d4(0x805,param_1 + 0x2c,0xffffffec);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  uVar2 = *(short *)(param_1 + 0x40) - 1;
  *(ushort *)(param_1 + 0x40) = uVar2;
  if (0 < (int)((uint)uVar2 << 0x10)) {
    return 0;
  }
  func_0x0007addc(param_1);
  *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
LAB_08024ed8:
  iVar3 = func_0x000519e0(param_1,0xf,_DAT_800ecfbc,0x801318e8);
  if (iVar3 != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0xb) = 0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

