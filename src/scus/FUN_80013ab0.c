
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

uint FUN_80013ab0(int param_1,short *param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int unaff_s1;
  int unaff_s2;
  int unaff_s4;
  undefined4 uStackX_8;
  undefined4 uStackX_c;
  int local_10;
  uint uStack_c;
  
  uStack_c = (uint)DAT_80025516;
  if (uStack_c != 1) {
    if (uStack_c == 2) {
      (*DAT_80025510)(&DAT_80010254,param_1);
      local_10 = (int)param_2[3];
      uVar7 = (*DAT_80025510)(&DAT_80010240,(int)*param_2,(int)param_2[1],(int)param_2[2]);
      return uVar7;
    }
    local_10 = 0x5000000;
    do {
      iVar10 = 0;
      pcVar9 = (char *)&uStackX_8;
      do {
        uStackX_8 = DAT_80010134;
        uStackX_c = DAT_80010138;
        uVar7 = 0;
        iVar8 = unaff_s4;
        do {
          iVar6 = (int)(uVar7 + 2) >> 2;
          iVar3 = unaff_s2 + (uVar7 & 1);
          uVar7 = uVar7 + 1;
          *(uint *)(iVar8 + 8) =
               ((int)pcVar9[1] * (uint)(byte)(&DAT_80025474)[iVar6 + (0x10 - iVar3) * 2] + 0x78) *
               0x10000 | (int)*pcVar9 * (uint)(byte)(&DAT_80025474)[iVar6 + iVar3 * 2] + 0xa0;
          iVar8 = iVar8 + 4;
        } while ((int)uVar7 < 4);
        FUN_800137e0(&local_10);
        iVar10 = iVar10 + 1;
        pcVar9 = pcVar9 + 2;
      } while (iVar10 < 4);
      unaff_s2 = unaff_s2 + 1;
    } while (unaff_s2 < 0x10);
    uVar7 = FUN_800137e0(&local_10);
    return uVar7;
  }
  iVar10 = (int)param_2[2];
  uVar7 = (uint)DAT_80025518;
  if ((iVar10 <= (int)uVar7) && (param_4 = (uint)*param_2, (int)(iVar10 + param_4) <= (int)uVar7)) {
    uVar7 = (uint)param_2[1];
    if ((((int)uVar7 <= (int)DAT_8002551a) &&
        ((((int)(uVar7 + (int)param_2[3]) <= (int)DAT_8002551a && (0 < iVar10)) &&
         (-1 < (int)param_4)))) && ((-1 < (int)uVar7 && (0 < param_2[3])))) {
      return 0;
    }
  }
  pbVar4 = (byte *)0x80010234;
  do {
    param_1 = param_1 + -1;
    pbVar4 = pbVar4 + 1;
    if (param_1 < 0) {
      return uVar7 << 0x10 | param_4 & 0xffff;
    }
    bVar1 = true;
    uVar5 = 7;
    uVar2 = (int)(uint)*pbVar4 >> 7;
    do {
      if ((uVar2 & 1) != 0) {
        if (bVar1) {
          if ((int)(param_4 & 0xffff) < (int)uVar5) {
            param_4 = uVar5;
          }
          bVar1 = false;
          if ((int)uVar5 < (int)(uVar7 & 0xffff)) {
            DAT_80025454 = 0x12;
            iVar10 = 0x13;
            do {
              while (-1 < iVar10) {
                if (iVar10 != 0) {
                  if (iVar10 != 1) {
                    while (unaff_s1 == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                      switch(DAT_80025454) {
                      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
                        halt_baddata();
                      }
                    }
                    return 3;
                  }
                  DAT_80025444 = (1 < DAT_8003849c) << 1;
                  FUN_80012584(2);
                  DAT_80025454 = 4;
                }
                iVar10 = 3;
              }
              bVar1 = iVar10 != -2;
              iVar10 = 3;
            } while (bVar1);
            FUN_80012584(0);
            DAT_80025454 = 0x11;
            uVar7 = FUN_8001238c();
            return uVar7;
          }
        }
        else if ((int)uVar5 < (int)(uVar7 & 0xffff)) {
          uVar7 = uVar5;
        }
      }
      uVar5 = uVar5 - 1;
      uVar2 = (int)(uint)*pbVar4 >> (uVar5 & 0x1f);
    } while (-1 < (int)uVar5);
  } while( true );
}

