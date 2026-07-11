// FUN_80121f6c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

uint FUN_80121f6c(undefined1 *param_1,int param_2,int *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  
  bVar1 = param_1[4];
  uVar3 = (uint)(bVar1 < 2);
  if (bVar1 == 1) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_1[5]) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[1] == '\0') {
      return 0;
    }
    uVar3 = func_0x800517f8();
    in_at = extraout_at_00;
  }
  else {
    if (uVar3 == 0) {
      uVar3 = 3;
      if (bVar1 != 2) {
        if (bVar1 != 3) goto LAB_8012b2c4;
        uVar3 = func_0x8007a624(param_1);
      }
      return uVar3;
    }
    if (bVar1 == 0) {
      param_2 = 0xc;
      param_3 = (int *)&DAT_00000015;
      puVar4 = param_1;
      iVar5 = func_0x80051b70();
      if (iVar5 != 0) {
        return 0x4dab;
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x4dab;
      *(undefined2 *)(param_1 + 0x32) = 0xe5c0;
      *(undefined2 *)(param_1 + 0x36) = 0x2342;
      *(undefined2 *)(param_1 + 0x80) = 0x118;
      *(undefined2 *)(param_1 + 0x82) = 0x230;
      *(undefined2 *)(param_1 + 0x84) = 3000;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *param_1 = 1;
      param_1[0x29] = 0;
      param_1[0x2b] = 0;
      *(undefined2 *)(param_1 + 0x86) = 0xc26;
      uVar3 = (byte)param_1[4] + 1;
      param_1[4] = (char)uVar3;
      in_at = extraout_at;
      param_1 = puVar4;
    }
  }
LAB_8012b2c4:
  if (uVar3 == 0) {
    setCopReg(2,in_zero,*(undefined4 *)(param_2 + 0x18));
    setCopReg(2,in_at,*(undefined4 *)(param_2 + 0x1c));
    copFunction(2,0x180001);
    iVar5 = getCopControlWord(2,0xf800);
    *param_3 = iVar5;
    if (-1 < *param_3) {
      uVar2 = getCopReg(2,0xe);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      copFunction(2,0x168002e);
      getCopReg(2,7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0xffffffff;
}

