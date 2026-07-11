// FUN_08013418

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0018d6bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013418(char *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  short local_30;
  short local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  iVar3 = 0x34;
  if ((param_1[0x3c] & 1U) != 0) {
    iVar3 = 0x35;
  }
  local_38 = 0;
  local_37 = 5;
  local_30 = 0x30;
  local_2e = 0x18;
  local_36 = 0;
  local_2a = 0;
  local_2c = 0;
  func_0x0007e6dc(&local_30,*(undefined4 *)(iVar3 * 4 + -0x7ffe8ccc),_DAT_800ecf58,&local_38);
  func_0x0005019c(0x8018a11c,0x40,0,5);
  func_0x00033afc(0x4000,0x14,0x3c,5);
  func_0x00033afc(0x8000,0x60,0x3c,5);
  func_0x00033afc(0x2000,0xac,0x3c,5);
  func_0x00033afc(0x1000,0xf8,0x3c,5);
  func_0x00079324(0x1c,0x38,0x12,_DAT_800a28fc,5);
  func_0x00079324(0x68,0x38,0x12,_DAT_800a3a64,5);
  func_0x00079324(0xb4,0x38,0x12,_DAT_800a28f8,5);
  if (*param_1 != '\x01') {
    func_0x00079324(0x100,0x38,0x12,_DAT_800a3a64,5);
    puVar2 = _DAT_800bf544;
    puVar1 = (undefined1 *)((int)_DAT_800bf544 + 3);
    _DAT_800bf544 = _DAT_800bf544 + 4;
    *puVar1 = 3;
    puVar2[1] = 0x10101;
    *(undefined1 *)((int)puVar2 + 7) = 0x62;
    *(undefined2 *)(puVar2 + 2) = _DAT_8018a124;
    *(undefined2 *)((int)puVar2 + 10) = _DAT_8018a126;
    *(undefined2 *)(puVar2 + 3) = _DAT_8018a128;
    *(undefined2 *)((int)puVar2 + 0xe) = _DAT_8018a12a;
    iVar3 = _DAT_800ed8c8;
    *puVar2 = *(uint *)(_DAT_800ed8c8 + 0x14) | 0x3000000;
    *(uint **)(iVar3 + 0x14) = puVar2;
    puVar2 = _DAT_800bf544;
    _DAT_800bf544 = _DAT_800bf544 + 3;
    func_0x00083de0(puVar2,0,0,0,0);
    iVar3 = _DAT_800ed8c8;
    *puVar2 = *(uint *)(_DAT_800ed8c8 + 0x14) | 0x2000000;
    *(uint **)(iVar3 + 0x14) = puVar2;
    iVar3 = 0xee;
    if ((param_1[0x3c] & 1U) != 0) {
      iVar3 = 0xef;
    }
    iVar7 = 0;
    sVar6 = 0x18;
    do {
      iVar5 = 0;
      local_30 = 0x18;
      do {
        local_38 = 0;
        sVar4 = local_30 + 0x30;
        local_37 = 6;
        local_36 = 0;
        local_2a = 0;
        local_2c = 0;
        iVar5 = iVar5 + 1;
        local_2e = sVar6;
        func_0x0007e6dc(&local_30,*(undefined4 *)(iVar3 * 4 + -0x7ffe8ccc),_DAT_800ecf58,&local_38);
        local_30 = sVar4;
      } while (iVar5 < 7);
      iVar7 = iVar7 + 1;
      sVar6 = sVar6 + 0x30;
    } while (iVar7 < 5);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

