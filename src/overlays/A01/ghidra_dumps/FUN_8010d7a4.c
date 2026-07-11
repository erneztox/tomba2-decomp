// FUN_8010d7a4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

uint FUN_8010d7a4(int param_1,uint param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_s1;
  
  if (*(char *)(param_1 + 7) == '\0') {
    if (*(byte *)(param_1 + 0x46) != param_2) {
      *(char *)(param_1 + 0x46) = (char)param_2;
      if (param_2 != 0xd) {
        if ((int)param_2 < 0xe) {
          if (param_2 == 5) {
            uVar5 = FUN_801167f8();
            return uVar5;
          }
LAB_801167fc:
          uVar5 = 0;
          if (*(char *)(unaff_s1 + 1) != '\0') {
            func_0x80041098();
            uVar5 = func_0x8004190c();
          }
          return uVar5;
        }
        if ((param_2 != 0xf) && (param_2 != 0x11)) goto LAB_801167fc;
      }
      *(int *)(*(int *)(param_1 + 0xc4) + 0x40) = _DAT_800ecfc4 + *(int *)(_DAT_800ecfc4 + 0x4c);
      func_0x80077cfc(param_1,0x80139b24,param_2,4);
    }
    *(short *)(param_1 + 0x42) = (short)param_3;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  else if (*(char *)(param_1 + 7) != '\x01') {
    if (cRamfffff8bf != -1) {
      *(undefined1 *)(param_3 + 0xbf) = 0;
      uVar5 = FUN_8011fa14();
      return uVar5;
    }
    if (cRamfffff8c1 == '\0') {
      *(char *)(param_3 + 0xbf) = (char)param_1 + '`';
      uVar5 = FUN_8011fa14();
      return uVar5;
    }
    if ((bRamfffffa01 & 2) == 0) {
      *(char *)(param_3 + 0xbf) = (char)unaff_s1;
      uVar5 = FUN_8011fa14();
      return uVar5;
    }
    *(undefined1 *)(param_3 + 4) = 3;
    uVar5 = FUN_8011fa14();
    return uVar5;
  }
  iVar3 = func_0x80083e80(-(int)*(short *)(param_1 + 0x58));
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + (short)(iVar3 >> 5);
  *(short *)(param_1 + 0x4e) =
       *(short *)(param_1 + 0x4e) + (short)(-(int)*(short *)(param_1 + 0x4e) >> 2);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    sVar1 = *(short *)(param_1 + 0x32);
    iVar3 = func_0x80083f50((int)*(short *)(param_1 + 0x70));
    iVar4 = func_0x8009a450();
    *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + (short)(iVar4 >> 9);
    uVar2 = *(ushort *)(param_1 + 0x42);
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x32) +
         (short)(((int)sVar1 + (iVar3 >> 5)) - (int)*(short *)(param_1 + 0x32) >> 4);
    *(ushort *)(param_1 + 0x42) = uVar2 - 1;
    return (uint)((int)((uint)uVar2 << 0x10) < 1);
  }
}

