// FUN_080175a4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080175a4(int param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  
  bVar3 = false;
  bVar1 = *(byte *)(param_1 + 4);
  puVar8 = (undefined1 *)(param_1 + 0x50);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    iVar7 = 0;
    puVar6 = puVar8;
    if (bVar1 != 0) {
      halt_baddata();
    }
    do {
      iVar7 = iVar7 + 1;
      uVar4 = func_0x0009a450();
      *puVar6 = uVar4;
      uVar4 = func_0x0009a450();
      puVar6[1] = uVar4;
      uVar4 = func_0x0009a450();
      puVar6[2] = uVar4;
      puVar6[3] = 0;
      puVar6 = puVar6 + 4;
    } while (iVar7 < 0xe);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  iVar7 = 0;
  do {
    if (-1 < (char)puVar8[3]) {
      bVar3 = true;
      uVar5 = func_0x0009a450();
      if ((uVar5 & 0x400) != 0) {
        puVar8[3] = puVar8[3] + '\x01';
      }
      cVar2 = puVar8[3];
      puVar8[3] = cVar2 + '\x01';
      if ('\x15' < (char)(cVar2 + '\x01')) {
        puVar8[3] = 0xff;
      }
    }
    iVar7 = iVar7 + 1;
    puVar8 = puVar8 + 4;
  } while (iVar7 < 0xe);
  if (bVar3) {
    func_0x0002b278(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 4) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

