// FUN_080441dc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080441dc(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 == 1) {
      iVar2 = func_0x0005308c();
      if (iVar2 != 0) {
        func_0x00042354(1,2);
        func_0x00040d68(param_1,0x80147e40);
        *(undefined1 *)(param_1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_08044408;
    }
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (((((int)_DAT_800e7ffe & 0x8200U) != 0) || (DAT_1f800207 != '\x15')) ||
           (_DAT_1f800164 < 0x16a8)) goto LAB_08044408;
        *(undefined1 *)(param_1 + 6) = 1;
      }
    }
    else if (bVar1 == 2) {
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) != -1) goto LAB_08044408;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bf8e2 == '\0') {
        *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)(param_1 + 6) == '\0') {
      if (DAT_1f800207 == '\x15') {
        *(undefined1 *)(param_1 + 1) = 1;
        func_0x00077e7c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x0007778c(param_1);
      if (DAT_800bfa3b != '\x03') goto LAB_08044408;
      iVar2 = func_0x00031220(0x915,0,0xffffffe2);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x10) = param_1;
      }
      func_0x00040d68(param_1,0x80147eac);
      *(undefined1 *)(param_1 + 0x70) = 2;
      func_0x00051b04(*(undefined4 *)(param_1 + 0xd8),0x21,6);
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    else if (*(char *)(param_1 + 6) == '\x01') {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077e7c(param_1);
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) == -1) {
        *(undefined1 *)(param_1 + 4) = 3;
      }
LAB_08044408:
      func_0x0004190c(param_1);
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

