// FUN_080308a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080308a0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  *(undefined1 *)(param_1 + 1) = 1;
  if (bVar1 == 1) {
    iVar2 = *(int *)(param_1 + 0x10);
    *(short *)(param_1 + 0x2e) =
         (short)((*(int *)(*(int *)(iVar2 + 0xd0) + 0x2c) + *(int *)(*(int *)(iVar2 + 0xdc) + 0x2c))
                / 2);
    *(short *)(param_1 + 0x32) =
         (short)((*(int *)(*(int *)(iVar2 + 0xd0) + 0x30) + *(int *)(*(int *)(iVar2 + 0xdc) + 0x30))
                / 2) + -0x28;
    *(short *)(param_1 + 0x36) =
         (short)((*(int *)(*(int *)(iVar2 + 0xd0) + 0x34) + *(int *)(*(int *)(iVar2 + 0xdc) + 0x34))
                / 2);
  }
  else if ((bVar1 < 2) && (bVar1 == 0)) {
    func_0x0004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

