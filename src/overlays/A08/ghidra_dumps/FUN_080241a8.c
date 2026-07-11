// FUN_080241a8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080241a8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined2 *puVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 3) == '\0') {
      func_0x0011cd00(param_1);
    }
    else if (*(char *)(param_1 + 3) == '\x01') {
      func_0x0011cea4(param_1);
      if (*(char *)(param_1 + 1) != '\0') {
        func_0x000517f8(param_1);
        halt_baddata();
      }
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7febacdc)
      ;
      if (_DAT_800ed098 < (short)(ushort)*(byte *)(param_1 + 8)) {
        *(undefined1 *)(param_1 + 4) = 3;
      }
      else {
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 8);
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xb) = 0;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        puVar3 = *(undefined2 **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7febace4);
        iVar6 = 0;
        iVar5 = param_1;
        if (*(char *)(param_1 + 8) != '\0') {
          do {
            iVar6 = iVar6 + 1;
            iVar2 = func_0x0007aae8();
            *(int *)(iVar5 + 0xc0) = iVar2;
            *(undefined2 *)(iVar2 + 6) = *puVar3;
            **(undefined2 **)(iVar5 + 0xc0) = puVar3[1];
            *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2) = puVar3[2];
            *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4) = puVar3[3];
            *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 8) = 0;
            *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 10) = 0;
            psVar4 = puVar3 + 4;
            *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0xc) = 0;
            puVar3 = puVar3 + 5;
            func_0x00051b04(*(undefined4 *)(iVar5 + 0xc0),0xc,(int)*psVar4);
            iVar5 = iVar5 + 4;
          } while (iVar6 < (int)(uint)*(byte *)(param_1 + 8));
        }
        if ((*(char *)(param_1 + 3) == '\x01') && (DAT_800bf8de == -1)) {
          DAT_800bfa46 = DAT_800bfa46 & 0xef | 8;
        }
        *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
        if (*(char *)(param_1 + 3) == '\0') {
          *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x28;
        }
        else {
          *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x50;
        }
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

