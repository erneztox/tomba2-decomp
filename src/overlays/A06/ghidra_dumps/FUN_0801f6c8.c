// FUN_0801f6c8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801f6c8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short local_28;
  short local_26;
  undefined2 local_24;
  short local_20;
  short local_1e;
  undefined2 local_1c;
  
  func_0x00084660(&DAT_1f8000f8);
  func_0x00084690(&DAT_1f8000f8);
  if (*(char *)(param_1 + 0x5e) == '\0') {
    iVar5 = 0;
    iVar4 = 9;
    iVar3 = -0x7febb764;
    bVar1 = true;
    iVar2 = iVar3;
    do {
      iVar2 = iVar2 + 0x6c;
      if (!bVar1) {
        iVar2 = -0x7febb338;
        iVar4 = 0x59;
      }
      local_28 = *(short *)(iVar3 + 6);
      local_26 = *(undefined2 *)(iVar3 + 8);
      local_24 = *(undefined2 *)(iVar3 + 10);
      iVar5 = iVar5 + 9;
      local_20 = *(short *)(iVar2 + 6);
      iVar4 = iVar4 + 9;
      local_1e = *(undefined2 *)(iVar2 + 8);
      iVar3 = iVar3 + 0x6c;
      local_1c = *(undefined2 *)(iVar2 + 10);
      func_0x0011847c(&local_28,&local_20,0x103050);
      bVar1 = iVar4 < 0x5a;
    } while (iVar5 < 0x5a);
  }
  else {
    iVar2 = 0;
    if (*(char *)(param_1 + 0x5e) != '\x01') {
      iVar5 = 9;
      iVar4 = -0x7febb980;
      bVar1 = true;
      iVar3 = iVar4;
      do {
        iVar3 = iVar3 + 0x6c;
        if (!bVar1) {
          iVar3 = -0x7febb770;
          iVar5 = 0x2c;
        }
        local_28 = *(short *)(iVar4 + 6);
        local_26 = *(undefined2 *)(iVar4 + 8);
        local_24 = *(undefined2 *)(iVar4 + 10);
        iVar2 = iVar2 + 9;
        local_20 = *(short *)(iVar3 + 6);
        iVar5 = iVar5 + 9;
        local_1e = *(undefined2 *)(iVar3 + 8);
        iVar4 = iVar4 + 0x6c;
        local_1c = *(undefined2 *)(iVar3 + 10);
        func_0x0011847c(&local_28,&local_20,0x103050);
        bVar1 = iVar5 < 0x2d;
      } while (iVar2 < 0x2d);
      local_28 = 0x1cc1;
      local_26 = 0xf5d8;
      local_24 = 0x1a40;
      func_0x0011847c(&local_20,&local_28,0x103050);
      return;
    }
    iVar5 = 9;
    iVar4 = -0x7febbdb8;
    bVar1 = true;
    iVar3 = iVar4;
    do {
      iVar3 = iVar3 + 0x6c;
      if (!bVar1) {
        iVar3 = -0x7febb98c;
        iVar5 = 0x59;
      }
      local_28 = *(short *)(iVar4 + 6) + 0x99;
      local_26 = *(short *)(iVar4 + 8) + 0xf9;
      local_24 = *(undefined2 *)(iVar4 + 10);
      iVar2 = iVar2 + 9;
      iVar5 = iVar5 + 9;
      local_20 = *(short *)(iVar3 + 6) + 0x99;
      iVar4 = iVar4 + 0x6c;
      local_1e = *(short *)(iVar3 + 8) + 0xf9;
      local_1c = *(undefined2 *)(iVar3 + 10);
      func_0x0011847c(&local_28,&local_20,0x103050);
      bVar1 = iVar5 < 0x5a;
    } while (iVar2 < 0x5a);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

