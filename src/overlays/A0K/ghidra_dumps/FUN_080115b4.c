// FUN_080115b4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080115b4(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x6c);
  uVar3 = 0;
  if (0 < *(short *)(param_2 + 0x6a)) {
    do {
      uVar2 = 1 << (uVar3 & 0x1f);
      if (((*(uint *)(param_2 + 0x70) & uVar2) != 0) &&
         (iVar1 = func_0x00109f14(param_1,iVar4), iVar1 != 0)) {
        *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) | uVar2;
        *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & ~uVar2;
        func_0x001100e4(param_2,iVar4,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while ((int)uVar3 < (int)*(short *)(param_2 + 0x6a));
  }
  return;
}

