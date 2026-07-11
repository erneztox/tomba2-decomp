// FUN_80125cdc

/* WARNING: Control flow encountered bad instruction data */

void FUN_80125cdc(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_78 [28];
  
  puVar3 = local_78;
  puVar2 = (undefined4 *)0x80109e00;
  do {
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    puVar2 = puVar2 + 4;
    puVar3 = puVar3 + 4;
  } while (puVar2 != (undefined4 *)0x80109e70);
  bVar1 = *(byte *)(param_1 + 4);
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
    *(undefined2 *)(param_1 + 0x4c) = 0x400;
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 0xff;
  }
  bVar1 = *(char *)(param_1 + 7) + 1;
  *(byte *)(param_1 + 7) = bVar1;
  if (bVar1 < 0xe) {
    *(undefined4 *)(param_1 + 0x3c) = local_78[(uint)*(byte *)(param_1 + 7) * 2];
    *(undefined4 *)(param_1 + 0x50) = local_78[(uint)*(byte *)(param_1 + 7) * 2 + 1];
    func_0x8002b278();
  }
  else {
    *(undefined1 *)(param_1 + 4) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

