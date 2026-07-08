
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

uint FUN_8001f6c4(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int unaff_s0;
  uint unaff_s1;
  undefined4 unaff_s5;
  int unaff_s6;
  byte *unaff_s7;
  ulonglong uVar6;
  
  cVar4 = (char)param_1;
  if (cVar4 == '\t') {
    FUN_8001ed8c(0x20);
    uVar5 = 0;
    if ((DAT_800272b8 & 7) != 0) {
      uVar5 = FUN_8001ef04();
      return uVar5;
    }
  }
  else {
    if (cVar4 == '\n') {
      uVar5 = 0xd;
      uVar6 = FUN_8001ed8c();
      iVar1 = DAT_80026dc0;
      DAT_800272b8 = 0;
      while( true ) {
        uVar3 = (uint)(uVar6 >> 0x20);
        iVar2 = param_1 * 4;
        if ((int)uVar6 == 0) break;
        unaff_s7 = unaff_s7 + 1;
        iVar2 = param_1 * 10 + -0x30;
        param_1 = iVar2 + uVar5;
        uVar3 = 0;
        if (*unaff_s7 >= 0x80) break;
        uVar5 = (uint)*unaff_s7;
        uVar6 = (ulonglong)CONCAT14(*unaff_s7 < 0x80,(uint)(byte)(&DAT_80027229)[uVar5]) &
                0xffffffff00000004;
      }
      if (-1 < (int)param_1) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(*unaff_s7) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        default:
          FUN_8001ed8c((int)(char)*unaff_s7);
          uVar5 = FUN_8001e67c();
          return uVar5;
        }
      }
      if (uVar5 != 0) {
        DAT_80026dc0 = 0;
        unaff_s0 = iVar1;
      }
      if (0x400 < unaff_s1) {
        (**(code **)((unaff_s1 >> 6) + 0x6dc0))();
        uVar5 = FUN_8001d718();
        return uVar5;
      }
      uVar5 = (unaff_s1 >> 6) * 0x40;
      if (uVar5 < unaff_s1) {
        uVar5 = uVar5 + 0x40;
      }
      FUN_8001d7d0(2,iVar2 << (uVar3 & 0x1f));
      FUN_8001d7d0(1);
      FUN_8001d7d0(3,&DAT_80026df8,uVar5);
      FUN_8001df9c(DAT_80026d10);
      if (unaff_s6 != 0) {
        DAT_80026da4 = unaff_s5;
      }
      if (unaff_s0 != 0) {
        DAT_80026dc0 = unaff_s0;
      }
      return uVar5;
    }
    if (((int)(char)(&DAT_80027229)[param_1 & 0xff] & 0x97U) != 0) {
      DAT_800272b8 = DAT_800272b8 + 1;
    }
    if (0x1f < (int)DAT_800272bc) {
      FUN_8001efec(1,0x8003c328);
      DAT_800272bc = 0;
    }
    *(char *)(DAT_800272bc + 0x8003c328) = cVar4;
    uVar5 = DAT_800272bc + 1;
    DAT_800272bc = uVar5;
  }
  if (0 < (int)DAT_800272bc) {
    uVar5 = FUN_8001efec(1,0x8003c328);
    DAT_800272bc = 0;
  }
  return uVar5;
}

