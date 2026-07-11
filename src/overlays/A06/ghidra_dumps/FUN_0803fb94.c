// FUN_0803fb94

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0803fb94(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    iVar3 = func_0x00041438(param_1,0xfffffc00,0x100);
    if (iVar3 == 0) {
      return 0;
    }
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    func_0x00041768(param_1,0xb,8);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      uVar2 = _DAT_800ecf90;
      *(undefined4 *)(param_1 + 0x7c) = 0x8014d014;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      func_0x00041768(param_1,0,0);
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)(param_1 + 0x79) != '\x01') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x78) = 3;
    uVar2 = _DAT_800ecf68;
    *(undefined4 *)(param_1 + 0x7c) = 0x80017fe8;
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    func_0x00041768(param_1,2,0);
  }
  else if (bVar1 == 3) {
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 2;
    *(char *)(param_1 + 0x47) = '\x01' - *(char *)(param_1 + 0x47);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

