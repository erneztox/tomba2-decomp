// FUN_000008a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008a0(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  short sVar4;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == '\0') {
    if (*(byte *)(param_1 + 3) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x000008f8 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef7030))();
      return;
    }
    goto LAB_00000ca8;
  }
  if (cVar1 == '\x01') {
    bVar2 = *(byte *)(param_1 + 3);
    if (bVar2 == 1) {
      if (DAT_800bf80f != '\0') goto LAB_00000ca8;
      *(undefined1 *)(param_1 + 3) = 2;
      DAT_800bfa55 = 5;
    }
    else {
      if (1 < bVar2) {
        if (bVar2 == 2) {
          iVar3 = (int)*(short *)(param_1 + 0x6a);
          if (iVar3 != -1) {
            func_0x0006cbd0(param_1,iVar3 * 0xc + -0x7feece44);
            sVar4 = *(short *)(param_1 + 0x6a) + 1;
            *(short *)(param_1 + 0x6a) = sVar4;
            if (*(short *)(sVar4 * 0xc + -0x7feece44) == 0) {
              *(undefined2 *)(param_1 + 0x6a) = 0xffff;
            }
            iVar3 = (int)*(short *)(param_1 + 0x6a);
          }
          if (0xdc < iVar3) {
            *(undefined1 *)(param_1 + 3) = 0;
            *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
            DAT_800bf80f = 2;
            DAT_800bf839 = 3;
            _DAT_800bf83a = 0x1502;
            halt_baddata();
          }
        }
        else {
          if (bVar2 != 3) {
            halt_baddata();
          }
          if (*(short *)(param_1 + 0x6a) != -1) {
            func_0x0006cbd0(param_1,*(short *)(param_1 + 0x6a) * 0xc + -0x7feece44);
            sVar4 = *(short *)(param_1 + 0x6a) + 1;
            *(short *)(param_1 + 0x6a) = sVar4;
            if (*(short *)(sVar4 * 0xc + -0x7feece44) == 0) {
              *(undefined2 *)(param_1 + 0x6a) = 0xffff;
            }
          }
        }
LAB_00000ca8:
        func_0x0006e3b0(param_1,param_1 + 0x38);
        return;
      }
      if (bVar2 == 0) {
        DAT_800bf80f = cVar1;
        *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
        func_0x0006cbd0(param_1,*(short *)(param_1 + 0x6a) * 0xc + -0x7feece44);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

