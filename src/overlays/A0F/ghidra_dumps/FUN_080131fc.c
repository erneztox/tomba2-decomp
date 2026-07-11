// FUN_080131fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080131fc(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(param_1 + 0x46) >> 1 & 3;
  if (bVar3 == 2) {
    uVar2 = 0xe40;
LAB_08013264:
    *(undefined2 *)(param_1 + 0x6a) = uVar2;
    *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) & 7;
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x6a);
    uVar2 = *(undefined2 *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7fee5628);
    *(undefined2 *)(param_1 + 0x40) = 2;
    *(undefined2 *)(param_1 + 0x44) = uVar2;
    iVar1 = _DAT_1f80024c;
    if (*(char *)(param_1 + 3) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1f8000c2 = 0xffc4;
    _DAT_1f8000c0 = 0;
    _DAT_1f8000c4 = 0;
    func_0x000844c0(*(int *)(_DAT_1f80024c + 0xe4) + 0x18,&DAT_1f8000c0,&DAT_1f8000c8);
    *(short *)(param_1 + 0x2e) = *(short *)(*(int *)(iVar1 + 0xe4) + 0x2c) + _DAT_1f8000c8;
    *(short *)(param_1 + 0x32) = *(short *)(*(int *)(iVar1 + 0xe4) + 0x30) + _DAT_1f8000ca;
    *(short *)(param_1 + 0x36) = *(short *)(*(int *)(iVar1 + 0xe4) + 0x34) + _DAT_1f8000cc;
    func_0x00031558(param_1,*(undefined1 *)(param_1 + 3));
    return;
  }
  if (bVar3 < 3) {
    *(undefined2 *)(param_1 + 0x6a) = 0;
  }
  else {
    uVar2 = 0xc10;
    if (bVar3 == 3) goto LAB_08013264;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

