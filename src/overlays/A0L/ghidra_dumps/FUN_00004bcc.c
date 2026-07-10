// FUN_00004bcc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004bcc(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x5e) == '\0') {
      func_0x0004190c(param_1);
    }
    if (DAT_800bf871 == 4) {
      if (*(char *)(param_1 + 5) == '\x01') {
        *(undefined2 *)(param_1 + 0x44) = 0xc00;
        iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
        *(short *)(param_1 + 0x48) = (short)(iVar2 >> 4);
        iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
        *(short *)(param_1 + 0x4c) = (short)(-iVar2 >> 4);
        *(undefined2 *)(param_1 + 0x4a) = 0xe000;
        *(undefined2 *)(param_1 + 0x50) = 0x100;
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x3f;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
      else if (*(char *)(param_1 + 5) != '\x02') {
        halt_baddata();
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      *(int *)(param_1 + 0x2c) =
           *(int *)(param_1 + 0x2c) +
           (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      *(int *)(param_1 + 0x34) =
           *(int *)(param_1 + 0x34) +
           (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
      if (-0x4b1 < *(short *)(param_1 + 0x32)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (4 < DAT_800bf871) {
      if (DAT_800bf871 != 5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x00004e58 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6f34))();
        return;
      }
    }
    func_0x000518fc(param_1);
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
      iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfec,0x80117868);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)((uint)DAT_800bf871 * 2 + -0x7fee9fb0);
      func_0x00040cdc(param_1,0x8011a738,*(undefined4 *)((uint)DAT_800bf871 * 4 + -0x7fee9fc8));
      func_0x00041718(param_1,9,0);
      *(undefined2 *)(param_1 + 0x80) = 0x60;
      *(undefined2 *)(param_1 + 0x82) = 0xc0;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      *(undefined2 *)(param_1 + 0x86) = 0xf0;
      *(undefined1 *)(param_1 + 0x70) = 1;
      *(undefined1 *)(param_1 + 0x5e) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x80;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

