// FUN_80067da8

void FUN_80067da8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  if (DAT_800bf88d == 1) {
    puVar1 = &DAT_800a4840;
    puVar3 = (undefined *)0x800a4860;
    puVar2 = (undefined *)0x800a4900;
    puVar5 = (undefined *)0x800a4920;
    puVar4 = (undefined *)0x800a49a0;
  }
  else if (DAT_800bf88d < 2) {
    if (DAT_800bf88d != 0) {
      return;
    }
    puVar1 = &DAT_800a4800;
    puVar3 = &DAT_800a4820;
    puVar2 = &DAT_800a48c0;
    puVar5 = &DAT_800a48e0;
    puVar4 = &DAT_800a4980;
  }
  else {
    if (DAT_800bf88d != 2) {
      return;
    }
    puVar1 = &DAT_800a4880;
    puVar3 = (undefined *)0x800a48a0;
    puVar2 = (undefined *)0x800a4940;
    puVar5 = (undefined *)0x800a4960;
    puVar4 = (undefined *)0x800a49c0;
  }
  local_1c = 0x10;
  local_1a = 1;
  local_20 = 0x1f0;
  local_1e = 0x1e2;
  FUN_80081218(&local_20,puVar1);
  local_1e = 0x1e5;
  FUN_80081218(&local_20,puVar3);
  local_1e = 0x1c9;
  FUN_80081218(&local_20,puVar2);
  local_1e = 0x1d0;
  FUN_80081218(&local_20,puVar5);
  local_1e = 0x1b3;
  FUN_80081218(&local_20,puVar4);
  return;
}

