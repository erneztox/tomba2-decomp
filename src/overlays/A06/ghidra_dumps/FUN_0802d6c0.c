// FUN_0802d6c0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802d6c0(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  
  *(undefined1 *)(param_1 + 8) = 3;
  if (2 < _DAT_800ed098) {
    iVar6 = 0;
    *(undefined1 *)(param_1 + 9) = 3;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined2 *)(param_1 + 0x80) = 0x80;
    *(undefined2 *)(param_1 + 0x82) = 0x100;
    *(undefined2 *)(param_1 + 0x84) = 0xdc;
    *(undefined2 *)(param_1 + 0x86) = 0x1c2;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0x1000;
    *(undefined2 *)(param_1 + 0xba) = 0x1000;
    *(undefined2 *)(param_1 + 0xbc) = 0x1000;
    iVar4 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        iVar6 = iVar6 + 1;
        iVar3 = func_0x0007aae8();
        *(int *)(iVar4 + 0xc0) = iVar3;
        *(undefined2 *)(iVar3 + 6) = *param_2;
        **(undefined2 **)(iVar4 + 0xc0) = param_2[1];
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 2) = param_2[2];
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 4) = param_2[3];
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 8) = 0;
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 10) = 0;
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0xc) = 0;
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x38) = 0x1000;
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x3a) = 0x1000;
        psVar5 = param_2 + 4;
        *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x3c) = 0x1000;
        param_2 = param_2 + 5;
        func_0x00051b04(*(undefined4 *)(iVar4 + 0xc0),0xc,(int)*psVar5);
        iVar4 = iVar4 + 4;
      } while (iVar6 < (int)(uint)*(byte *)(param_1 + 8));
    }
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x20;
    *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0x3f) = 0xf0;
    *(undefined1 *)(*(int *)(param_1 + 200) + 0x3f) = 0xf0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x2b) = 0;
    func_0x0004766c(param_1);
    func_0x00048750(param_1);
    uVar2 = _DAT_1f8001a2;
    uVar1 = _DAT_1f8001a0;
    *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
    *(undefined2 *)(param_1 + 0x62) = uVar2;
    *(undefined2 *)(param_1 + 0x56) = uVar1;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = *(undefined2 *)(param_1 + 0x7c);
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

