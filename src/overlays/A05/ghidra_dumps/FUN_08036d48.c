// FUN_08036d48

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08036d48(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (0xd < DAT_800bf9c6) {
      sVar3 = *(short *)(param_1 + 0x60) + 2;
      *(short *)(param_1 + 0x60) = sVar3;
      if (0x5f < sVar3) {
        *(undefined2 *)(param_1 + 0x60) = 0;
      }
      if (*(short *)(param_1 + 0x60) == 0x30) {
        *(undefined1 *)(param_1 + 0x19) = 0x7f;
        *(undefined1 *)(param_1 + 0x18) = 0x7f;
        *(undefined1 *)(param_1 + 0x1a) = 0x60;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(short *)(param_1 + 0x60) < 0x30) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar2 = *(char *)(param_1 + 0x60) + ' ';
      *(char *)(param_1 + 0x1a) = cVar2;
      *(char *)(param_1 + 0x19) = cVar2;
      *(char *)(param_1 + 0x18) = cVar2;
      sVar3 = func_0x00070698(8);
      *(short *)(param_1 + 0x2e) = sVar3 + 0x3080;
      sVar3 = func_0x00070698(8);
      *(short *)(param_1 + 0x32) = sVar3 + -0x2f40;
      sVar3 = func_0x00070698(8);
      *(short *)(param_1 + 0x36) = sVar3 + 0x4580;
    }
    if (DAT_800bf9c6 < 0x15) goto LAB_08036f94;
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x2c);
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfd;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bf9eb != '\x01') {
LAB_08036f94:
        func_0x000517f8(param_1);
        *(undefined1 *)(param_1 + 1) = 1;
        return;
      }
      if (*(char *)(param_1 + 6) == '\0') {
        func_0x00040cdc(param_1,0,0x8013f3a4);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
      else if (*(char *)(param_1 + 6) == '\x01') {
        func_0x00041098(param_1);
        if (*(char *)(param_1 + 0x70) == -1) {
          *(undefined1 *)(param_1 + 0x1a) = 0x7f;
          *(undefined1 *)(param_1 + 0x19) = 0x7f;
          *(undefined1 *)(param_1 + 0x18) = 0x7f;
          *(undefined2 *)(param_1 + 0x60) = 0;
          *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 2;
          DAT_800bf9eb = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_08036f94;
      }
    }
  }
  else if (bVar1 == 2) {
    if (_DAT_1f800160 < 0x31d9) {
      iVar4 = func_0x00072ddc(0,1,3,0x10);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x1c) = 0x801300f4;
        *(undefined1 *)(iVar4 + 3) = 5;
        *(undefined1 *)(iVar4 + 0x5e) = 0;
        *(int *)(iVar4 + 0x10) = param_1;
        *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
      }
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    goto LAB_08036f94;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

