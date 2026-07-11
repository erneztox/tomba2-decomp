// FUN_08016cd4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016cd4(int param_1)

{
  short sVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (0 < *(short *)(param_1 + 0x6a)) {
    pcVar3 = (char *)(*(int *)(param_1 + 0x6c) + 3);
    do {
      uVar2 = 1 << (uVar4 & 0x1f);
      if (((*(uint *)(param_1 + 0x70) & uVar2) != 0) && ((*(uint *)(param_1 + 0x74) & uVar2) == 0))
      {
        *(int *)(param_1 + 0x2c) = (int)*(short *)(pcVar3 + 1) << 0x10;
        *(int *)(param_1 + 0x30) = (int)*(short *)(pcVar3 + 3) << 0x10;
        sVar1 = *(short *)(pcVar3 + 5);
        *(undefined1 *)(param_1 + 0xb) = 0x11;
        *(undefined2 *)(param_1 + 0x7a) = 0x1300;
        *(undefined2 *)(param_1 + 0x7c) = 0x1300;
        *(undefined2 *)(param_1 + 0x7e) = 0x1300;
        *(undefined1 *)(param_1 + 0x47) = 0;
        *(undefined2 *)(param_1 + 0x5a) = 0;
        *(undefined1 *)(param_1 + 0xd) = 2;
        *(undefined4 *)(param_1 + 0x18) = 0x2c808080;
        *(int *)(param_1 + 0x34) = (int)sVar1 << 0x10;
        func_0x001160a4((int)*(short *)(pcVar3 + 1),(int)*(short *)(pcVar3 + 3),
                        (int)*(short *)(pcVar3 + 5),param_1 + 0x18);
        *(undefined2 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
        if (*pcVar3 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00077b38(param_1,0x8011fc38,4);
        func_0x0003c2d4(param_1);
      }
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 0x10;
    } while ((int)uVar4 < (int)*(short *)(param_1 + 0x6a));
  }
  return;
}

