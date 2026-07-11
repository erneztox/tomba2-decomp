// FUN_80133854

void FUN_80133854(int param_1)

{
  byte bVar1;
  short sVar2;
  short extraout_var;
  short extraout_var_00;
  int iVar3;
  short *unaff_s0;
  short *unaff_s1;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_800e7eaa < 0xc) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x38) == 0) {
        *(undefined1 *)(param_1 + 4) = 3;
      }
      unaff_s1 = (short *)(param_1 + 0x50);
      iVar4 = 0;
      unaff_s0 = (short *)(param_1 + 0x52);
      sVar2 = *(short *)(param_1 + 0x4a);
      iVar3 = (int)*(short *)(param_1 + 0x48);
      do {
        func_0x80083f50(iVar3);
        iVar4 = iVar4 + 1;
        *unaff_s1 = *unaff_s1 + extraout_var;
        func_0x80083e80(iVar3);
        unaff_s1 = unaff_s1 + 4;
        unaff_s0[1] = unaff_s0[1] + -10 + extraout_var_00;
        *unaff_s0 = *unaff_s0 + sVar2;
        unaff_s0 = unaff_s0 + 4;
        iVar3 = iVar3 + 0x333;
      } while (iVar4 < 5);
      *(short *)(param_1 + 0x4a) = sVar2 + 4;
      iVar3 = func_0x8002b278(param_1);
      if (iVar3 != 0) {
        return;
      }
      func_0x80031780(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 4) = 3;
    }
  }
  else {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8013c994();
      return;
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined2 *)(param_1 + 0x4e) = 5;
      func_0x8009a450();
      return;
    }
  }
  unaff_s0[10] = 0;
  unaff_s0[0xb] = 0;
  unaff_s1[1] = unaff_s1[1] | 1;
  unaff_s0[0x28] = 0;
  *(char *)((int)unaff_s0 + 7) = *(char *)((int)unaff_s0 + 7) + '\x01';
                    /* WARNING: Subroutine does not return */
  FUN_801402b8(unaff_s0,0x23,8);
}

