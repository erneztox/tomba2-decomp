// FUN_0802baf8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802baf8(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (DAT_800bf873 == '\0') {
      func_0x0007778c(param_1);
    }
    else {
      func_0x000779d0(param_1,0,
                      (int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) * 0x10000) >>
                      0x10,0);
    }
  }
  else {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 0) {
      param_1[4] = 1;
      *param_1 = 1;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[0xb] = 0;
      *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feba98c);
      *(undefined2 *)(param_1 + 0x82) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feba98a);
      *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feba988);
      *(undefined2 *)(param_1 + 0x86) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feba986);
      uVar2 = *(undefined1 *)((byte)param_1[3] + 0x801456a4);
      param_1[0x2b] = 0;
      param_1[0x2a] = uVar2;
      iVar4 = func_0x0004766c(param_1);
      if (iVar4 != 0) {
        func_0x00049674(param_1);
        uVar3 = _DAT_1f8001a0;
        *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
        *(undefined2 *)(param_1 + 0x56) = uVar3;
      }
      *(undefined2 *)(param_1 + 0x7c) = 0;
      *(undefined2 *)(param_1 + 0x7e) = 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

