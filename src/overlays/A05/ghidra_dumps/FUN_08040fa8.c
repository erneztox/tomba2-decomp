// FUN_08040fa8

/* WARNING: Control flow encountered bad instruction data */

void FUN_08040fa8(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_80 [28];
  
  puVar5 = local_80;
  puVar3 = (undefined4 *)&DAT_8010a11c;
  do {
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    *puVar5 = *puVar3;
    puVar5[1] = uVar6;
    puVar5[2] = uVar7;
    puVar5[3] = uVar8;
    puVar3 = puVar3 + 4;
    puVar5 = puVar5 + 4;
  } while (puVar3 != (undefined4 *)&DAT_8010a18c);
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
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
    iVar4 = func_0x0002b278(param_1);
    if (iVar4 != 0) {
      return;
    }
    func_0x00031780(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 4) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

