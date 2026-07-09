// FUN_8012496c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8012496c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  short *psVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int *in_t1;
  int iVar5;
  undefined2 *puVar6;
  int unaff_s2;
  int iVar7;
  int iStack_10;
  
  bVar2 = *(byte *)(param_1 + 6);
  if (bVar2 == 0) {
    sVar3 = *(short *)(param_1 + 0x32) + 4;
    *(short *)(param_1 + 0x32) = sVar3;
    if (-0x64f < sVar3) {
      *(undefined1 *)(param_1 + 0x1a) = 0x7f;
      *(undefined1 *)(param_1 + 0x19) = 0x7f;
      *(undefined1 *)(param_1 + 0x18) = 0x7f;
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      FUN_8012d9e8();
      return;
    }
    goto LAB_80124a50;
  }
  if (bVar2 == 1) {
    bVar2 = *(char *)(param_1 + 0x18) - 3;
    *(byte *)(param_1 + 0x1a) = bVar2;
    *(byte *)(param_1 + 0x19) = bVar2;
    *(byte *)(param_1 + 0x18) = bVar2;
    if (0 < (int)((uint)bVar2 << 0x18)) {
LAB_80124a50:
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x800517f8();
      return;
    }
    if (*(char *)(param_1 + 3) != '\0') {
      DAT_800bf9df = DAT_800bf9df | 8;
      *(undefined1 *)(param_1 + 0x1a) = 0;
      *(undefined1 *)(param_1 + 0x19) = 0;
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 4) = 3;
      goto LAB_80124a50;
    }
    bVar2 = *(byte *)(unaff_s2 + 4);
    if (bVar2 == 1) {
      iVar7 = func_0x8007778c();
      if (iVar7 == 0) {
        return;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(*(undefined1 *)(unaff_s2 + 5)) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        param_1 = unaff_s2;
        func_0x800517f8();
        *(undefined1 *)(unaff_s2 + 0x2b) = 0;
      }
      goto code_r0x80136d84;
    }
    if (1 < bVar2) {
      if (bVar2 != 2) {
        if (bVar2 != 3) goto code_r0x80136d84;
        func_0x8007a624();
      }
      return;
    }
  }
  if (bVar2 == 0) {
    if (_DAT_800ed098 < 4) {
      *(undefined1 *)(unaff_s2 + 4) = 3;
    }
    else {
      *(undefined1 *)(unaff_s2 + 8) = 4;
      *(undefined1 *)(unaff_s2 + 9) = 4;
      *(undefined1 *)(unaff_s2 + 0xb) = 3;
      iVar7 = 0;
      *(undefined1 *)(unaff_s2 + 0xd) = 0;
      *(char *)(unaff_s2 + 4) = *(char *)(unaff_s2 + 4) + '\x01';
      if (*(char *)(unaff_s2 + 8) != '\0') {
        puVar6 = (undefined2 *)&DAT_8014a7e4;
        iVar5 = unaff_s2;
        do {
          iVar7 = iVar7 + 1;
          iVar4 = func_0x8007aae8();
          *(int *)(iVar5 + 0xc0) = iVar4;
          *(undefined2 *)(iVar4 + 6) = *puVar6;
          **(undefined2 **)(iVar5 + 0xc0) = puVar6[1];
          *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2) = puVar6[2];
          *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4) = puVar6[3];
          *(undefined4 *)(*(int *)(iVar5 + 0xc0) + 8) = 0;
          *(undefined4 *)(*(int *)(iVar5 + 0xc0) + 0xc) = 0;
          param_1 = *(int *)(iVar5 + 0xc0);
          psVar1 = puVar6 + 4;
          puVar6 = puVar6 + 5;
          func_0x80051b04(param_1,0xc,(int)*psVar1);
          iVar5 = iVar5 + 4;
        } while (iVar7 < (int)(uint)*(byte *)(unaff_s2 + 8));
      }
      *(undefined2 *)(unaff_s2 + 0x60) = 0xf;
      *(undefined2 *)(unaff_s2 + 0x62) = 0x3bbf;
      *(undefined2 *)(unaff_s2 + 100) = 0x70f0;
      *(undefined2 *)(unaff_s2 + 0x66) = 0x70f8;
      *(undefined2 *)(unaff_s2 + 0x68) = 0x88f0;
      *(undefined2 *)(unaff_s2 + 0x6a) = 0x88f8;
      *(undefined2 *)(unaff_s2 + 0x6c) = 0x28;
      *(undefined2 *)(unaff_s2 + 0x6e) = 0;
      *(undefined2 *)(unaff_s2 + 0xba) = 0xf0;
      *(undefined2 *)(unaff_s2 + 0x50) = 0;
      *(undefined1 *)(unaff_s2 + 0x2b) = 0;
    }
  }
code_r0x80136d84:
  if (param_4 <= param_1) {
    FUN_8013fd98();
    return;
  }
  if (iStack_10 < param_4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_t1 = iStack_10 >> 2;
  FUN_8013fdb8();
  return;
}

