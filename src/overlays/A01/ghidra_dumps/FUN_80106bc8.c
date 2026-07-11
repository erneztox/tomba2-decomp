// FUN_80106bc8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_80106bc8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  
  pbVar3 = _DAT_800f2738;
  do {
    if (pbVar3 == (byte *)0x0) {
      return 0;
    }
    if (((((*pbVar3 & 1) == 0) || (pbVar3[3] != 0x82)) || (7 < DAT_800bf9f5)) ||
       ((pbVar3[0x2b] != 0 || ((pbVar3[0x46] & 8) == 0)))) {
      if ((*pbVar3 == 1) &&
         ((pbVar3[0x2b] == 0 &&
          (iVar1 = func_0x8002300c(pbVar3,param_1,*(short *)(param_1 + 0x80) + 100), iVar1 != 0))))
      {
        func_0x8001e860(pbVar3,param_1,0,0);
        uVar2 = FUN_8010fd40();
        return uVar2;
      }
    }
    else {
      iVar1 = func_0x80022f04(pbVar3,param_1);
      if (iVar1 != 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(pbVar3[2]) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        default:
          uVar2 = FUN_8010fc6c(0);
          return uVar2;
        }
      }
    }
    pbVar3 = *(byte **)(pbVar3 + 0x24);
  } while( true );
}

