// FUN_08032900

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08032900(undefined4 param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 * 10;
  iVar1 = func_0x0004d7ec((int)*(short *)(param_2 + -0x7feba55e),1);
  if ((iVar1 == 0) && (iVar1 = func_0x00072ddc(param_1,2,2,8), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012b97c;
    *(undefined1 *)(iVar1 + 0x5e) = 0;
    *(undefined2 *)(iVar1 + 0xe) = *(undefined2 *)(param_2 + -0x7feba55e);
    *(undefined1 *)(iVar1 + 3) = *(undefined1 *)(param_2 + -0x7feba55c);
    *(undefined2 *)(iVar1 + 0x68) = *(undefined2 *)(param_2 + -0x7feba55a);
    *(undefined2 *)(iVar1 + 0x60) = *(undefined2 *)(param_2 + -0x7feba558);
    if (*(short *)(iVar1 + 0x68) != 0) {
      *(undefined2 *)(iVar1 + 0x62) = 4;
      *(undefined2 *)(iVar1 + 100) = 2;
      *(undefined1 *)(iVar1 + 0x2a) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

