// FUN_08043e78

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08043e78(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        uVar3 = *(int *)(param_1 + 0x50) + 0xcc;
        *(uint *)(param_1 + 0x50) = uVar3;
        if (0xfff < uVar3) {
          *(undefined1 *)(param_1 + 4) = 3;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624();
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0xffce;
  }
  if (((_DAT_1f80017c & 1) != 0) &&
     (sVar2 = *(short *)(param_1 + 0x4e) + 1, *(short *)(param_1 + 0x4e) = sVar2, sVar2 == 0x19)) {
    DAT_800bf917 = 2;
    *(undefined1 *)(param_1 + 4) = 2;
  }
  *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

