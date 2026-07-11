// FUN_0801c67c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c67c(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    uVar3 = *(byte *)(param_1 + 3) - 1;
    if (uVar3 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x0801c8e4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar3 * 4 + -0x7fef6aac))();
      return;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x000517f8(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        if (*(char *)(param_1 + 3) == '\x06') {
          func_0x00074af0(*(undefined4 *)(param_1 + 0x60));
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7feccfe8)
      ;
      if ((short)(ushort)*(byte *)(param_1 + 8) <= _DAT_800ed098) {
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 8);
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xb) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        puVar4 = *(undefined2 **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fecd014);
        iVar7 = 0;
        iVar6 = param_1;
        if (*(char *)(param_1 + 8) != '\0') {
          do {
            iVar7 = iVar7 + 1;
            iVar2 = func_0x0007aae8();
            *(int *)(iVar6 + 0xc0) = iVar2;
            *(undefined2 *)(iVar2 + 6) = *puVar4;
            **(undefined2 **)(iVar6 + 0xc0) = puVar4[1];
            *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 2) = puVar4[2];
            *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 4) = puVar4[3];
            *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 8) = puVar4[4];
            *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 10) = puVar4[5];
            psVar5 = puVar4 + 7;
            *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 0xc) = puVar4[6];
            puVar4 = puVar4 + 8;
            func_0x00051b04(*(undefined4 *)(iVar6 + 0xc0),0xc,(int)*psVar5);
            iVar6 = iVar6 + 4;
          } while (iVar7 < (int)(uint)*(byte *)(param_1 + 8));
        }
        uVar3 = *(byte *)(param_1 + 3) - 1;
        *(undefined1 *)(param_1 + 0xbf) = 0;
        if (9 < uVar3) {
          return;
        }
                    /* WARNING: Could not emulate address calculation at 0x0801c82c */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(uVar3 * 4 + -0x7fef6ad4))();
        return;
      }
      *(undefined1 *)(param_1 + 4) = 3;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

