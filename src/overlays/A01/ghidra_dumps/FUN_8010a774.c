// FUN_8010a774

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8010a774(int param_1)

{
  byte bVar1;
  int iVar2;
  int unaff_s0;
  undefined2 *puVar3;
  short *psVar4;
  int unaff_s1;
  int iVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 3)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x800517f8(param_1);
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) goto LAB_801139b8;
        func_0x8007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7feca4dc)
      ;
      if ((short)(ushort)*(byte *)(param_1 + 8) <= _DAT_800ed098) {
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 8);
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xb) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        puVar3 = *(undefined2 **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7feca4f4);
        iVar6 = 0;
        iVar5 = param_1;
        if (*(char *)(param_1 + 8) != '\0') {
          do {
            iVar6 = iVar6 + 1;
            iVar2 = func_0x8007aae8();
            *(int *)(iVar5 + 0xc0) = iVar2;
            *(undefined2 *)(iVar2 + 6) = *puVar3;
            **(undefined2 **)(iVar5 + 0xc0) = puVar3[1];
            *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2) = puVar3[2];
            *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4) = puVar3[3];
            *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 8) = puVar3[4];
            *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 10) = puVar3[5];
            psVar4 = puVar3 + 7;
            *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0xc) = puVar3[6];
            puVar3 = puVar3 + 8;
            func_0x80051b04(*(undefined4 *)(iVar5 + 0xc0),0xc,(int)*psVar4);
            iVar5 = iVar5 + 4;
          } while (iVar6 < (int)(uint)*(byte *)(param_1 + 8));
        }
        *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(*(undefined1 *)(param_1 + 3)) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        default:
          return;
        }
      }
      *(undefined1 *)(param_1 + 4) = 3;
    }
  }
LAB_801139b8:
  if (unaff_s1 == param_1) {
    FUN_8011de34();
    FUN_8011dc4c();
    *(char *)(unaff_s0 + 5) = (char)unaff_s1;
    *(undefined1 *)(unaff_s0 + 6) = 0;
  }
  return;
}

