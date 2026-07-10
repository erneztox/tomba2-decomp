// FUN_00002e50

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002e50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  puVar7 = (undefined2 *)&DAT_8011baec;
  *(undefined1 *)(param_1 + 8) = 5;
  *(undefined1 *)(param_1 + 9) = 5;
  iVar2 = _DAT_800ecfa0;
  puVar6 = (undefined2 *)&DAT_8011baf8;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  iVar5 = param_1;
  while( true ) {
    iVar1 = func_0x0007aae8();
    *(int *)(iVar5 + 0xc0) = iVar1;
    *(undefined2 *)(iVar1 + 6) = *puVar7;
    **(undefined2 **)(iVar5 + 0xc0) = puVar6[-5];
    *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2) = puVar6[-4];
    *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4) = puVar6[-3];
    *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 8) = puVar6[-2];
    *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 10) = puVar6[-1];
    *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0xc) = *puVar6;
    if (iVar5 == param_1) break;
    *(int *)(*(int *)(iVar5 + 0xc0) + 0x40) = iVar2 + *(int *)(iVar2 + 8);
    puVar6 = puVar6 + 7;
    iVar5 = iVar5 + 4;
    puVar7 = puVar7 + 7;
    if (param_1 + 0x14 <= iVar5) {
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x8a) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0x80111b48;
      *(undefined2 *)(param_1 + 0x6c) = 0x8d0;
      *(undefined1 *)(param_1 + 0x72) = 1;
      *(undefined2 *)(param_1 + 100) = 0;
      *(undefined2 *)(param_1 + 0x66) = 0;
      *(undefined2 *)(param_1 + 0x68) = 0;
      *(undefined2 *)(param_1 + 0x6a) = 0;
      *(undefined2 *)(param_1 + 0x76) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      if (*(int *)(param_1 + 0x1c) == -0x7fef4c84) {
        _DAT_1f80020c = 0;
        _DAT_1f800208 = param_1;
        iVar2 = func_0x000310f4(0x402,0xffffffc4);
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x50) = 2;
          *(undefined4 *)(iVar2 + 0x54) = 0xffffff60;
          *(int *)(iVar2 + 0x10) = param_1;
        }
        iVar2 = func_0x000310f4(0x402,0xffffffc4);
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x50) = 4;
          *(undefined4 *)(iVar2 + 0x54) = 0xa0;
          *(int *)(iVar2 + 0x10) = param_1;
        }
        iVar2 = 0;
        puVar3 = (undefined4 *)&DAT_8011bcd8;
        puVar4 = (undefined4 *)&DAT_8011bcdc;
        do {
          *puVar3 = 0;
          *puVar4 = 0;
          puVar4 = puVar4 + 2;
          iVar2 = iVar2 + 1;
          puVar3 = puVar3 + 2;
        } while (iVar2 < 0x80);
        _DAT_8011c0d8 = 0;
        _DAT_8011c0dc = 0;
      }
      *(undefined2 *)(param_1 + 0x42) = 0;
      *(undefined2 *)(param_1 + 0x78) = 0;
      *(undefined2 *)(param_1 + 0x7a) = 0;
      *(undefined1 *)(param_1 + 0x73) = 0;
      return;
    }
  }
  if ((DAT_800bf908 == -1) && (DAT_800bf907 == -1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

