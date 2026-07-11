// FUN_08035208

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08035208(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((DAT_800bf936 & 0x20) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = 0;
  if (DAT_800bf9d4 == '\0') {
    iVar2 = func_0x00072ddc(param_1,0,2,0x56);
    if (iVar2 == 0) {
      halt_baddata();
    }
    *(undefined4 *)(iVar2 + 0x1c) = 0x8012da44;
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    DAT_800bf9d4 = '\x01';
    func_0x0003116c(0x30,iVar2 + 0x2c,0xfffffff6);
    func_0x00074590(0x37,0x20,0);
    uVar1 = 1;
  }
  return uVar1;
}

