// FUN_080205d4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080205d4(int param_1)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 == 1) {
    iVar6 = func_0x0007778c(param_1);
    if (iVar6 != 0) {
      func_0x000517f8(param_1);
    }
    if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x08020768 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef69dc))();
      return;
    }
  }
  else {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        *(undefined1 *)(param_1 + 8) = 4;
        if (_DAT_800ed098 < 4) {
          *(undefined1 *)(param_1 + 4) = 3;
        }
        else {
          *(undefined1 *)(param_1 + 9) = 4;
          iVar6 = 0;
          *(undefined1 *)(param_1 + 0xd) = 0;
          *(undefined1 *)(param_1 + 0xb) = 0;
          *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
          if (*(char *)(param_1 + 8) != '\0') {
            puVar5 = (undefined2 *)&DAT_80133070;
            iVar4 = param_1;
            do {
              iVar6 = iVar6 + 1;
              iVar3 = func_0x0007aae8();
              *(int *)(iVar4 + 0xc0) = iVar3;
              *(undefined2 *)(iVar3 + 6) = *puVar5;
              **(undefined2 **)(iVar4 + 0xc0) = puVar5[1];
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 2) = puVar5[2];
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 4) = puVar5[3];
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 8) = 0;
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 10) = 0;
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0xc) = 0;
              psVar1 = puVar5 + 4;
              puVar5 = puVar5 + 5;
              func_0x00051b04(*(undefined4 *)(iVar4 + 0xc0),0xc,(int)*psVar1);
              iVar4 = iVar4 + 4;
            } while (iVar6 < (int)(uint)*(byte *)(param_1 + 8));
          }
          *(undefined2 *)(param_1 + 0x58) = 0;
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined2 *)(param_1 + 0x56) = 0x800;
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar2 != 2) {
      if (bVar2 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
    }
  }
  return;
}

