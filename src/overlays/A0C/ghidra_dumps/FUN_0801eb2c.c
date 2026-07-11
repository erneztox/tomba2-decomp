// FUN_0801eb2c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801eb2c(int param_1)

{
  int iVar1;
  
  if ((DAT_1f80025a < 4) && (iVar1 = func_0x00072ddc(param_1,3,2,0x40), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801172b0;
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar1 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    func_0x0003116c(0xd00,iVar1 + 0x2c,0xfffffff6);
    func_0x00074590(0x8b,0,0);
    DAT_1f80025a = DAT_1f80025a + 1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

