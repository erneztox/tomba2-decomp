// FUN_00031708

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00031708(int param_1)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    uVar2 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(ushort *)(param_1 + 0x4a) = uVar2;
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -8;
    if ((int)((uint)uVar2 << 0x10) < 1) {
      return 0;
    }
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    func_0x00041768(param_1,100,8);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      func_0x00041768(param_1,99,0);
      *(undefined2 *)(param_1 + 0x4a) = 0xe800;
      *(undefined2 *)(param_1 + 0x50) = 0x200;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -8;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    if (*(short *)(param_1 + 0x32) < -0xf1e) {
      return 0;
    }
    *(undefined2 *)(param_1 + 0x32) = 0xf0e2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

