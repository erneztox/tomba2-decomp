// FUN_000013d0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000013d0(int param_1,uint param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  int local_14;
  
  iVar3 = 2000;
  do {
    iVar2 = func_0x0008d030(&local_18,&local_14);
    iVar3 = iVar3 + -1;
    if (iVar2 == 0) {
      if (param_2 <= *(uint *)(local_14 + 8)) {
        *(undefined2 *)(_DAT_1f800138 + 0x4a) = 7;
      }
      uVar1 = *(undefined2 *)(local_14 + 0x10);
      *(undefined2 *)(param_1 + 0x24) = uVar1;
      *(undefined2 *)(param_1 + 0x1c) = uVar1;
      uVar1 = *(undefined2 *)(local_14 + 0x12);
      *(undefined2 *)(param_1 + 0x26) = uVar1;
      *(undefined2 *)(param_1 + 0x1e) = uVar1;
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(local_14 + 0x12);
      return local_18;
    }
  } while (iVar3 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

