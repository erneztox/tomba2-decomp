// FUN_08011020

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0801117c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011020(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [32];
  
  bVar1 = *(byte *)(param_1 + 0x51);
  *(byte *)(param_1 + 0x51) = bVar1 + 1;
  if (bVar1 < 7) {
    return;
  }
  if (*(char *)(param_1 + 0x46) != -1) {
    iVar3 = 0;
    func_0x0009b0c0(auStack_38,0x8018a090,(uint)*(byte *)(param_1 + 0x46) << 4,0x8018a0a0,
                    *(undefined1 *)
                     (*(int *)(param_1 + 8) + (uint)*(byte *)(param_1 + 0x47) * 0x3c + 4));
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    do {
      iVar2 = func_0x000808b0(auStack_38,0x8001);
      *(int *)(param_1 + 4) = iVar2;
      if (iVar2 != -1) {
        iVar2 = func_0x000808c0(iVar2,0x380,0);
        if (iVar2 != -1) {
          func_0x00080840(_DAT_800bf4b4);
          func_0x00080840(_DAT_800bf4b8);
          func_0x00080840(_DAT_800bf4bc);
          func_0x00080840(_DAT_800bf4c0);
          func_0x000808d0(*(undefined4 *)(param_1 + 4),uVar4,0x600);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x000808f0(*(undefined4 *)(param_1 + 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 7);
  }
  func_0x0001cba8(param_1,*(undefined1 *)(param_1 + 0x46));
  *(undefined1 *)(param_1 + 0x3e) = 2;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

