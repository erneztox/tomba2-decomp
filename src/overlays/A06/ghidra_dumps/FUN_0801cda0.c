// FUN_0801cda0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801cda0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar3 = func_0x00026ad0(param_1);
    if (iVar3 != 0) {
      func_0x00115624(param_1,*(undefined1 *)(param_1 + 3));
    }
    func_0x00115a04(param_1);
    func_0x00115bc8(1);
    func_0x00026a68(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007add0(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      func_0x00115624(param_1,0);
      func_0x00115bc8(0);
      func_0x0013d668();
      uVar4 = 10;
      if ((DAT_800bf871 < 6) || (uVar4 = 0x12, 8 < DAT_800bf871)) {
        func_0x0004d8d8(uVar4,0);
      }
      func_0x0013fcf0();
      if ((DAT_800bf816 != '\0') && ((DAT_800bf817 == '\x04' || (DAT_800bf817 == '\t')))) {
        cVar2 = DAT_800bf817 + '\x01';
        *(char *)(param_1 + 3) = cVar2;
        func_0x00115624(param_1,cVar2);
        *(undefined1 *)(param_1 + 5) = 3;
      }
      func_0x000752b4(0);
      func_0x00075d24(0x1fff);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

