// FUN_0803694c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803694c(int param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if ((_DAT_800bf850 & 0x40) != 0) {
      func_0x00074590(0x93,0x14,0);
      bVar2 = (DAT_800bf9c4 >> 4) + 2;
      if (bVar2 < 5) {
        iVar3 = 4;
        if (bVar2 == 3) {
          iVar3 = 5;
        }
        iVar4 = param_1 + iVar3 * 4;
        iVar3 = *(int *)(iVar4 + 0xc0);
        sVar1 = *(short *)(iVar3 + 2) + -4;
        if ((*(short *)(iVar3 + 2) == -0x60) || (*(short *)(iVar3 + 2) = sVar1, -0x60 < sVar1))
        goto LAB_08036d1c;
        func_0x00074590(0x91,0x21,0);
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 2) = 0xffa0;
        _DAT_800bf850 = _DAT_800bf850 & 0xffffffbf | 0x80;
      }
      else {
        _DAT_800bf850 = _DAT_800bf850 & 0xffffffbf | 0x80;
        *(undefined1 *)(param_1 + 6) = 0;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
      halt_baddata();
    }
    if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08036a8c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6130))();
      return;
    }
    if (*(short *)(param_1 + 0x7e) != 0) {
      func_0x0012f7c0(param_1);
    }
  }
LAB_08036d1c:
  func_0x000517f8(param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

