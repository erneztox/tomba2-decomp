
void FUN_80037894(int param_1,undefined2 param_2,undefined1 param_3)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  undefined1 local_28;
  undefined1 local_27;
  undefined2 local_26;
  short local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  
  puVar1 = PTR_DAT_800174bc;
  iVar3 = 0;
  local_28 = 0;
  local_26 = 0;
  local_1c = 0;
  local_20 = 0x18;
  local_27 = param_3;
  local_1e = param_2;
  do {
    sVar2 = local_20 + 8;
    iVar3 = iVar3 + 1;
    FUN_8007e6dc(&local_20,puVar1,*(undefined4 *)(param_1 + 4),&local_28);
    local_20 = sVar2;
  } while (iVar3 < 0x22);
  return;
}

