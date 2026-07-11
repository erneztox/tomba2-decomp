// FUN_0801743c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801743c(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  
  bVar1 = *(byte *)(param_1 + 6);
  puVar7 = *(undefined1 **)(param_1 + 0x10);
  if (bVar1 == 1) {
    iVar5 = ((int)*(short *)(param_1 + 0x7a) - (int)*(short *)(puVar7 + 0x2e)) * 0x100;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    iVar6 = ((int)*(short *)(param_1 + 0x7e) - (int)*(short *)(puVar7 + 0x36)) * 0x100;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xf;
    }
    *(short *)(param_1 + 0x4e) = (short)(iVar5 >> 4);
    *(short *)(param_1 + 0x52) = (short)(iVar6 >> 4);
    *(undefined2 *)(param_1 + 0x40) = 0x10;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x0010dab4(param_1);
      func_0x0010d49c(param_1);
      if (*(short *)(param_1 + 0x44) != 0) {
        if (puVar7[3] == '\0') {
          *(short *)(*(int *)(puVar7 + 0xc0) + 0xc) =
               *(short *)(*(int *)(puVar7 + 0xc0) + 0xc) + (*(short *)(param_1 + 0x44) >> 5);
        }
        func_0x00076d68(param_1);
        if ((_DAT_1f80017c & 7) == 0) {
          if ((_DAT_1f80017c & 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          func_0x00074590(0,5,0);
        }
      }
      *(undefined2 *)(puVar7 + 0x56) = *(undefined2 *)(param_1 + 0x56);
      iVar5 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
      sVar2 = *(short *)(param_1 + 0x44);
      iVar6 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
      sVar3 = *(short *)(param_1 + 0x44);
      *(int *)(puVar7 + 0x2c) = *(int *)(puVar7 + 0x2c) + (iVar5 * sVar2 >> 4);
      *(int *)(puVar7 + 0x34) = *(int *)(puVar7 + 0x34) - (iVar6 * sVar3 >> 4);
      _DAT_1f8000c0 = 0;
      _DAT_1f8000c4 = 0;
      _DAT_1f8000c2 = *(short *)(puVar7 + 0x86) - *(short *)(puVar7 + 0x84);
      func_0x0012ee08(puVar7 + 0x2c,&DAT_1f8000c0,1);
      iVar5 = func_0x00083f50(*(short *)(puVar7 + 0x56) + 0x800);
      sVar2 = *(short *)(param_1 + 0x80);
      sVar3 = *(short *)(puVar7 + 0x80);
      iVar6 = func_0x00083e80(*(short *)(puVar7 + 0x56) + 0x800);
      sVar4 = *(short *)(puVar7 + 0x80);
      sVar2 = (short)(iVar5 * ((int)sVar2 + (int)sVar3 + -0x1e) >> 0xc);
      *(short *)(param_1 + 0x2e) = *(short *)(puVar7 + 0x2e) + sVar2;
      sVar3 = (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar4 + -0x1e) >> 0xc);
      *(short *)(param_1 + 0x36) = *(short *)(puVar7 + 0x36) - sVar3;
      _DAT_1f8000c0 = 0;
      if (1 < *(byte *)(param_1 + 0x29) - 2) {
        _DAT_1f8000c2 = *(short *)(param_1 + 0x62);
        _DAT_1f8000c4 = 0;
        func_0x0012ee08(param_1 + 0x2c,&DAT_1f8000c0,0);
      }
      *(short *)(puVar7 + 0x2e) = *(short *)(param_1 + 0x2e) - sVar2;
      *(short *)(puVar7 + 0x36) = *(short *)(param_1 + 0x36) + sVar3;
      if (puVar7[0xbf] == '\x02') {
        *puVar7 = 2;
      }
      else {
        if ((_DAT_800e7e68 & _DAT_1f800174) == 0) {
          return;
        }
        puVar7[0xbf] = 0;
        *puVar7 = 1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    func_0x00076d68(param_1);
    if ((_DAT_1f80017c & 7) == 0) {
      if ((_DAT_1f80017c & 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00074590(0,5,0);
    }
    if (puVar7[3] == '\0') {
      *(short *)(*(int *)(puVar7 + 0xc0) + 0xc) = *(short *)(*(int *)(puVar7 + 0xc0) + 0xc) + 0x70;
    }
    *(undefined2 *)(puVar7 + 0x56) = *(undefined2 *)(param_1 + 0x56);
    *(int *)(puVar7 + 0x2c) = *(int *)(puVar7 + 0x2c) + *(short *)(param_1 + 0x4e) * 0x100;
    *(int *)(puVar7 + 0x34) = *(int *)(puVar7 + 0x34) + *(short *)(param_1 + 0x52) * 0x100;
    iVar5 = func_0x00083f50(*(short *)(puVar7 + 0x56) + 0x800);
    sVar2 = *(short *)(param_1 + 0x80);
    sVar3 = *(short *)(puVar7 + 0x80);
    iVar6 = func_0x00083e80(*(short *)(puVar7 + 0x56) + 0x800);
    sVar4 = *(short *)(puVar7 + 0x80);
    *(short *)(param_1 + 0x2e) =
         *(short *)(puVar7 + 0x2e) + (short)(iVar5 * ((int)sVar2 + (int)sVar3 + -0x1e) >> 0xc);
    sVar2 = *(short *)(param_1 + 0x40);
    sVar3 = *(short *)(puVar7 + 0x36);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    *(short *)(param_1 + 0x36) =
         sVar3 - (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar4 + -0x1e) >> 0xc);
    if (sVar2 == 1) {
      *puVar7 = 5;
      puVar7[0x5e] = 2;
      puVar7[0xbf] = 0;
      puVar7[6] = 0;
      DAT_1f800137 = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      func_0x00054d14(param_1,2,6);
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

