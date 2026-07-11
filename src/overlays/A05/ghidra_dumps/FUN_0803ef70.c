// FUN_0803ef70

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803ef70(int param_1)

{
  undefined2 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 uStack_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28 = _DAT_8010a18c;
  local_24 = _DAT_8010a190;
  local_20 = _DAT_8010a194;
  local_1c = _DAT_8010a198;
  local_18 = _DAT_8010a19c;
  local_14 = _DAT_8010a1a0;
  local_10 = _DAT_8010a1a4;
  local_c = _DAT_8010a1a8;
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar2 != 0) {
      halt_baddata();
    }
    bVar2 = func_0x0009a450();
    *(byte *)(param_1 + 3) = bVar2 & 3;
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (1 < (bVar2 & 3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x50) = 0x202020;
    uVar4 = (uint)*(byte *)(param_1 + 3);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x2c) = (&local_28)[uVar4 * 2];
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(&stack0xffffffdc + uVar4 * 2);
    uVar1 = (&uStack_22)[uVar4 * 4];
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 5) = 10;
    *(undefined2 *)(param_1 + 0x48) = uVar1;
  }
  cVar3 = *(char *)(param_1 + 5) + -1;
  *(char *)(param_1 + 5) = cVar3;
  if ((cVar3 == -1) || (0x11 < DAT_800bf9c6)) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    bVar2 = *(char *)(param_1 + 0x29) + 0x28;
    *(byte *)(param_1 + 0x29) = bVar2;
    if (0x78 < bVar2) {
      *(undefined1 *)(param_1 + 0x29) = 0;
    }
    func_0x0002b278(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

