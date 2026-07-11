// FUN_0802e680

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802e680(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 6) == '\0') {
    uVar2 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar2;
    if (0 < (int)((uint)uVar2 << 0x10)) goto LAB_0802e75c;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    if ((_DAT_1f80017c & 0xf) == 0) {
      iVar4 = (int)*(short *)(param_1 + 0x7a);
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(iVar4 * 6 + -0x7fec1128);
      *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(iVar4 * 6 + -0x7fec1126);
      uVar1 = *(undefined2 *)(iVar4 * 6 + -0x7fec1124);
      *(ushort *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1U & 7;
      *(undefined2 *)(param_1 + 0xbc) = uVar1;
    }
LAB_0802e75c:
    sVar3 = func_0x00127f18(param_1);
    if (sVar3 != 0) {
      func_0x00127e30(param_1,0);
      *(undefined1 *)(param_1 + 5) = 3;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined2 *)(param_1 + 0x6c) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

