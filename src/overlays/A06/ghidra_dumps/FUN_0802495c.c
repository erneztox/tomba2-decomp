// FUN_0802495c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802495c(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 6) == '\0') {
    uVar2 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar2;
    if (0 < (int)((uint)uVar2 << 0x10)) goto LAB_08024a38;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    if ((_DAT_1f80017c & 0xf) == 0) {
      iVar4 = (int)*(short *)(param_1 + 0x7a);
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(iVar4 * 6 + -0x7febb160);
      *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(iVar4 * 6 + -0x7febb15e);
      uVar1 = *(undefined2 *)(iVar4 * 6 + -0x7febb15c);
      *(ushort *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1U & 7;
      *(undefined2 *)(param_1 + 0xbc) = uVar1;
    }
LAB_08024a38:
    sVar3 = func_0x0011e3f8(param_1);
    if (sVar3 != 0) {
      func_0x0011e308(param_1,0);
      *(undefined1 *)(param_1 + 5) = 3;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined2 *)(param_1 + 0x6c) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

