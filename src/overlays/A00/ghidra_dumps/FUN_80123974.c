// FUN_80123974

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80123974(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 3)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      *(undefined1 *)(param_1 + 1) = 1;
      FUN_8012ce0c();
      return;
    }
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8012ce0c();
      return;
    }
    if ((*(char *)(param_1 + 3) != '\x04') || (DAT_800bf8bc != -1)) {
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7feb5e5c)
      ;
      iVar7 = 0;
      if ((short)(ushort)*(byte *)(param_1 + 8) <= _DAT_800ed098) {
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 8);
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        iVar2 = _DAT_800ecfa0;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xb) = 0;
        puVar4 = *(undefined2 **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7feb5e70);
        iVar6 = param_1;
        if (*(char *)(param_1 + 8) != '\0') {
          do {
            iVar7 = iVar7 + 1;
            iVar3 = func_0x8007aae8();
            *(int *)(iVar6 + 0xc0) = iVar3;
            *(undefined2 *)(iVar3 + 6) = *puVar4;
            **(undefined2 **)(iVar6 + 0xc0) = puVar4[1];
            *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 2) = puVar4[2];
            *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 4) = puVar4[3];
            *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 8) = puVar4[4];
            *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 10) = puVar4[5];
            psVar5 = puVar4 + 7;
            *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 0xc) = puVar4[6];
            puVar4 = puVar4 + 8;
            *(int *)(*(int *)(iVar6 + 0xc0) + 0x40) = iVar2 + *(int *)(*psVar5 * 4 + iVar2 + 4);
            iVar6 = iVar6 + 4;
          } while (iVar7 < (int)(uint)*(byte *)(param_1 + 8));
        }
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(*(undefined1 *)(param_1 + 3)) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        default:
          return;
        }
      }
    }
    *(undefined1 *)(param_1 + 4) = 3;
    FUN_8012ce0c();
    return;
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      FUN_8012ce0c();
      return;
    }
    func_0x8007a624(param_1);
  }
  return;
}

