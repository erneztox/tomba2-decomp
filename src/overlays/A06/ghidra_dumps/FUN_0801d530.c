// FUN_0801d530

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801d530(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(byte *)(param_1 + 3) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0801d7a8 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6614))();
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined1 *)(param_1 + 8) =
             *(undefined1 *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7febbdd0);
        if ((short)(ushort)*(byte *)(param_1 + 8) <= _DAT_800ed098) {
          *(byte *)(param_1 + 9) = *(byte *)(param_1 + 8);
          *(undefined1 *)(param_1 + 0xd) = 4;
          *(undefined1 *)(param_1 + 0xb) = 0;
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined2 *)(param_1 + 0x58) = 0;
          *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
          puVar3 = *(undefined2 **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7febbdfc);
          iVar5 = 0;
          iVar4 = param_1;
          if (*(char *)(param_1 + 8) != '\0') {
            do {
              iVar5 = iVar5 + 1;
              iVar2 = func_0x0007aae8();
              *(int *)(iVar4 + 0xc0) = iVar2;
              *(undefined2 *)(iVar2 + 6) = *puVar3;
              **(undefined2 **)(iVar4 + 0xc0) = puVar3[1];
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 2) = puVar3[2];
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 4) = puVar3[3];
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 8) = puVar3[4];
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 10) = puVar3[5];
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0xc) = puVar3[6];
              func_0x00051b04(*(undefined4 *)(iVar4 + 0xc0),0xc,(int)(short)puVar3[7]);
              puVar3 = puVar3 + 8;
              *(undefined1 *)(*(int *)(iVar4 + 0xc0) + 0x3f) = 0;
              iVar4 = iVar4 + 4;
            } while (iVar5 < (int)(uint)*(byte *)(param_1 + 8));
          }
          if (10 < *(byte *)(param_1 + 3)) {
            return;
          }
                    /* WARNING: Could not emulate address calculation at 0x0801d6e4 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6644))();
          return;
        }
        *(undefined1 *)(param_1 + 4) = 3;
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
  }
  return;
}

