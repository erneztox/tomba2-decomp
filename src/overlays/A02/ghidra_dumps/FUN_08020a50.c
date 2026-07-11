// FUN_08020a50

/* WARNING: Control flow encountered bad instruction data */

void FUN_08020a50(int param_1)

{
  short sVar1;
  ushort uVar2;
  undefined1 *puVar3;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if (DAT_800bf8be == -1) {
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined2 *)(param_1 + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(ushort *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1U & 7;
    func_0x001255c0(0x20);
    sVar1 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar1 + -1;
    if (sVar1 == 1) {
      puVar3 = (undefined1 *)func_0x00072ddc(param_1,0,2,0x20);
      if (puVar3 != (undefined1 *)0x0) {
        puVar3[3] = 2;
        *puVar3 = 1;
        *(undefined4 *)(puVar3 + 0x1c) = 0x80123470;
        puVar3[0x28] = puVar3[0x28] | 0x80;
      }
      uVar2 = func_0x0009a450();
      *(ushort *)(param_1 + 0x42) = (uVar2 & 0xff) + 0x1e;
    }
  }
  return;
}

