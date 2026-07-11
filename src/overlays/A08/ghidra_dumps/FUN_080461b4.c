// FUN_080461b4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080461b4(char *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  undefined1 local_30;
  undefined1 local_2f;
  undefined2 local_2e;
  short local_28;
  short local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  func_0x00079374(0x14,0x12,0,0x8010a4ac,5);
  func_0x0005019c(0x8010a4b4,0x40,0,5);
  func_0x00033afc(0x4000,0x14,0x3c,5);
  func_0x00033afc(0x8000,0x60,0x3c,5);
  func_0x00033afc(0x2000,0xac,0x3c,5);
  func_0x00033afc(0x1000,0xf8,0x3c,5);
  func_0x00079324(0x1c,0x38,0x12,_DAT_800a28fc,5);
  func_0x00079324(0x68,0x38,0x12,_DAT_800a3a64,5);
  if (*param_1 == 'k') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00079324(0xb4,0x38,0x12,_DAT_800a28f8,5);
  if (*param_1 == 'e') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00079324(0x100,0x38,0x12,_DAT_800a3a64,5);
  puVar2 = _DAT_800bf544;
  puVar1 = (undefined1 *)((int)_DAT_800bf544 + 3);
  _DAT_800bf544 = _DAT_800bf544 + 4;
  *puVar1 = 3;
  puVar2[1] = 0x10101;
  *(undefined1 *)((int)puVar2 + 7) = 0x62;
  *(undefined2 *)(puVar2 + 2) = _DAT_8010a4bc;
  *(undefined2 *)((int)puVar2 + 10) = _DAT_8010a4be;
  *(undefined2 *)(puVar2 + 3) = _DAT_8010a4c0;
  *(undefined2 *)((int)puVar2 + 0xe) = _DAT_8010a4c2;
  iVar6 = _DAT_800ed8c8;
  *puVar2 = *(uint *)(_DAT_800ed8c8 + 0x14) | 0x3000000;
  *(uint **)(iVar6 + 0x14) = puVar2;
  puVar2 = _DAT_800bf544;
  _DAT_800bf544 = _DAT_800bf544 + 3;
  func_0x00083de0(puVar2,0,0,0,0);
  iVar6 = _DAT_800ed8c8;
  *puVar2 = *(uint *)(_DAT_800ed8c8 + 0x14) | 0x2000000;
  *(uint **)(iVar6 + 0x14) = puVar2;
  iVar6 = 0;
  sVar5 = 0x18;
  do {
    iVar4 = 0;
    local_28 = 0x18;
    do {
      sVar3 = local_28 + 0x30;
      iVar4 = iVar4 + 1;
      local_30 = 0;
      local_2f = 6;
      local_2e = 0;
      local_22 = 0;
      local_24 = 0;
      local_26 = sVar5;
      func_0x0007e6dc(&local_28,_DAT_800176f4,_DAT_800ecf58,&local_30);
      local_28 = sVar3;
    } while (iVar4 < 7);
    iVar6 = iVar6 + 1;
    sVar5 = sVar5 + 0x30;
  } while (iVar6 < 5);
  return;
}

