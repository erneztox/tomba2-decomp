// FUN_080433b8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080433b8(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    iVar2 = func_0x0007778c(param_1);
    if ((iVar2 == 0) || (*(char *)(param_1 + 0x2b) != '\x03')) {
LAB_08043574:
      func_0x0004190c(param_1);
      return;
    }
    func_0x00042354(1,2);
    func_0x00040d68(param_1,0x800a3d90);
    *(undefined1 *)(param_1 + 0x70) = 2;
    if (DAT_800bfa36 == '\0') {
      *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) goto LAB_08043574;
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 == 1) {
      if (DAT_800bfb52 == '\0') {
        if (DAT_800bfa36 == '\0') {
          DAT_800bfa36 = '\x01';
        }
        else {
          *(undefined1 *)(param_1 + 0x7a) = 3;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      DAT_800bfa36 = '\x02';
      func_0x00040d68(param_1,0x80147c64);
      *(undefined1 *)(param_1 + 6) = 2;
      *(undefined1 *)(param_1 + 0x70) = 2;
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x00040d68(param_1,0x80147c3c);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(undefined1 *)(param_1 + 6) = 1;
      }
    }
    else if (bVar1 == 2) {
      iVar2 = func_0x00041438(param_1,0x6d2,0x100);
      if (iVar2 != 0) {
        if (DAT_800bfa36 == '\x02') {
          *(undefined1 *)(param_1 + 0x5e) = 1;
        }
        *(undefined1 *)(param_1 + 5) = 0;
      }
      goto LAB_08043574;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

