// FUN_0802ad74

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802ad74(int param_1)

{
  short sVar1;
  ushort uVar2;
  short *psVar3;
  
  if (*(short *)(param_1 + 0x40) != 0) {
    psVar3 = *(short **)(param_1 + 0xc4);
    *psVar3 = _DAT_8014565a;
    psVar3[1] = _DAT_8014565c;
    psVar3[2] = _DAT_8014565e;
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if (sVar1 == 1) {
      DAT_800bfa3f = DAT_800bfa3f & 0x7f;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = func_0x0009a450();
    *psVar3 = (*psVar3 + 7) - (uVar2 & 0xf);
    uVar2 = func_0x0009a450();
    psVar3[1] = (psVar3[1] + 7) - (uVar2 & 0xf);
    uVar2 = func_0x0009a450();
    psVar3[2] = (psVar3[2] + 7) - (uVar2 & 0xf);
    if (DAT_800bf8df == -1) {
      if ((_DAT_1f80017c & 7) == 0) {
        func_0x00074590(0x88,7,0xffffffd8);
      }
      if ((DAT_800bfa3f & 0x80) == 0) {
        DAT_800bfa3f = DAT_800bfa3f | 0x80;
      }
    }
    else if ((_DAT_1f80017c & 7) == 0) {
      func_0x00074590(8,0xfffffff2,0);
      halt_baddata();
    }
  }
  return;
}

