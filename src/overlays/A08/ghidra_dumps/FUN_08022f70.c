// FUN_08022f70

/* WARNING: Control flow encountered bad instruction data */

void FUN_08022f70(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar2 + 0x2e);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar2 + 0x32);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar2 + 0x36);
  func_0x00031220(0x914,param_1 + 0x2c,0xffffffe2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

