
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

uint FUN_8001f6d0(char param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_s0;
  uint unaff_s1;
  undefined4 unaff_s5;
  int unaff_s6;
  byte *unaff_s7;
  ulonglong uVar4;
  int in_stack_00000010;
  
  if (param_1 == '\t') {
    FUN_8001ed8c(0x20);
    uVar3 = 0;
    if ((DAT_800272b8 & 7) != 0) {
      uVar3 = FUN_8001ef04();
      return uVar3;
    }
  }
  else {
    if (param_1 == '\n') {
      uVar3 = 0xd;
      uVar4 = FUN_8001ed8c();
      DAT_800272b8 = 0;
      while( true ) {
        uVar2 = (uint)(uVar4 >> 0x20);
        iVar1 = unaff_s0 * 4;
        if ((int)uVar4 == 0) break;
        unaff_s7 = unaff_s7 + 1;
        iVar1 = unaff_s0 * 10 + -0x30;
        unaff_s0 = iVar1 + uVar3;
        uVar2 = 0;
        if (*unaff_s7 >= 0x80) break;
        uVar3 = (uint)*unaff_s7;
        uVar4 = (ulonglong)CONCAT14(*unaff_s7 < 0x80,(uint)(byte)(&DAT_80027229)[uVar3]) &
                0xffffffff00000004;
      }
      if (-1 < (int)unaff_s0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(*unaff_s7) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        default:
          FUN_8001ed8c((int)(char)*unaff_s7);
          uVar3 = FUN_8001e67c();
          return uVar3;
        }
      }
      if (uVar3 != 0) {
        in_stack_00000010 = DAT_80026dc0;
        DAT_80026dc0 = 0;
      }
      if (0x400 < unaff_s1) {
        (**(code **)((unaff_s1 >> 6) + 0x6dc0))();
        uVar3 = FUN_8001d718();
        return uVar3;
      }
      uVar3 = (unaff_s1 >> 6) * 0x40;
      if (uVar3 < unaff_s1) {
        uVar3 = uVar3 + 0x40;
      }
      FUN_8001d7d0(2,iVar1 << (uVar2 & 0x1f));
      FUN_8001d7d0(1);
      FUN_8001d7d0(3,&DAT_80026df8,uVar3);
      FUN_8001df9c(DAT_80026d10);
      if (unaff_s6 != 0) {
        DAT_80026da4 = unaff_s5;
      }
      if (in_stack_00000010 != 0) {
        DAT_80026dc0 = in_stack_00000010;
      }
      return uVar3;
    }
    if (((int)(char)(&DAT_80027229)[unaff_s0 & 0xff] & 0x97U) != 0) {
      DAT_800272b8 = DAT_800272b8 + 1;
    }
    if (0x1f < (int)DAT_800272bc) {
      FUN_8001efec(1,0x8003c328);
      DAT_800272bc = 0;
    }
    *(char *)(DAT_800272bc + 0x8003c328) = (char)unaff_s0;
    uVar3 = DAT_800272bc + 1;
    DAT_800272bc = uVar3;
  }
  if (0 < (int)DAT_800272bc) {
    uVar3 = FUN_8001efec(1,0x8003c328);
    DAT_800272bc = 0;
  }
  return uVar3;
}

