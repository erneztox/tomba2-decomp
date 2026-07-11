// FUN_08021938

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080219b0) */

void FUN_08021938(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    bVar1 = param_1[3];
    param_1[4] = 1;
    if (bVar1 < 3) {
      if (bVar1 != 0) {
        iVar2 = func_0x00051b70(param_1,0xc,0x33);
        if (iVar2 == 0) {
          *param_1 = 2;
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined2 *)(param_1 + 0x56) = 0;
          *(undefined2 *)(param_1 + 0x58) = 0;
          halt_baddata();
        }
        return;
      }
    }
    else if (bVar1 != 3) {
      return;
    }
    iVar2 = func_0x00051b70(param_1,0xc,0x34);
    if (iVar2 == 0) {
      param_1[0xd] = param_1[0xd] | 4;
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0xec;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x80) = 100;
      *(undefined2 *)(param_1 + 0x82) = 200;
      *(undefined2 *)(param_1 + 0x84) = 0x3c;
      *(undefined2 *)(param_1 + 0x86) = 0x78;
      *(undefined2 *)(param_1 + 0x48) = 0x18;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[0x2b] = 0;
      *(undefined2 *)(param_1 + 0x4c) = 0x20;
      halt_baddata();
    }
    return;
  }
  bVar1 = param_1[3];
  if (bVar1 == 1) {
    if (DAT_800bf816 == '\0') {
      param_1[4] = 3;
      halt_baddata();
    }
LAB_08021af0:
    param_1[1] = 1;
    func_0x00077ebc(param_1);
    func_0x000517f8(param_1);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
    }
    else {
      if (bVar1 == 2) goto LAB_08021af0;
      if (bVar1 != 3) {
        return;
      }
      if (DAT_800bf816 == '\0') {
        param_1[4] = 3;
        halt_baddata();
      }
    }
    func_0x0011a410(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

