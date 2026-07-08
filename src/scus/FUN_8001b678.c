
undefined4 FUN_8001b678(undefined4 param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 in_v1;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  byte *unaff_s0;
  undefined1 *unaff_s1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  undefined4 *unaff_s6;
  undefined8 uVar10;
  char in_stack_00000010;
  
  uVar10 = CONCAT44(in_v1,param_1);
  while( true ) {
    uVar7 = (uint)((ulonglong)uVar10 >> 0x20);
    if (7 < unaff_s2) break;
    iVar3 = (int)(char)*unaff_s0;
    uVar5 = (uint)*unaff_s0;
    unaff_s1 = &stack0x00000010;
    if (iVar3 != unaff_s5) {
      do {
        uVar7 = 0;
        if (uVar5 == 0) goto LAB_8001b688;
        unaff_s0 = unaff_s0 + 1;
        *unaff_s1 = (char)uVar5;
        uVar5 = (uint)*unaff_s0;
        unaff_s1 = unaff_s1 + 1;
      } while (*unaff_s0 != 0x5c);
      iVar3 = (int)(char)*unaff_s0;
    }
    uVar7 = uVar5;
    if (iVar3 == 0) break;
    unaff_s0 = unaff_s0 + 1;
    *unaff_s1 = 0;
    uVar10 = FUN_8001b338((int)uVar10,&stack0x00000010);
    if ((int)uVar10 == unaff_s4) {
      in_stack_00000010 = 0;
      uVar1 = FUN_8001ae84();
      return uVar1;
    }
    unaff_s2 = unaff_s2 + 1;
  }
LAB_8001b688:
  if (unaff_s2 < 8) {
    if (in_stack_00000010 == '\0') {
      if (0 < (int)DAT_800268d8) {
        uVar1 = 0;
        pbVar2 = DAT_800268d8;
        while( true ) {
          *pbVar2 = (byte)uVar7;
          pbVar2 = &LAB_80020000;
LAB_8001b02c:
          **(undefined1 **)(pbVar2 + 0x6b9c) = (char)uVar7;
          if ((*DAT_80026ba0 & 7) == 0) break;
          *DAT_80026b94 = (char)uVar1;
          pbVar2 = DAT_80026ba0;
        }
        DAT_80026bae = 0;
        DAT_80026bad = 0;
        DAT_80026bac = 2;
        *DAT_80026b94 = 0;
        *DAT_80026ba0 = 0;
        *DAT_80026ba4 = 0x1325;
        FUN_8001a0c0(1,0,0,0);
        if ((DAT_800268dc & 0x10) != 0) {
          FUN_8001a0c0(1,0,0,0);
        }
        iVar3 = FUN_8001a0c0(10,0,0,0);
        if (((iVar3 != 0) || (iVar3 = FUN_8001a0c0(0xc,0,0,0), iVar3 != 0)) ||
           (iVar3 = FUN_80019b78(0,0), iVar3 != 2)) {
          return 0xffffffff;
        }
        if ((iRam00006b14 == 0) || (unaff_s0 != (byte *)0x0)) {
          FUN_80019b78(0,0);
          if (((uint)unaff_s1 & 0xff) == 2) {
            iVar3 = 0;
            pbVar2 = unaff_s0;
            do {
              (&DAT_800268e8)[iVar3] = *pbVar2;
              iVar3 = iVar3 + 1;
              pbVar2 = unaff_s0 + iVar3;
            } while (iVar3 < 4);
          }
          if (((uint)unaff_s1 & 0xff) == 0xe) {
            DAT_800268ec = *unaff_s0;
          }
          iVar3 = ((uint)unaff_s1 & 0xff) * 4;
          DAT_80026bac = 0;
          if (*(int *)(&DAT_80026a14 + iVar3) != 0) {
            DAT_80026bad = 0;
          }
          *DAT_80026b94 = 0;
          iVar8 = 0;
          pbVar2 = unaff_s0;
          if (0 < *(int *)(&DAT_80026b14 + iVar3)) {
            do {
              *DAT_80026b9c = *pbVar2;
              iVar8 = iVar8 + 1;
              pbVar2 = unaff_s0 + iVar8;
            } while (iVar8 < *(int *)(&DAT_80026b14 + iVar3));
          }
          DAT_800268ed = SUB41(unaff_s1,0);
          *DAT_80026b98 = DAT_800268ed;
          uVar1 = 0;
          if (unaff_s2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_80017e4c(0xffffffff);
          }
        }
        else {
          uVar1 = 0xfffffffe;
          if (0 < (int)DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
            FUN_8001e5ec(&DAT_80010764,DAT_800268f6);
          }
        }
        return uVar1;
      }
    }
    else {
      *unaff_s1 = 0;
      iVar3 = FUN_8001b3dc();
      if (iVar3 == 0) {
        if (0 < (int)DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(s_file_not_found_80010814 + 4);
        }
      }
      else {
        unaff_s2 = 0;
        if (1 < (int)DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(s_time_out_in_strNext___80010824 + 0x10,&stack0x00000010);
        }
        puVar4 = &DAT_80039ee8;
        pbVar2 = &DAT_80039ee0;
        unaff_s1 = (undefined1 *)0x0;
        do {
          if (unaff_s1[-0x7ffc6118] == '\0') break;
          iVar3 = FUN_8001b054(puVar4,&stack0x00000010);
          if (iVar3 != 0) {
            if ((int)DAT_800268d8 < 2) {
              uVar6 = *(undefined4 *)(pbVar2 + 4);
              uVar1 = *(undefined4 *)(pbVar2 + 8);
              uVar9 = *(undefined4 *)(pbVar2 + 0xc);
              *unaff_s6 = *(undefined4 *)pbVar2;
              unaff_s6[1] = uVar6;
              unaff_s6[2] = uVar1;
              unaff_s6[3] = uVar9;
              uVar7 = *(uint *)(pbVar2 + 0x14);
              unaff_s6[4] = *(undefined4 *)(pbVar2 + 0x10);
              unaff_s6[5] = uVar7;
              unaff_s0 = pbVar2;
              goto LAB_8001b02c;
            }
                    /* WARNING: Subroutine does not return */
            FUN_8001e5ec(&PTR_LAB_80010854,&stack0x00000010);
          }
          pbVar2 = pbVar2 + 0x18;
          puVar4 = puVar4 + 0x18;
          unaff_s2 = unaff_s2 + 1;
          unaff_s1 = unaff_s1 + 0x18;
        } while (unaff_s2 < 0x40);
        if (0 < (int)DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(&DAT_80010860,&stack0x00000010);
        }
      }
    }
  }
  else if (0 < (int)DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(&DAT_800107e4);
  }
  return 0;
}

