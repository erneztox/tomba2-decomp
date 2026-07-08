
undefined4 FUN_8001c020(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  int unaff_s0;
  
  FUN_80019434();
  pbVar5 = (byte *)(unaff_s0 + -0x4520);
  iVar2 = FUN_8001b678();
  if (iVar2 == 1) {
    iVar2 = FUN_8001e56c(unaff_s0 + -0x451f,&PTR_LAB_8001089c,5);
    if (iVar2 == 0) {
      uVar4 = *(undefined4 *)(unaff_s0 + -0x4494);
      iVar2 = FUN_8001b678(1,uVar4,pbVar5);
      if (iVar2 == 1) {
        if (1 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(&DAT_800108f8);
        }
        iVar2 = 0;
        do {
          if (((byte *)(unaff_s0 + -0x3d20) <= pbVar5) || (*pbVar5 == 0)) {
            if (iVar2 < 0x80) {
              *(undefined4 *)(iVar2 * 0x2c + -0x7ffc5b1c) = 0;
            }
            break;
          }
          iVar6 = iVar2 * 0x2c;
          *(undefined4 *)(iVar6 + -0x7ffc5b18) = *(undefined4 *)(pbVar5 + 2);
          bVar1 = pbVar5[6];
          iVar2 = iVar2 + 1;
          *(int *)(iVar6 + -0x7ffc5b20) = iVar2;
          *(uint *)(iVar6 + -0x7ffc5b1c) = (uint)bVar1;
          FUN_8001e44c(iVar6 + -0x7ffc5b14,pbVar5 + 8,*pbVar5);
          *(undefined1 *)(iVar6 + -0x7ffc5b14 + (uint)*pbVar5) = 0;
          pbVar5 = pbVar5 + (uint)*pbVar5 + (*pbVar5 & 1) + 8;
          if (1 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
            FUN_8001e5ec(&DAT_80010918,*(undefined4 *)(iVar6 + -0x7ffc5b18),
                         *(undefined4 *)(iVar6 + -0x7ffc5b20),*(undefined4 *)(iVar6 + -0x7ffc5b1c));
          }
        } while (iVar2 < 0x80);
        DAT_80026be8 = 0;
        uVar3 = 1;
        if (1 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(&DAT_8001092c,iVar2);
        }
      }
      else {
        uVar3 = 0;
        if (0 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(s_SOFTWARE_TERMINATED_CONSOLE_MAY_H_800108a4 + 0x30,uVar4);
        }
      }
    }
    else {
      uVar3 = 0;
      if (0 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(s_SOFTWARE_TERMINATED_CONSOLE_MAY_H_800108a4);
      }
    }
  }
  else {
    uVar3 = 0;
    if (0 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(&PTR_FUN_80010870);
    }
  }
  return uVar3;
}

