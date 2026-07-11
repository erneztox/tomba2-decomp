// FUN_0801dfd4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0801e00c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801dfd4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 0x10);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x32) = 0xffd8;
      uVar3 = _DAT_80143cf8;
      *(undefined4 *)(param_1 + 0x38) = 0;
      uVar4 = _DAT_80143cfa;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 6) = 0x32;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0x1000;
      *(undefined2 *)(param_1 + 0x44) = uVar3;
      *(undefined2 *)(param_1 + 0x46) = uVar4;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0x80143cfc;
      *(undefined4 *)(param_1 + 0x34) = 0x80143cfc;
    }
    if (*(char *)(param_1 + 4) == '\x01') {
      if (*(char *)(param_1 + 5) == '\0') {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x22;
        *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) >> 1;
        if (0x3ff < *(uint *)(param_1 + 0x50)) {
          *(undefined4 *)(param_1 + 0x54) = 0;
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
          halt_baddata();
        }
      }
      else {
        if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar5 = func_0x00083e80(*(undefined4 *)(param_1 + 0x54));
        *(int *)(param_1 + 0x50) = ((iVar5 << 9) >> 0xc) + 0x400;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x199;
      }
      if ((*(byte *)(iVar6 + 4) < 2) &&
         (cVar2 = *(char *)(param_1 + 6), *(char *)(param_1 + 6) = cVar2 + -1, cVar2 != '\0')) {
        *(short *)(param_1 + 0x2e) = *(short *)(iVar6 + 0x32) + -0x6e;
        *(short *)(param_1 + 0x2c) =
             *(short *)(iVar6 + 0x2e) - (short)(*(short *)(iVar6 + 0x98) * 5 >> 9);
        *(short *)(param_1 + 0x30) =
             *(short *)(iVar6 + 0x36) - (short)(*(short *)(iVar6 + 0xa4) * 5 >> 9);
      }
      else {
        *(undefined1 *)(param_1 + 4) = 2;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x200;
    if (*(uint *)(param_1 + 0x50) < 0x81) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    else {
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) - 0x66;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar6 + 1);
    }
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

