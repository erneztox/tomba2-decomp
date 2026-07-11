// FUN_0803f5dc

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0803f5dc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  
  if (*(byte *)(param_1 + 7) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0803f60c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef5d84))();
    return uVar1;
  }
  if (*(char *)(param_1 + 0x47) == '\0') {
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x4e);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x4a);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x48);
    iVar2 = func_0x00083e80(-(int)*(short *)(param_1 + 0x58));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar2 * 0x3000;
    iVar2 = func_0x00083f50(-(int)*(short *)(param_1 + 0x58));
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar2 * 0x3000;
    sVar3 = *(short *)(param_1 + 0x58);
    if (sVar3 < 0) {
      sVar3 = -sVar3;
    }
    if ((sVar3 < 0xe2) && (sVar3 < 0x97)) {
      uVar4 = sVar3 < 0x4c ^ 1;
      if (*(short *)(param_1 + 0x58) < 0) {
        uVar4 = 0xf - uVar4;
      }
      func_0x00041768(param_1,*(undefined1 *)((short)uVar4 + -0x7feb6b38),4);
      return 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x4e);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x4a);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x48);
  func_0x00083e80((int)*(short *)(param_1 + 0x58));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

