// FUN_08043d98

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08043d98(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  
  uVar3 = _DAT_800ed8c8;
  if (*(char *)(param_1 + 6) != '\0') {
    if (1 < DAT_800bf918) {
      _DAT_1f80009c = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1f80009c = 0;
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopControlWord(2,0x2800,_DAT_1f80010c);
    setCopControlWord(2,0x3000,_DAT_1f800110);
    setCopControlWord(2,0x3800,_DAT_1f800114);
    puVar7 = (ushort *)(param_1 + 0x10);
    if (DAT_800bf873 == '\0') {
      bVar1 = *(byte *)(param_1 + 6);
      iVar9 = *(int *)(param_1 + 0xc);
      for (; puVar7 < (ushort *)(param_1 + (uint)bVar1 * 2 + 0x10); puVar7 = puVar7 + 1) {
        puVar5 = (uint *)(iVar9 + (uint)*puVar7 * 4);
        uVar6 = *puVar5;
        uVar4 = func_0x0013ba44(puVar5 + 1,uVar3,uVar6 & 0xff);
        func_0x0013bd40(uVar4,uVar3,uVar6 >> 0x10 & 0xff);
      }
    }
    else {
      iVar9 = *(int *)(param_1 + 0xc);
      puVar8 = (ushort *)(param_1 + (uint)*(byte *)(param_1 + 6) * 2 + 0x10);
      setCopControlWord(2,0xa800,0);
      setCopControlWord(2,0xb000,0);
      setCopControlWord(2,0xb800,0);
      if (puVar7 < puVar8) {
        do {
          uVar2 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar5 = (uint *)(iVar9 + (uint)uVar2 * 4);
          uVar6 = *puVar5;
          uVar4 = func_0x0013c0d8(puVar5 + 1,uVar3,uVar6 & 0xffff,0);
          func_0x0013c5b4(uVar4,uVar3,uVar6 >> 0x10,0);
        } while (puVar7 < puVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}

