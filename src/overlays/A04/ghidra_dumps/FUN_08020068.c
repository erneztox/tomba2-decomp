// FUN_08020068

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08020068(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = func_0x00072ddc(param_1,0,5,3);
  if (iVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 3);
    *(undefined4 *)(iVar2 + 0x1c) = 0x80118a8c;
    *(byte *)(iVar2 + 3) = bVar1 & 3;
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

