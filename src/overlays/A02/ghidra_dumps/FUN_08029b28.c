// FUN_08029b28

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08029b28(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_20 [2];
  short local_1e;
  undefined2 local_1a;
  short local_16;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 3) == '\0') {
      if (*(char *)(param_1 + 5) != '\0') {
        sVar3 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar3 + -1;
        if (sVar3 == 1) {
          *(undefined1 *)(param_1 + 5) = 0;
          puVar5 = (undefined1 *)func_0x00072ddc(param_1,0,2,0x1f);
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = 1;
            *(undefined2 *)(puVar5 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
            *(undefined2 *)(puVar5 + 0x32) = *(undefined2 *)(param_1 + 0x32);
            uVar2 = *(undefined2 *)(param_1 + 0x36);
            puVar5[3] = 1;
            *(undefined4 *)(puVar5 + 0x1c) = 0x80122ac4;
            *(undefined2 *)(puVar5 + 0x36) = uVar2;
            halt_baddata();
          }
        }
        return;
      }
      uVar4 = func_0x0009a450();
      *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)((uVar4 & 3) * 2 + -0x7fed3958);
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    else {
      bVar1 = *(byte *)(param_1 + 5);
      if (bVar1 == 1) {
        func_0x00077b5c(param_1);
        sVar3 = *(short *)(param_1 + 0x42);
        if (*(short *)(param_1 + 0x42) != 0) {
          *(short *)(param_1 + 0x42) = sVar3 + -1;
          *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - sVar3;
        }
        sVar3 = *(short *)(param_1 + 0x44) + 0x300;
        *(short *)(param_1 + 0x44) = sVar3;
        if (0x3000 < sVar3) {
          *(undefined2 *)(param_1 + 0x44) = 0x3000;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x44) * 0x100;
        if (*(short *)(param_1 + 0x7c) < 0x1800) {
          *(short *)(param_1 + 0x7c) = *(short *)(param_1 + 0x7c) + 0x66;
        }
        func_0x00111fb4(param_1);
        iVar6 = func_0x0010a868(param_1);
        iVar8 = 0;
        if (iVar6 != 0) {
          *(undefined2 *)(param_1 + 0x56) = 0;
          do {
            iVar8 = iVar8 + 1;
            iVar6 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
            iVar7 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
            local_1e = *(short *)(param_1 + 0x2e) + (short)(iVar6 * 0x46 >> 0xc);
            *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x400;
            local_1a = *(undefined2 *)(param_1 + 0x32);
            local_16 = *(short *)(param_1 + 0x36) - (short)(iVar7 * 0x46 >> 0xc);
            func_0x0003116c(0,auStack_20,0xffffffa6);
          } while (iVar8 < 4);
          *(undefined2 *)(param_1 + 0x40) = 8;
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
          halt_baddata();
        }
      }
      else if (bVar1 < 2) {
        if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar6 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_1 + 0x42);
        *(short *)(param_1 + 0x36) = (short)iVar6;
        if (iVar6 * 0x10000 >> 0x10 < 0x3622) {
          *(undefined1 *)(param_1 + 0x29) = 0;
          *(undefined2 *)(param_1 + 0x44) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 2) {
          halt_baddata();
        }
        func_0x00077b5c(param_1);
        sVar3 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar3 + -1;
        if (sVar3 == 1) {
          *(undefined1 *)(param_1 + 4) = 3;
        }
        *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + -0x100;
        *(short *)(param_1 + 0x7e) = *(short *)(param_1 + 0x7e) + -0xcc;
        *(short *)(param_1 + 0x7c) = *(short *)(param_1 + 0x7c) + -0xcc;
      }
      func_0x0007778c(param_1);
    }
  }
  else {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 0) {
      if (DAT_800bf8be == -1) {
        *(undefined1 *)(param_1 + 0xb) = 0x11;
        *(undefined2 *)(param_1 + 0x7c) = 0xfff;
        *(undefined2 *)(param_1 + 0x7a) = 0x1000;
        *(undefined2 *)(param_1 + 0x7e) = 0x1000;
        *(undefined1 *)(param_1 + 8) = 0xd0;
        *(undefined2 *)(param_1 + 0x82) = 0xa0;
        *(undefined1 *)(param_1 + 4) = 1;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined2 *)(param_1 + 0x5c) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined1 *)(param_1 + 0x47) = 0;
        *(undefined2 *)(param_1 + 0x80) = 0x50;
        *(undefined2 *)(param_1 + 0x84) = 0x50;
        *(undefined2 *)(param_1 + 0x86) = 0x50;
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
        func_0x00077b38(param_1,0x80139100,0x15);
        *(undefined2 *)(param_1 + 0x42) = 10;
      }
      else {
        *(undefined1 *)(param_1 + 4) = 3;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

