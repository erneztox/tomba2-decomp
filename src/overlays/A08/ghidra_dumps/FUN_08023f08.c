// FUN_08023f08

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0011d050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023f08(int param_1)

{
  byte bVar1;
  int iVar2;
  
  func_0x000779d0(param_1,0x15e,0x3c,0x14);
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (_DAT_800bf860 == 0) {
      return;
    }
    *(int *)(param_1 + 0x10) = _DAT_800bf860;
    _DAT_800bf860 = 0;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((DAT_800bfa46 & 0x10) != 0) {
        return;
      }
      if ((DAT_800bfa46 & 1) != 0) {
        func_0x00051b04(*(undefined4 *)(param_1 + 0xd0),0xc,0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (((int)(uint)DAT_800bfa46 >> 1 & 1U) != 0) {
        func_0x00051b04(*(undefined4 *)(param_1 + 0xcc),0xc,0x33);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (((int)(uint)DAT_800bfa46 >> 2 & 1U) == 0) {
        if (((int)(uint)DAT_800bfa46 >> 3 & 1U) == 0) {
          DAT_800bfa46 = DAT_800bfa46 | 0x10;
          return;
        }
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0xc,0x31);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00051b04(*(undefined4 *)(param_1 + 200),0xc,0x32);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    iVar2 = *(int *)(param_1 + 0x10);
    *(ushort *)(*(int *)(param_1 + 0xd8) + 8) =
         *(short *)(*(int *)(iVar2 + 0x38) + 2) * -0x200 + 0xa00U & 0xfff;
    *(short *)(*(int *)(param_1 + 0xd4) + 8) = *(short *)(*(int *)(param_1 + 0xd8) + 8) >> 1;
    if ((DAT_800bfa46 & 0x20) == 0) {
      if ((*(short *)(param_1 + 0x60) == 0) && (1 < *(ushort *)(*(int *)(iVar2 + 0x38) + 2))) {
        *(undefined2 *)(param_1 + 0x60) = 1;
      }
      if ((_DAT_1f80017c & 7) != 0) {
        return;
      }
      if (*(short *)(param_1 + 0x60) == 0) {
        return;
      }
      func_0x00074590(0x1a,0xe,0xffffffe2);
      return;
    }
    *(undefined2 *)(*(int *)(param_1 + 0xd8) + 8) = 0;
    *(undefined1 *)(param_1 + 5) = 10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

