// FUN_08038c28

/* WARNING: Control flow encountered bad instruction data */

void FUN_08038c28(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 == 1) {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077e7c(param_1);
      iVar3 = (-0x21cc - (uint)*(ushort *)(param_1 + 0x32)) * 0x10000;
      sVar2 = (short)(iVar3 >> 0x14);
      if (-0x10 < iVar3 >> 0x14) {
        sVar2 = -0x10;
      }
      sVar2 = *(ushort *)(param_1 + 0x32) + sVar2;
      *(short *)(param_1 + 0x32) = sVar2;
      if (sVar2 < -0x21cb) {
        *(undefined2 *)(param_1 + 0x32) = 0xde34;
        if (DAT_800bf8e0 != '\0') {
          func_0x00040d68(param_1,0x801468dc);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        if (DAT_800bfa3b != '\x01') {
          return;
        }
        *(undefined1 *)(param_1 + 6) = 1;
        halt_baddata();
      }
      if (bVar1 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077e7c(param_1);
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) == -1) {
        DAT_800bfa3b = bVar1;
        *(undefined1 *)(param_1 + 6) = 0;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        halt_baddata();
      }
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0xbf) = 0;
      if (DAT_800bf8e2 != -1) {
        *(undefined2 *)(param_1 + 0x2e) = 0x3332;
        *(undefined2 *)(param_1 + 0x36) = 0x1750;
        if (DAT_800bf8e2 != '\0') {
          *(undefined2 *)(param_1 + 0x32) = 0xde34;
          *(undefined1 *)(param_1 + 5) = 2;
          *(undefined1 *)(param_1 + 6) = 0;
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x32) = 0xdefc;
        *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x3481;
      *(undefined2 *)(param_1 + 0x36) = 0xdd3e;
      *(undefined2 *)(param_1 + 0x32) = 0x169c;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 2) {
      iVar3 = func_0x0007778c(param_1);
      if ((iVar3 != 0) && (*(char *)(param_1 + 0x2b) == '\x03')) {
        func_0x00042354(1,2);
        func_0x00040d68(param_1,0x800a3d90);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 5) = 3;
        *(undefined1 *)(param_1 + 0xbf) = 0;
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x00041098(param_1);
      if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08038e90 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef5e70))();
        return;
      }
      if (*(char *)(param_1 + 1) != '\0') {
        func_0x00077e7c(param_1);
      }
    }
  }
  func_0x0004190c(param_1);
  if (*(char *)(param_1 + 0xbf) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0xc;
  }
  return;
}

