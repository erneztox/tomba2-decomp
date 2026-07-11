// FUN_0801ef44

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801ef44(int param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x70) == -1) {
      if (*(char *)(param_1 + 7) == '\0') {
        if (param_2 == 1) {
          uVar2 = func_0x0011711c(param_1,0);
          *(undefined1 *)(param_1 + 0x7a) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (param_2 < 2) {
          if (param_2 == 0) {
            uVar2 = func_0x001165f8(param_1,0);
            *(undefined1 *)(param_1 + 0x7a) = uVar2;
            halt_baddata();
          }
        }
        else if (param_2 == 2) {
          uVar2 = func_0x001166f4(param_1,0);
          *(undefined1 *)(param_1 + 0x7a) = uVar2;
          func_0x00040d68(param_1,0x8013d494);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 7) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      DAT_800bf9eb = '\x03';
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    func_0x00041098(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bf9eb != '\x01') goto LAB_0801f0c8;
      func_0x00040d68(param_1,0x8013d454);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(undefined1 *)(param_1 + 7) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  else if (bVar1 == 2) {
    if (DAT_800bf9eb == 'Z') {
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
LAB_0801f0c8:
    func_0x0004190c(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

