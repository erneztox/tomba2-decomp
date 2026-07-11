// FUN_801293bc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801293bc(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  
  if (*(char *)(param_1 + 6) != '\0') {
    if (1 < DAT_800bf916) {
      _DAT_1f80009c = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1f80009c = 0;
    iVar4 = func_0x8009a450();
    _DAT_80139004 = _DAT_80139004 + 0x20 + (short)(iVar4 >> 0xc);
    iVar4 = func_0x8009a450();
    _DAT_1f800080 = func_0x8009a450();
    uVar3 = _DAT_800ed8c8;
    _DAT_1f800080 = iVar4 << 0x10 | _DAT_1f800080;
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopControlWord(2,0x2800,_DAT_1f80010c);
    setCopControlWord(2,0x3000,_DAT_1f800110);
    setCopControlWord(2,0x3800,_DAT_1f800114);
    puVar8 = (ushort *)(param_1 + 0x10);
    if (DAT_800bf873 == '\0') {
      _DAT_801388f0 = _DAT_801388f0 - 1;
      if ((int)((uint)_DAT_801388f0 << 0x10) < 1) {
        _DAT_801388ec = _DAT_801388ec + 0x40;
        if (0xff < _DAT_801388ec) {
          _DAT_801388ec = 0;
          _DAT_801388ee = _DAT_801388ee + 0x40 & 0x7f;
        }
        _DAT_801388f0 = 3;
      }
      puVar8 = (ushort *)(param_1 + 0x10);
      if ((_DAT_800bfe56 & 2) == 0) {
        setCopControlWord(2,0xa800,0x500);
        setCopControlWord(2,0xb000,0);
        setCopControlWord(2,0xb800,0);
        bVar1 = *(byte *)(param_1 + 6);
        iVar4 = *(int *)(param_1 + 0xc);
        for (puVar8 = (ushort *)(param_1 + 0x10);
            puVar8 < (ushort *)(param_1 + (uint)bVar1 * 2 + 0x10); puVar8 = puVar8 + 1) {
          puVar6 = (uint *)(iVar4 + (uint)*puVar8 * 4);
          uVar7 = *puVar6;
          uVar5 = FUN_8012f8d8(puVar6 + 1,uVar3,uVar7 & 0xffff);
          FUN_8013000c(uVar5,uVar3,uVar7 >> 0x10);
        }
        if (DAT_800bf871 < 0xf) {
          FUN_801311fc();
        }
      }
      else {
        puVar9 = (ushort *)(param_1 + (uint)*(byte *)(param_1 + 6) * 2 + 0x10);
        iVar4 = *(int *)(param_1 + 0xc);
        if (puVar8 < puVar9) {
          do {
            uVar2 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar6 = (uint *)(iVar4 + (uint)uVar2 * 4);
            uVar7 = *puVar6;
            uVar5 = FUN_80130838(puVar6 + 1,uVar3,uVar7 & 0xffff);
            FUN_80130d9c(uVar5,uVar3,uVar7 >> 0x10);
          } while (puVar8 < puVar9);
          halt_baddata();
        }
      }
    }
    else {
      puVar9 = (ushort *)(param_1 + (uint)*(byte *)(param_1 + 6) * 2 + 0x10);
      iVar4 = *(int *)(param_1 + 0xc);
      setCopControlWord(2,0xa800,0);
      setCopControlWord(2,0xb000,0);
      setCopControlWord(2,0xb800,0);
      if (puVar8 < puVar9) {
        do {
          uVar2 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar6 = (uint *)(iVar4 + (uint)uVar2 * 4);
          uVar7 = *puVar6;
          uVar5 = FUN_801316a8(puVar6 + 1,uVar3,uVar7 & 0xffff,0);
          func_0x80131bb0(uVar5,uVar3,uVar7 >> 0x10,0);
        } while (puVar8 < puVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}

