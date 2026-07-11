// FUN_080199d4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080199d4(int param_1,int param_2,undefined1 param_3)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = func_0x0007ab20();
  if (iVar3 == 0) {
    return 0;
  }
  uVar2 = *(undefined1 *)(param_1 + 0x14a);
  *(undefined2 *)(iVar3 + 0x54) = 0;
  *(undefined1 *)(iVar3 + 0x46) = uVar2;
  uVar1 = *(undefined2 *)(param_1 + 0x56);
  *(undefined2 *)(iVar3 + 0x58) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0x80068fbc;
  *(undefined2 *)(iVar3 + 0x56) = uVar1;
  uVar2 = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)(iVar3 + 2) = 0;
  *(undefined1 *)(iVar3 + 3) = param_3;
  *(undefined1 *)(iVar3 + 0x5e) = 0;
  *(undefined1 *)(iVar3 + 0x2a) = uVar2;
  *(undefined1 *)(iVar3 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  if (*(char *)(param_2 + 3) == '\0') {
    uVar2 = 5;
    if (5 < _DAT_800ed098) {
LAB_08019a98:
      *(undefined1 *)(iVar3 + 9) = uVar2;
      *(undefined1 *)(iVar3 + 8) = uVar2;
      *(undefined2 *)(iVar3 + 0x5c) = *(undefined2 *)(param_2 + 0x5c);
      *(undefined1 *)(iVar3 + 0xd) = *(undefined1 *)(param_2 + 0xd);
      *(undefined1 *)(iVar3 + 0x18) = *(undefined1 *)(param_2 + 0x18);
      *(undefined1 *)(iVar3 + 0x19) = *(undefined1 *)(param_2 + 0x19);
      *(undefined1 *)(iVar3 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
      iVar6 = 0;
      *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
      iVar5 = param_2;
      iVar7 = iVar3;
      if (*(char *)(iVar3 + 9) != '\0') {
        do {
          iVar6 = iVar6 + 1;
          puVar4 = (undefined2 *)func_0x0007aae8();
          *(undefined2 **)(iVar7 + 0xc0) = puVar4;
          puVar4[3] = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 6);
          *puVar4 = **(undefined2 **)(iVar5 + 0xc0);
          puVar4[1] = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2);
          puVar4[2] = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4);
          puVar4[0x1c] = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x38);
          puVar4[0x1d] = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x3a);
          puVar4[0x1e] = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x3c);
          puVar4[4] = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 8);
          puVar4[5] = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 10);
          puVar4[6] = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0xc);
          *(undefined4 *)(puVar4 + 0x20) = *(undefined4 *)(*(int *)(iVar5 + 0xc0) + 0x40);
          iVar5 = iVar5 + 4;
          iVar7 = iVar7 + 4;
        } while (iVar6 < (int)(uint)*(byte *)(iVar3 + 9));
      }
      *(undefined1 *)(param_2 + 4) = 2;
      *(undefined1 *)(param_2 + 5) = 9;
      *(undefined1 *)(param_2 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (6 < _DAT_800ed098) {
    uVar2 = 6;
    goto LAB_08019a98;
  }
  *(undefined1 *)(iVar3 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

