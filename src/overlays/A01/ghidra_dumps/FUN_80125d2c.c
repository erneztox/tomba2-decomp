// FUN_80125d2c

/* WARNING: Control flow encountered bad instruction data */

void FUN_80125d2c(int param_1,undefined1 param_2)

{
  byte bVar1;
  int iVar2;
  int in_v1;
  
  if (in_v1 < 2) {
    if (in_v1 == 0) {
      *(undefined2 *)(param_1 + 0x4c) = 0x400;
      *(undefined2 *)(param_1 + 0x48) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(undefined2 *)(param_1 + 0x4e) = 0;
      *(undefined1 *)(param_1 + 4) = param_2;
      *(undefined1 *)(param_1 + 7) = 0xff;
      bVar1 = *(char *)(param_1 + 7) + 1;
      *(byte *)(param_1 + 7) = bVar1;
      if (bVar1 < 0xe) {
        iVar2 = (uint)*(byte *)(param_1 + 7) * 8;
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(&stack0x00000010 + iVar2);
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(&stack0x00000014 + iVar2);
        func_0x8002b278();
      }
      else {
        *(undefined1 *)(param_1 + 4) = 2;
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (3 < in_v1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

