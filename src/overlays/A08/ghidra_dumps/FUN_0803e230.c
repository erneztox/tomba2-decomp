// FUN_0803e230

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0803e230(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = func_0x00072ddc(param_1,3,2,0x5f);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x1c) = 0x801356f8;
  iVar3 = func_0x000519e0(iVar2,0x12,_DAT_800ecfb4,0x8014175c);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar2 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(iVar2 + 4) = 2;
  *(undefined1 *)(iVar2 + 5) = 0xff;
  *(undefined2 *)(iVar2 + 0x40) = 0xf;
  *(undefined4 *)(iVar2 + 0x3c) = _DAT_800ecfb8;
  func_0x00077c40(iVar2,0x80149588,0x19);
  *(undefined1 *)(iVar2 + 0xd) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(iVar2 + 0x18) = *(undefined1 *)(param_1 + 0x18);
  iVar4 = 0;
  *(undefined1 *)(iVar2 + 0x19) = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(iVar2 + 0x1a) = *(undefined1 *)(param_1 + 0x1a);
  iVar3 = iVar2;
  do {
    iVar4 = iVar4 + 1;
    *(undefined4 *)(*(int *)(iVar3 + 0xc0) + 0x40) = 0;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 6);
  *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
  *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
  uVar1 = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(iVar2 + 0x54) = 0;
  *(undefined2 *)(iVar2 + 0x36) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0x56);
  *(undefined2 *)(iVar2 + 0x58) = 0;
  *(undefined2 *)(iVar2 + 0x56) = uVar1;
  *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)(iVar2 + 3) = *(undefined1 *)(param_1 + 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

