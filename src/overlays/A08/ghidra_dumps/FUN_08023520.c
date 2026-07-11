// FUN_08023520

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023520(int param_1)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*(char *)(param_1 + 6) == '\0') {
    *(short *)(*(int *)(param_1 + 0xc0) + 0x38) =
         *(short *)(*(int *)(param_1 + 0xc0) + 0x38) + *(short *)(param_1 + 0x4e);
    *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) =
         *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) - *(short *)(param_1 + 0x50);
    if ((int)(uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) <
        (int)*(short *)(param_1 + 0x74) - (int)*(short *)(param_1 + 0x40)) {
      *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) =
           *(short *)(param_1 + 0x74) - *(short *)(param_1 + 0x40);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(*(int *)(param_1 + 0xc0) + 0x38) =
         *(short *)(*(int *)(param_1 + 0xc0) + 0x38) - *(short *)(param_1 + 0x4e);
    *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) =
         *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + *(short *)(param_1 + 0x50);
    if ((int)*(short *)(param_1 + 0x74) + (int)*(short *)(param_1 + 0x40) <
        (int)(uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a)) {
      *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) =
           *(short *)(param_1 + 0x74) + *(short *)(param_1 + 0x40);
      bVar3 = true;
    }
  }
  if (bVar3) {
    iVar2 = (uint)*(ushort *)(param_1 + 0x40) - (uint)*(ushort *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x40) = (short)iVar2;
    if (iVar2 * 0x10000 < 1) {
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = *(undefined2 *)(param_1 + 0x74);
      if (*(short *)(param_1 + 0x6c) == 0) {
        *(undefined1 *)(param_1 + 5) = 4;
      }
      else {
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) = *(undefined2 *)(param_1 + 100);
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = *(undefined2 *)(param_1 + 0x66);
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined2 *)(param_1 + 0x40) = 0x14;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(param_1 + 6) = '\x01' - *(char *)(param_1 + 6);
  }
  if (*(short *)(param_1 + 0x6c) == 0) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      if ((((*(char *)(param_1 + 0x29) == '\0') || (*(char *)(param_1 + 6) != '\0')) ||
          ((DAT_800e7fc5 & 1) != 0)) || (DAT_800e7fe4 != '\0')) goto LAB_08023788;
      _DAT_800e7eb2 = _DAT_800e7eb2 + 5;
    }
    else {
      func_0x0011cb58(param_1,*(undefined1 *)(param_1 + 0x5e));
      *(undefined1 *)(param_1 + 6) = 1;
      *(undefined2 *)(param_1 + 0x6c) = 1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = func_0x0011cc48(param_1);
  if (sVar1 != 0) {
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) = *(undefined2 *)(param_1 + 100);
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = *(undefined2 *)(param_1 + 0x66);
    func_0x0011cb58(param_1,0);
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
  }
LAB_08023788:
  if (0x20 < *(short *)(param_1 + 0x50)) {
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + -1;
  }
  func_0x0011ccac(param_1);
  return;
}

