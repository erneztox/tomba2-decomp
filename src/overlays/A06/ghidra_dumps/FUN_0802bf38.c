// FUN_0802bf38

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802bf38(undefined1 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = func_0x00051b70(param_1,0xc,0xc);
  uVar4 = 0;
  if (iVar3 == 0) {
    *(undefined2 *)(param_1 + 0x80) = 0x60;
    *(undefined2 *)(param_1 + 0x82) = 0xc0;
    *(undefined2 *)(param_1 + 0x84) = 0xb4;
    *(undefined2 *)(param_1 + 0x86) = 0x168;
    *param_1 = 1;
    param_1[0x29] = 0;
    uVar4 = 3;
    if (DAT_800bfab5 == '\0') {
      uVar4 = func_0x0011ac9c(param_1);
      *(undefined4 *)(param_1 + 0x10) = uVar4;
      iVar3 = (uint)(byte)param_1[3] * 0xc;
      uVar1 = *(undefined2 *)(iVar3 + -0x7febacc0);
      *(undefined2 *)(param_1 + 0x60) = uVar1;
      *(undefined2 *)(param_1 + 0x2e) = uVar1;
      uVar1 = *(undefined2 *)(iVar3 + -0x7febacbe);
      *(undefined2 *)(param_1 + 0x62) = uVar1;
      *(undefined2 *)(param_1 + 0x32) = uVar1;
      uVar1 = *(undefined2 *)(iVar3 + -0x7febacbc);
      *(undefined2 *)(param_1 + 100) = uVar1;
      *(undefined2 *)(param_1 + 0x36) = uVar1;
      func_0x0004766c(param_1);
      func_0x00049760(param_1);
      *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(iVar3 + -0x7febacba);
      *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(iVar3 + -0x7febacb8);
      uVar2 = _DAT_1f8001a0;
      uVar1 = *(undefined2 *)(iVar3 + -0x7febacb6);
      *(undefined2 *)(param_1 + 0x66) = 0;
      *(undefined2 *)(param_1 + 0x6e) = uVar2;
      *(undefined2 *)(param_1 + 0x6c) = uVar1;
      param_1[0x5e] = 0;
      uVar1 = _DAT_1f8001a0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      param_1[4] = 1;
      *(undefined2 *)(param_1 + 0x56) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[4] = 3;
  }
  return uVar4;
}

