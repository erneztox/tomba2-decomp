// FUN_8012d9b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8012d9b8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  int *in_t1;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iStack_20;
  
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 == 1) {
    iVar3 = func_0x8007778c(param_1);
    if (iVar3 == 0) {
      return;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 5)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      iVar3 = param_1;
      func_0x800517f8();
      *(undefined1 *)(param_1 + 0x2b) = 0;
      param_1 = iVar3;
    }
  }
  else {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        if (bVar2 != 3) goto code_r0x80136d84;
        func_0x8007a624(param_1);
      }
      return;
    }
    if (bVar2 == 0) {
      if (_DAT_800ed098 < 4) {
        *(undefined1 *)(param_1 + 4) = 3;
      }
      else {
        *(undefined1 *)(param_1 + 8) = 4;
        *(undefined1 *)(param_1 + 9) = 4;
        *(undefined1 *)(param_1 + 0xb) = 3;
        iVar6 = 0;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        iVar3 = param_1;
        if (*(char *)(param_1 + 8) != '\0') {
          puVar5 = (undefined2 *)&DAT_8014a7e4;
          iVar4 = param_1;
          do {
            iVar6 = iVar6 + 1;
            iVar3 = func_0x8007aae8();
            *(int *)(iVar4 + 0xc0) = iVar3;
            *(undefined2 *)(iVar3 + 6) = *puVar5;
            **(undefined2 **)(iVar4 + 0xc0) = puVar5[1];
            *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 2) = puVar5[2];
            *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 4) = puVar5[3];
            *(undefined4 *)(*(int *)(iVar4 + 0xc0) + 8) = 0;
            *(undefined4 *)(*(int *)(iVar4 + 0xc0) + 0xc) = 0;
            iVar3 = *(int *)(iVar4 + 0xc0);
            psVar1 = puVar5 + 4;
            puVar5 = puVar5 + 5;
            func_0x80051b04(iVar3,0xc,(int)*psVar1);
            iVar4 = iVar4 + 4;
          } while (iVar6 < (int)(uint)*(byte *)(param_1 + 8));
        }
        *(undefined2 *)(param_1 + 0x60) = 0xf;
        *(undefined2 *)(param_1 + 0x62) = 0x3bbf;
        *(undefined2 *)(param_1 + 100) = 0x70f0;
        *(undefined2 *)(param_1 + 0x66) = 0x70f8;
        *(undefined2 *)(param_1 + 0x68) = 0x88f0;
        *(undefined2 *)(param_1 + 0x6a) = 0x88f8;
        *(undefined2 *)(param_1 + 0x6c) = 0x28;
        *(undefined2 *)(param_1 + 0x6e) = 0;
        *(undefined2 *)(param_1 + 0xba) = 0xf0;
        *(undefined2 *)(param_1 + 0x50) = 0;
        *(undefined1 *)(param_1 + 0x2b) = 0;
        param_1 = iVar3;
      }
    }
  }
code_r0x80136d84:
  if (param_4 <= param_1) {
    FUN_8013fd98();
    return;
  }
  if (iStack_20 < param_4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_t1 = iStack_20 >> 2;
  FUN_8013fdb8();
  return;
}

