// FUN_000072cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000072cc(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    iVar3 = 199;
    if (bVar1 != 0) {
      halt_baddata();
    }
    puVar2 = (undefined4 *)&DAT_80126b88;
    do {
      *puVar2 = 0;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar3);
    *(undefined2 *)(param_1 + 0x4a) = 0x400;
    *(undefined2 *)(param_1 + 0x2c) = 0x8f2;
    *(undefined2 *)(param_1 + 0x2e) = 0xf537;
    *(undefined2 *)(param_1 + 0x30) = 0x2400;
    _DAT_1f800260 = param_1;
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  if (4 < *(byte *)(param_1 + 5)) {
    *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not emulate address calculation at 0x0000738c */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6dfc))();
  return;
}

