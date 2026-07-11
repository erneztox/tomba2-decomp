// FUN_08032448

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08032448(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((_DAT_1f80017c & 3) == 0) {
      sVar2 = *(short *)(param_1 + 0xe);
      *(short *)(param_1 + 0xe) = sVar2 + 1;
      if (5 < (short)(sVar2 + 1)) {
        *(undefined2 *)(param_1 + 0xe) = 0;
      }
      if (*(short *)(param_1 + 0x60) == 0) {
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) =
             *(undefined2 *)(*(short *)(param_1 + 0xe) * 8 + -0x7feb7d04);
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) =
             *(undefined2 *)(*(short *)(param_1 + 0xe) * 8 + -0x7feb7d02);
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3c) =
             *(undefined2 *)(*(short *)(param_1 + 0xe) * 8 + -0x7feb7d00);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) =
           *(undefined2 *)(*(short *)(param_1 + 0xe) * 8 + -0x7feb7cd4);
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) =
           *(undefined2 *)(*(short *)(param_1 + 0xe) * 8 + -0x7feb7cd2);
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3c) =
           *(undefined2 *)(*(short *)(param_1 + 0xe) * 8 + -0x7feb7cd0);
      **(short **)(param_1 + 0xc0) =
           **(short **)(param_1 + 0xc0) + *(short *)(*(short *)(param_1 + 0xe) * 8 + -0x7feb7cce);
    }
    if ((byte)param_1[5] < 6) {
                    /* WARNING: Could not emulate address calculation at 0x080326f8 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef6158))();
      return;
    }
    iVar3 = func_0x0007778c(param_1);
    if (iVar3 != 0) {
      if (*(short *)(param_1 + 0x62) == 0) {
        func_0x00051844(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x0012b868(param_1);
    }
    if (DAT_800bf91f == -1) {
      return;
    }
    func_0x0012bb14(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((DAT_800bf873 == '\0') && (DAT_800bf91e != -1)) {
        if (_DAT_1f800240 != 0) {
          *(int *)(param_1 + 0x10) = _DAT_1f800240;
          *(undefined4 *)(param_1 + 0x14) = 0;
          iVar3 = func_0x00051b70(param_1,0xc,0x1e);
          if (iVar3 == 0) {
            *(undefined2 *)(param_1 + 0xe) = 0;
            param_1[4] = param_1[4] + '\x01';
            if (DAT_800bf91f == -1) {
              *(undefined2 *)(param_1 + 0x80) = 0x8c;
              *(undefined2 *)(param_1 + 0x82) = 0x118;
              *(undefined2 *)(param_1 + 0x84) = 0x78;
              *(undefined2 *)(param_1 + 0x86) = 0x78;
              func_0x0012d864(param_1);
              *(undefined2 *)(param_1 + 0x62) = 0;
              halt_baddata();
            }
            *(undefined2 *)(param_1 + 0x80) = 0x28;
            *(undefined2 *)(param_1 + 0x82) = 0x50;
            *(undefined2 *)(param_1 + 0x86) = 0xf0;
            *(undefined2 *)(param_1 + 0x84) = 0x8c;
            *param_1 = 9;
            **(undefined2 **)(param_1 + 0xc0) = 0x8c;
            iVar3 = _DAT_1f800240;
            *(undefined2 *)(param_1 + 0x58) = 0xfc00;
            sVar2 = *(short *)(*(int *)(iVar3 + 0xc4) + 10);
            *(undefined2 *)(param_1 + 0x60) = 0;
            *(undefined2 *)(param_1 + 0x68) = 0;
            param_1[0xbf] = 0;
            *(short *)(param_1 + 0x56) = sVar2 + 0x800;
            *(undefined2 *)(param_1 + 0x62) = 0;
            halt_baddata();
          }
        }
        return;
      }
      param_1[4] = 3;
    }
  }
  else if (bVar1 == 2) {
    if ((byte)param_1[5] < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08032830 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef6140))();
      return;
    }
    func_0x0007778c(param_1);
    func_0x00051844(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

