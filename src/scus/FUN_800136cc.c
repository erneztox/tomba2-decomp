
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80012398) */
/* WARNING: Removing unreachable block (ram,0x80012b10) */
/* WARNING: Removing unreachable block (ram,0x800123a0) */
/* WARNING: Exceeded maximum restarts with more pending */

int FUN_800136cc(short *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *unaff_s2;
  int unaff_s4;
  short unaff_s5;
  int unaff_s6;
  
  uVar3 = (uint)param_1 & 7;
  if (uVar3 != 3) {
    if (3 < uVar3) {
      if (uVar3 != 5) {
        iVar2 = FUN_80012fdc();
        return iVar2;
      }
      pbVar5 = &DAT_80025514;
      FUN_80015dd4(&DAT_80025514,0,0x80);
      FUN_8001806c();
      FUN_80015dfc(DAT_8002550c & 0xffffff);
      DAT_80025514 = FUN_800154f0(param_1);
      DAT_80025515 = 1;
      DAT_80025518 = *(undefined2 *)(&DAT_80025594 + (uint)DAT_80025514 * 4);
      DAT_8002551a = *(undefined2 *)(&DAT_800255a0 + (uint)DAT_80025514 * 4);
      FUN_80015dd4(&DAT_80025524,0xffffffff,0x5c);
      FUN_80015dd4(&DAT_80025580,0xffffffff,0x14);
      while (*unaff_s2 != 10) {
        if (DAT_800384a4 == 0) {
          uVar1 = FUN_80012d4c(CONCAT11(*unaff_s2,unaff_s2[1]));
          FUN_80012954(param_1,uVar1);
          if (pbVar5 != (byte *)0x0) goto code_r0x8001291c;
          iVar2 = 0xd;
          goto code_r0x8001238c;
        }
        if (*unaff_s2 == 0x20) {
          *param_1 = *param_1 + 8;
          goto code_r0x8001291c;
        }
        pbVar5 = (byte *)((*unaff_s2 - 0x21) * 0xf + -0x40380722);
        uVar1 = thunk_FUN_8001238c(pbVar5);
        param_1[2] = ((short)uVar1 - (short)((uint)uVar1 >> 0x10)) + 1;
        FUN_80012954(param_1,pbVar5);
        *param_1 = param_1[2] + *param_1 + 2;
        unaff_s2 = unaff_s2 + 1;
        if ((byte *)(unaff_s6 + unaff_s4) <= unaff_s2) {
          return 0;
        }
      }
      *param_1 = unaff_s5;
      param_1[1] = param_1[1] + 0x12;
code_r0x8001291c:
      iVar4 = 0xd;
      if (pbVar5 == (byte *)0x1) {
                    /* WARNING: Subroutine does not return */
        FUN_80017e4c(0xffffffff);
      }
switchD_800122b8_default:
      while ((param_1 == (short *)0x0 && (iVar4 != 0))) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(DAT_80025454) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      return iVar4;
    }
    if (uVar3 != 0) {
      iVar2 = FUN_80012fdc();
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_8001e5ec(&DAT_8001017c,&DAT_800254cc,&DAT_80025514);
code_r0x8001238c:
  if (iVar2 != 0) {
    iVar4 = 3;
    if (iVar2 != 1) goto switchD_800122b8_default;
    DAT_80025444 = (1 < DAT_8003849c) << 1;
    FUN_80012584(2);
    DAT_80025454 = 4;
  }
  iVar2 = 3;
  goto code_r0x8001238c;
}

