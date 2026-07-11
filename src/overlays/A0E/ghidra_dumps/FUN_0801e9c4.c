// FUN_0801e9c4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0801e9c4(int param_1,char param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = func_0x0007a980(1,2,0);
  iVar3 = 0;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x80117600;
    *(undefined1 *)(iVar2 + 2) = 0xd0;
    *(char *)(iVar2 + 3) = param_2;
    *(undefined2 *)(iVar2 + 0x54) = *(undefined2 *)(param_1 + 0x54);
    *(undefined2 *)(iVar2 + 0x56) = *(undefined2 *)(param_1 + 0x56);
    uVar1 = *(undefined2 *)(param_1 + 0x58);
    *(undefined2 *)(iVar2 + 0x5a) = 0;
    *(undefined2 *)(iVar2 + 0x58) = uVar1;
    if (param_2 == '\0') {
      _DAT_1f8000c0 = 0;
      _DAT_1f8000c2 = 0xff90;
      _DAT_1f8000c4 = 0;
      func_0x000844c0(*(int *)(param_1 + 0xe4) + 0x18,&DAT_1f8000c0,&DAT_1f8000c8);
      *(short *)(iVar2 + 0x2e) = *(short *)(*(int *)(param_1 + 0xe4) + 0x2c) + _DAT_1f8000c8;
      *(short *)(iVar2 + 0x32) = *(short *)(*(int *)(param_1 + 0xe4) + 0x30) + _DAT_1f8000ca;
      *(short *)(iVar2 + 0x36) = *(short *)(*(int *)(param_1 + 0xe4) + 0x34) + _DAT_1f8000cc;
      *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
      DAT_1f80025a = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    uVar1 = 0xfd00;
    if (param_3 == 0) {
      uVar1 = 0x300;
    }
    *(undefined2 *)(iVar2 + 0x44) = uVar1;
    iVar3 = iVar2;
  }
  return iVar3;
}

