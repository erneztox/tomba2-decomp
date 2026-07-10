// FUN_0000128c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000128c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined2 *puVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x000517f8(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7fef1ea4)
      ;
      if (_DAT_800ed098 < (short)(ushort)*(byte *)(param_1 + 8)) {
        *(undefined1 *)(param_1 + 4) = 3;
      }
      else {
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 8);
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xb) = 0;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        puVar3 = *(undefined2 **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef1ea8);
        iVar6 = 0;
        iVar5 = param_1;
        if (*(char *)(param_1 + 8) == '\0') {
          return;
        }
        do {
          iVar6 = iVar6 + 1;
          iVar2 = func_0x0007aae8();
          *(int *)(iVar5 + 0xc0) = iVar2;
          *(undefined2 *)(iVar2 + 6) = *puVar3;
          **(undefined2 **)(iVar5 + 0xc0) = puVar3[1];
          *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2) = puVar3[2];
          *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4) = puVar3[3];
          *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 8) = puVar3[4];
          *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 10) = puVar3[5];
          psVar4 = puVar3 + 7;
          *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0xc) = puVar3[6];
          puVar3 = puVar3 + 8;
          func_0x00051b04(*(undefined4 *)(iVar5 + 0xc0),0xc,(int)*psVar4);
          iVar5 = iVar5 + 4;
        } while (iVar6 < (int)(uint)*(byte *)(param_1 + 8));
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

