// FUN_80088248

undefined4 FUN_80088248(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_1[1] != 0) {
      return 0;
    }
    iVar1 = (*DAT_800abe54)();
    if (iVar1 == 0) {
      *(undefined1 *)((int)param_1 + 0x49) = 4;
      *(undefined1 *)((int)param_1 + 0x46) = 1;
      param_1[5] = (int)FUN_8008831c;
      param_1[6] = (int)&LAB_800883c4;
      iVar1 = (param_2 + 3 >> 2) * 4;
      *param_1 = iVar1;
      *(undefined1 *)((int)param_1 + 0x47) = 0;
      iVar1 = iVar1 + ((int)(*(byte *)((int)param_1 + 0xe3) + 1) >> 1) * 4;
      param_1[1] = iVar1;
      param_1[2] = iVar1 + ((uint)*(byte *)((int)param_1 + 0xe9) * 5 + 3 & 0xffc);
      return 1;
    }
  }
  return 0;
}

