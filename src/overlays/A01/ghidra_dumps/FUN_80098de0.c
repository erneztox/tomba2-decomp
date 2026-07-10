// FUN_80098de0

undefined4 FUN_80098de0(uint param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_28;
  
  local_28 = 0;
  if (param_1 < 10) {
    iVar4 = FUN_800982a0((&DAT_800acb94)[param_1]);
    iVar3 = DAT_800ac620;
    if (iVar4 == 0) {
      if (param_1 == 0) {
        uVar6 = 0x10 << (DAT_800ac62c & 0x1f);
        iVar4 = 0xfff0 << (DAT_800ac62c & 0x1f);
      }
      else {
        iVar4 = (&DAT_800acb94)[param_1];
        uVar6 = 0x10000 - iVar4 << (DAT_800ac62c & 0x1f);
        iVar4 = iVar4 << (DAT_800ac62c & 0x1f);
      }
      bVar1 = DAT_800ac620 == 1;
      if (bVar1) {
        DAT_800ac620 = 0;
      }
      bVar2 = true;
      if (DAT_800ac63c != 0) {
        local_28 = DAT_800ac63c;
        DAT_800ac63c = 0;
      }
      do {
        uVar5 = 0x400;
        if (uVar6 < 0x401) {
          bVar2 = false;
          uVar5 = uVar6;
        }
        FUN_80097194(2,iVar4);
        FUN_80097194(1);
        FUN_80097194(3,&DAT_800ac674,uVar5);
        uVar6 = uVar6 - 0x400;
        iVar4 = iVar4 + 0x400;
        FUN_80098f80(DAT_800ac58c);
      } while (bVar2);
      if (bVar1) {
        DAT_800ac620 = iVar3;
      }
      if (local_28 == 0) {
        return 0;
      }
      DAT_800ac63c = local_28;
      return 0;
    }
  }
  return 0xffffffff;
}

