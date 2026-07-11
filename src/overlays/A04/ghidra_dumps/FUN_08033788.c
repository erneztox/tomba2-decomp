// FUN_08033788

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08033788(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = func_0x0007a980(1,2,0);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x8012bc40;
    *(undefined1 *)(iVar2 + 2) = 0x1b;
    *(undefined1 *)(iVar2 + 3) = 4;
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    uVar1 = *(undefined2 *)(param_1 + 0x140);
    *(undefined2 *)(iVar2 + 0x6a) = 0;
    *(undefined2 *)(iVar2 + 0x60) = uVar1;
    *(undefined2 *)(iVar2 + 0x56) = uVar1;
    *(undefined1 *)(iVar2 + 0xbe) = *(undefined1 *)(param_1 + 0x147);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

