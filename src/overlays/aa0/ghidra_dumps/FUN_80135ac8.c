// FUN_80135ac8

/* WARNING: Control flow encountered bad instruction data */

void FUN_80135ac8(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_28 [4];
  
  if (*(byte *)(param_1 + 3) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(byte *)(param_1 + 3) < 3) {
    local_30 = *(undefined2 *)(param_1 + 0x2e);
    local_2c = *(undefined2 *)(param_1 + 0x60);
  }
  iVar7 = 1;
  iVar6 = 6;
  local_2e = *(undefined2 *)(param_1 + 0x62);
  puVar2 = local_28;
  puVar5 = &local_30;
  iVar1 = param_1;
  do {
    puVar4 = puVar2;
    if (*(byte *)(param_1 + 3) == 0) {
      *puVar4 = *(undefined2 *)(iVar1 + 100);
      puVar4[2] = *(undefined2 *)(param_1 + 0x36);
      FUN_8013eb40();
      return;
    }
    if (*(byte *)(param_1 + 3) < 3) {
      *puVar4 = *(undefined2 *)(param_1 + 0x2e);
      puVar4[2] = *(undefined2 *)(iVar1 + 100);
    }
    iVar3 = param_1 + iVar6;
    iVar6 = iVar6 + 4;
    iVar7 = iVar7 + 1;
    puVar4[1] = *(undefined2 *)(iVar3 + 0x60);
    FUN_8013dd34(puVar5,puVar4);
    puVar2 = puVar5;
    puVar5 = puVar4;
    iVar1 = iVar1 + 4;
  } while (iVar7 < 8);
  return;
}

