
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80012398) */
/* WARNING: Removing unreachable block (ram,0x80012b10) */
/* WARNING: Removing unreachable block (ram,0x800123a0) */
/* WARNING: Exceeded maximum restarts with more pending */

char FUN_80012fdc(byte *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int unaff_s0;
  byte *pbVar6;
  
  iVar3 = FUN_8001e52c();
  bVar2 = param_1 < param_1 + iVar3;
  sVar1 = *param_2;
  pbVar6 = param_1;
  while( true ) {
    if (!bVar2) {
      return '\0';
    }
    if (*pbVar6 == 10) break;
    if (DAT_800384a4 == 0) {
      uVar4 = FUN_80012d4c(CONCAT11(*pbVar6,pbVar6[1]));
      FUN_80012954(param_2,uVar4,param_3,7);
      if (unaff_s0 != 0) goto code_r0x8001291c;
      iVar3 = 0xd;
      goto code_r0x8001238c;
    }
    if (*pbVar6 == 0x20) {
      *param_2 = *param_2 + 8;
      goto code_r0x8001291c;
    }
    unaff_s0 = (*pbVar6 - 0x21) * 0xf + -0x40380722;
    uVar4 = thunk_FUN_8001238c(unaff_s0);
    param_2[2] = ((short)uVar4 - (short)((uint)uVar4 >> 0x10)) + 1;
    FUN_80012954(param_2,unaff_s0,param_3);
    *param_2 = param_2[2] + *param_2 + 2;
    pbVar6 = pbVar6 + 1;
    bVar2 = pbVar6 < param_1 + iVar3;
  }
  *param_2 = sVar1;
  param_2[1] = param_2[1] + 0x12;
code_r0x8001291c:
  cVar5 = '\r';
  if (unaff_s0 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_80017e4c(0xffffffff);
  }
switchD_800122b8_default:
  while ((param_2 == (short *)0x0 && (cVar5 != '\0'))) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(DAT_80025454) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return cVar5;
code_r0x8001238c:
  if (iVar3 != 0) {
    cVar5 = '\x03';
    if (iVar3 != 1) goto switchD_800122b8_default;
    DAT_80025444 = (1 < DAT_8003849c) << 1;
    FUN_80012584(2);
    DAT_80025454 = 4;
  }
  iVar3 = 3;
  goto code_r0x8001238c;
}

