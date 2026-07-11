// FUN_0803f968

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803f968(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  bVar3 = *(byte *)(param_1 + 4);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 != 2) {
        if (bVar3 == 3) {
          func_0x0007a624(param_1);
          return;
        }
        halt_baddata();
      }
      bVar3 = *(char *)(param_1 + 5) + 1;
      *(byte *)(param_1 + 5) = bVar3;
      if (0xb < bVar3) {
        *(undefined1 *)(param_1 + 4) = 3;
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x2aa;
      halt_baddata();
    }
    if (bVar3 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  uVar6 = *(ushort *)(param_1 + 0x50) & 0xff00;
  cVar1 = *(char *)(param_1 + 5);
  *(uint *)(param_1 + 0x50) = uVar6 + (0x7800 - (short)uVar6 >> 1) & 0xff00 | 0x100010;
  *(byte *)(param_1 + 5) = cVar1 + 1U;
  if ((cVar1 == '\x02') || ((cVar1 + 1U & 0xf) == 7)) {
    iVar4 = func_0x000310f4(0x60e,0xffffffe2);
    if (iVar4 != 0) {
      *(undefined2 *)(iVar4 + 0x32) = 0xfed4;
      *(undefined2 *)(iVar4 + 0x2c) = *(undefined2 *)(param_1 + 0x2c);
      *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(iVar4 + 0x30) = *(undefined2 *)(param_1 + 0x30);
      *(undefined2 *)(iVar4 + 0x48) = *(undefined2 *)(param_1 + 0x48);
      *(undefined2 *)(iVar4 + 0x4a) = *(undefined2 *)(param_1 + 0x4a);
      uVar2 = *(undefined2 *)(param_1 + 0x4c);
      *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
      *(undefined2 *)(iVar4 + 0x4c) = uVar2;
    }
    iVar4 = 0;
    do {
      iVar5 = func_0x000310f4(0x611,0xffffffe2);
      if (iVar5 != 0) {
        *(undefined2 *)(iVar5 + 0x32) = 0xfed4;
        *(undefined2 *)(iVar5 + 0x2c) = *(undefined2 *)(param_1 + 0x2c);
        *(undefined2 *)(iVar5 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
        *(undefined2 *)(iVar5 + 0x30) = *(undefined2 *)(param_1 + 0x30);
        *(undefined2 *)(iVar5 + 0x48) = *(undefined2 *)(param_1 + 0x48);
        *(undefined2 *)(iVar5 + 0x4a) = *(undefined2 *)(param_1 + 0x4a);
        uVar2 = *(undefined2 *)(param_1 + 0x4c);
        *(byte *)(iVar5 + 0x28) = *(byte *)(iVar5 + 0x28) | 0x80;
        *(undefined2 *)(iVar5 + 0x4c) = uVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
  }
  else {
    if (cVar1 != '\x13') {
      return;
    }
    *(undefined1 *)(param_1 + 4) = 2;
    *(undefined1 *)(param_1 + 5) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

