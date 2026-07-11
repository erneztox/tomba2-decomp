// FUN_080315c8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080315c8(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 local_30;
  short local_2e;
  undefined2 local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    *(short *)(param_1 + 0x32) =
         (*(short *)(param_1 + 0x60) - *(short *)(*(int *)(param_1 + 0x10) + 0x32)) + -0x1640;
    iVar3 = func_0x0007778c(param_1);
    if (iVar3 != 0) {
      func_0x00051844(param_1);
      func_0x0004b374(param_1,1);
    }
    if (param_1[1] != '\0') {
      *(undefined2 *)(param_1 + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)(param_1 + 0x40) < 0x96) {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
      func_0x00084660(&DAT_1f8000f8);
      func_0x00084690(&DAT_1f8000f8);
      local_30 = *(undefined2 *)(param_1 + 0x2e);
      local_2e = *(short *)(param_1 + 0x32) + -0x70;
      local_2c = *(undefined2 *)(param_1 + 0x36);
      local_20 = func_0x0003f7a0(&local_30,local_28);
      local_2e = 0xe700;
      func_0x0003f7a0(&local_30,local_24);
      local_20 = (local_20 >> (local_20 >> 10 & 0x1fU)) + (local_20 >> 10) * 0x200;
      if (0x7fb < local_20 - 4U) {
        local_20 = -1;
      }
      if (0 < local_20) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar3 = func_0x00051b70(param_1,0xc,0x35);
        if (iVar3 != 0) {
          return;
        }
        *(undefined2 *)(param_1 + 0x2e) = 0x5000;
        *(undefined2 *)(param_1 + 0x32) = 0xe9c0;
        *(undefined2 *)(param_1 + 0x36) = 0x2e80;
        uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x32);
        param_1[4] = param_1[4] + '\x01';
        *(undefined2 *)(param_1 + 0x80) = 0x50;
        *(undefined2 *)(param_1 + 0x82) = 0x50;
        *(undefined2 *)(param_1 + 0x84) = 0x46;
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x86) = 0x8c;
        *(undefined2 *)(param_1 + 0x40) = 0;
        *(undefined2 *)(param_1 + 0x60) = uVar2;
        func_0x0004766c(param_1);
        func_0x00048750(param_1);
        uVar2 = _DAT_1f8001a0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        param_1[0x5e] = 1;
        *(undefined2 *)(param_1 + 0x56) = uVar2;
        func_0x0004b354(param_1,1);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 2) {
      if ((byte)param_1[5] < 7) {
                    /* WARNING: Could not emulate address calculation at 0x080317f8 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef618c))();
        return;
      }
      iVar3 = func_0x0007778c(param_1);
      if (iVar3 != 0) {
        func_0x00051844(param_1);
      }
      if (param_1[1] != '\0') {
        *(undefined2 *)(param_1 + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(short *)(param_1 + 0x40) < 0x96) {
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
        func_0x00084660(&DAT_1f8000f8);
        func_0x00084690(&DAT_1f8000f8);
        local_30 = *(undefined2 *)(param_1 + 0x2e);
        local_2e = *(short *)(param_1 + 0x32) + -0x70;
        local_2c = *(undefined2 *)(param_1 + 0x36);
        local_14 = func_0x0003f7a0(&local_30,&local_1c);
        local_2e = 0xe700;
        func_0x0003f7a0(&local_30,&local_18);
        local_14 = (local_14 >> (local_14 >> 10 & 0x1fU)) + (local_14 >> 10) * 0x200;
        if (0x7fb < local_14 - 4U) {
          local_14 = -1;
        }
        if (0 < local_14) {
          func_0x00129af8(local_1c,local_18,0xff0000);
          halt_baddata();
        }
      }
    }
    else {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
    }
  }
  return;
}

