// FUN_08031da0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08031da0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  
  bVar4 = *(byte *)(param_1 + 5);
  if (bVar4 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      cVar1 = *(char *)(param_1 + 6);
      if (cVar1 == '\0') {
        if (DAT_800bfa1f == 0) {
          DAT_800bfa1f = 0x10;
        }
        else {
          if (DAT_800bfb0a != '\0') {
            func_0x00040d68(param_1,0x801482a4);
            *(undefined1 *)(param_1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          bVar4 = DAT_800bfad5 != '\0';
          if (DAT_800bfad6 != '\0') {
            bVar4 = bVar4 + 1;
          }
          if (bVar4 == 1) {
            uVar2 = 9;
          }
          else if (bVar4 < 2) {
            uVar2 = 3;
            if (bVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
            uVar2 = 0xb;
            if (bVar4 != 2) {
              halt_baddata();
            }
          }
          *(undefined1 *)(param_1 + 0x7a) = uVar2;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
joined_r0x08031f40:
      if (cVar1 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  else {
    if (bVar4 < 2) {
      if (bVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar3 = func_0x0007778c(param_1);
      bVar4 = DAT_800bf80b;
      if (iVar3 == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x2b) == '\x03') {
        func_0x00042354(1,2);
        func_0x00041768(param_1,*(undefined1 *)(param_1 + 0x7b),4);
        if (DAT_800bfa1f != 0) {
          func_0x00040d68(param_1,0x800a3d70);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(undefined1 *)(param_1 + 6) = 0;
          *(undefined1 *)(param_1 + 5) = 1;
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((DAT_800bf80a == '\x01') && (*(char *)(param_1 + 0x2b) == '\x02')) {
        *(byte *)(param_1 + 0x5f) = DAT_800bf80b;
        if ((bVar4 < 0x40) && (0x3d < bVar4)) {
          *(byte *)(param_1 + 0x5f) = DAT_800bf80b;
          func_0x00042354(1,2);
          func_0x00041768(param_1,*(undefined1 *)(param_1 + 0x7b),4);
          _DAT_800bf844 = func_0x0006fb0c(param_1,DAT_800bf80b);
          if (_DAT_800bf844 != 0) {
            *(undefined1 *)(_DAT_800bf844 + 0x5e) = 0;
          }
          _DAT_800e7eae = 0x5be4;
          _DAT_800e7eb6 = 0x40b4;
          *(undefined1 *)(param_1 + 6) = 0;
          *(undefined1 *)(param_1 + 5) = 2;
          halt_baddata();
        }
      }
      goto LAB_0803218c;
    }
    if (bVar4 != 2) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    if (*(char *)(param_1 + 6) == '\0') {
      if (DAT_800bf80a == '\0') {
        func_0x00040d68(param_1,0x801480f4);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(undefined1 *)(param_1 + 7) = 0;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        halt_baddata();
      }
    }
    else {
      if (*(char *)(param_1 + 6) != '\x01') {
        halt_baddata();
      }
      if (*(char *)(param_1 + 0x70) == -1) {
        cVar1 = *(char *)(param_1 + 7);
        if (cVar1 == '\0') {
          if (*(char *)(param_1 + 0x5f) == '>') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          bVar4 = DAT_800bfa1f & 3;
          bVar5 = DAT_800bfa1f & 3;
          if ((DAT_800bfa1f & 4) != 0) {
            DAT_800bfa1f = DAT_800bfa1f | 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          DAT_800bfa1f = DAT_800bfa1f | 4;
          if (bVar5 == 1) {
            uVar2 = 0xc;
          }
          else {
            if (bVar5 < 2) {
              if (bVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              halt_baddata();
            }
            uVar2 = 0xd;
            if (bVar5 != 3) {
              halt_baddata();
            }
          }
          *(undefined1 *)(param_1 + 0x7a) = uVar2;
          func_0x00040d68(param_1,0x8014825c);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
          halt_baddata();
        }
        goto joined_r0x08031f40;
      }
    }
  }
  func_0x00041098(param_1);
LAB_0803218c:
  func_0x0004190c(param_1);
  return;
}

