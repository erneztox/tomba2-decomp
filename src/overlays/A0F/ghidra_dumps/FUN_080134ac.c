// FUN_080134ac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080134ac(undefined1 *param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if ((byte)param_1[6] < 9) {
                    /* WARNING: Could not emulate address calculation at 0x080134fc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)(byte)param_1[6] * 4 + -0x7fef7024))();
    return;
  }
  if (*(short *)(_DAT_1f80024c + 4) != 0x501) {
    *param_1 = 2;
    param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (2 < (byte)param_1[6]) {
    if ((param_1[0x46] & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar1 = *(short *)(param_1 + 0x6a);
    if (*(short *)(param_1 + 0x72) == 0) {
      iVar3 = func_0x00083e80((int)sVar1);
      *(int *)(param_1 + 0x30) =
           *(int *)(param_1 + 0x30) + iVar3 * *(short *)(param_1 + 0x44) * 0x10;
      iVar3 = func_0x00083f50((int)sVar1);
      iVar3 = iVar3 * *(short *)(param_1 + 0x44) >> 4;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar3;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar3;
      iVar3 = func_0x0004766c(param_1);
      if (iVar3 < 0) {
        func_0x00049760(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00049760(param_1);
      bVar2 = false;
      if (param_1[0x2b] == '\0') {
        iVar3 = func_0x000495dc(param_1,0,0);
        bVar2 = 0 < iVar3;
      }
      if (bVar2) {
        *param_1 = 2;
        param_1[0x2b] = 2;
        func_0x00074590(0xe,0,0);
        func_0x00031470(2,param_1 + 0x2c,0,param_1 + 0x68);
        halt_baddata();
      }
    }
    else {
      iVar3 = func_0x00083e80((int)sVar1);
      *(int *)(param_1 + 0x30) =
           *(int *)(param_1 + 0x30) + iVar3 * *(short *)(param_1 + 0x44) * 0x10;
      iVar3 = func_0x00083f50((int)sVar1);
      iVar3 = iVar3 * *(short *)(param_1 + 0x44) >> 4;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x74));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar4 * iVar3 >> 4);
      iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x74));
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar4 * iVar3 >> 4);
    }
  }
  return;
}

