// FUN_0801ef90

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801ef90(int param_1,undefined1 param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = func_0x0007a980(1,2,0);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x80117d1c;
    *(undefined1 *)(iVar2 + 2) = 0xd2;
    *(undefined1 *)(iVar2 + 3) = 0;
    _DAT_1f8000c0 = 0;
    _DAT_1f8000c2 = 0;
    _DAT_1f8000c4 = 0;
    func_0x000844c0(*(int *)(param_1 + 0xc4) + 0x18,&DAT_1f8000c0,&DAT_1f8000c8);
    *(short *)(iVar2 + 0x2e) = *(short *)(*(int *)(param_1 + 0xc4) + 0x2c) + _DAT_1f8000c8;
    *(short *)(iVar2 + 0x32) = *(short *)(*(int *)(param_1 + 0xc4) + 0x30) + _DAT_1f8000ca;
    *(short *)(iVar2 + 0x36) = *(short *)(*(int *)(param_1 + 0xc4) + 0x34) + _DAT_1f8000cc;
    uVar1 = *(undefined1 *)(param_1 + 0x2a);
    *(undefined1 *)(iVar2 + 0xbe) = param_2;
    *(undefined1 *)(iVar2 + 0x2a) = uVar1;
    func_0x00074590(0x8c,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

