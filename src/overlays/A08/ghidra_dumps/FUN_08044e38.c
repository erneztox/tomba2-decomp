// FUN_08044e38

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08044e38(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined1 *puVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (_DAT_800bf850 == 0) {
      param_1[4] = 2;
      *param_1 = 2;
    }
    if (*(short *)(param_1 + 0x60) < 0x100) {
      *(short *)(param_1 + 0x60) =
           *(short *)(param_1 + 0x60) + 1 + (short)(0x100 - *(short *)(param_1 + 0x60) >> 2);
    }
    if (*(short *)(param_1 + 0x80) < 0x32) {
      *(short *)(param_1 + 0x80) =
           *(short *)(param_1 + 0x80) + 1 + (short)(0x32 - *(short *)(param_1 + 0x80) >> 2);
    }
    iVar3 = func_0x0007778c(param_1);
    if ((iVar3 != 0) && ((_DAT_1f80017c & 0xf) == 0)) {
      func_0x0003116c(0x907,param_1 + 0x2c,0xffffffec);
    }
    if (((param_1[1] == '\0') || (*(short *)(param_1 + 0x80) < 0xb)) ||
       (puVar4 = (undefined1 *)func_0x0010a83c(param_1), puVar4 == (undefined1 *)0x0)) {
      *(undefined2 *)(param_1 + 0x40) = 0;
    }
    else {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + 1;
      if ((short)(sVar2 + 1) < 0x1f) {
        return;
      }
      *puVar4 = 2;
      puVar4[4] = 2;
      puVar4[5] = 3;
      puVar4[6] = 0;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1[0xb] = 0x20;
      *(undefined4 *)(param_1 + 0x18) = 0x8011973c;
      *(undefined2 *)(param_1 + 0x86) = 0x1a4;
      *(undefined2 *)(param_1 + 0x84) = 0;
      *(undefined2 *)(param_1 + 0x40) = 0;
      if (_DAT_800bf850 != 0) {
        *(undefined2 *)(param_1 + 0x60) = 0x100;
        param_1[4] = 1;
        *(undefined2 *)(param_1 + 0x80) = 0x32;
        *param_1 = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[4] = 2;
      *(undefined2 *)(param_1 + 0x80) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *param_1 = 2;
      *(short *)(param_1 + 0x82) = *(short *)(param_1 + 0x80) << 1;
    }
  }
  else if (bVar1 == 2) {
    *(undefined2 *)(param_1 + 0x40) = 0;
    if (_DAT_800bf850 != 0) {
      param_1[4] = 1;
    }
    sVar2 = *(short *)(param_1 + 0x60);
    if (sVar2 != 0) {
      *(short *)(param_1 + 0x60) = (sVar2 + -1) - (sVar2 >> 2);
    }
    sVar2 = *(short *)(param_1 + 0x80);
    if (sVar2 != 0) {
      *(short *)(param_1 + 0x80) = (sVar2 + -1) - (sVar2 >> 2);
    }
    func_0x0007778c(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

