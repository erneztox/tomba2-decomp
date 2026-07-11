// FUN_08022724

/* WARNING: Control flow encountered bad instruction data */

void FUN_08022724(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_80 [28];
  
  puVar4 = local_80;
  puVar3 = (undefined4 *)&DAT_80109864;
  do {
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    *puVar4 = *puVar3;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar3 = puVar3 + 4;
    puVar4 = puVar4 + 4;
  } while (puVar3 != (undefined4 *)&DAT_801098d4);
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
    uVar2 = func_0x0009a450();
    *(undefined2 *)(param_1 + 0x4e) = uVar2;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 0xff;
  }
  bVar1 = *(char *)(param_1 + 7) + 1;
  *(byte *)(param_1 + 7) = bVar1;
  if (bVar1 < 0xe) {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = local_80[(uint)*(byte *)(param_1 + 7) * 2];
    *(undefined4 *)(param_1 + 0x50) = local_80[(uint)*(byte *)(param_1 + 7) * 2 + 1];
    func_0x0002b278();
  }
  else {
    *(undefined1 *)(param_1 + 4) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

