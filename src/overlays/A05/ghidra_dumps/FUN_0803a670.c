// FUN_0803a670

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803a670(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    if ((*(char *)(param_1 + 0x5e) != '\0') && (*(char *)(param_1 + 0x5e) == '\x01')) {
      bVar1 = *(byte *)(param_1 + 5);
      if (bVar1 == 1) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        if (*(short *)(param_1 + 0x60) < *(short *)(param_1 + 0x32)) {
          *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x60);
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
          DAT_800bf9c9 = DAT_800bf9c9 | 0x80;
          func_0x00074590(0x91,0,0);
        }
      }
      else if ((bVar1 < 2) && (bVar1 == 0)) {
        if (((int)(uint)DAT_800bf9c9 >> (*(byte *)(param_1 + 3) & 0x1f) & 1U) == 0) {
          *(undefined1 *)(param_1 + 1) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 5) = 1;
          *(undefined2 *)(param_1 + 0x4a) = 0x6000;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    func_0x000517f8(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar3 = func_0x00051b70(param_1,0xc,7);
      if (iVar3 != 0) {
        return;
      }
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      if ((DAT_800bf9c3 & 0x80) == 0) {
        *(undefined1 *)(param_1 + 0x5e) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x5e) = 1;
        sVar2 = *(short *)(param_1 + 0x32) + -1000;
        *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x32);
        *(short *)(param_1 + 0x32) = sVar2;
        *(short *)(param_1 + 0x62) = sVar2;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

