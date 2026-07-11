// FUN_08019084

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019084(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar2 = func_0x00026ad0(param_1);
    if (iVar2 != 0) {
      func_0x00111b48(param_1,*(undefined1 *)(param_1 + 3));
    }
    if (((DAT_800bf816 != '\0') && (DAT_800bf817 == '\0')) && (0x3296 < _DAT_800e7eb6)) {
      _DAT_800e7eb6 = 0x3296;
    }
    if ((DAT_800bf9c5 == '\x03') && (DAT_800bf839 != '\0')) {
      DAT_800bf9c5 = '\x04';
    }
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
      func_0x00111b48(param_1,0);
      func_0x0004d8d8(8,0);
      func_0x001350b4();
      func_0x00136434();
      func_0x000752b4(0);
      if ((DAT_800bf816 != '\0') && (DAT_800bf817 == '\x02')) {
        *(undefined1 *)(param_1 + 3) = 3;
        func_0x00111b48(param_1,3);
        *(undefined1 *)(param_1 + 5) = 3;
      }
      func_0x00075d24(0x1fff);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

