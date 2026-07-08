
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8001b874(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  
  pbVar5 = &DAT_8003bae0;
  iVar3 = FUN_8001b678(1,0x10,&DAT_8003bae0);
  if (iVar3 == 1) {
    iVar3 = FUN_8001e56c(0x8003bae1,&PTR_LAB_8001089c,5);
    uVar2 = _DAT_8003bb6c;
    if (iVar3 == 0) {
      iVar3 = FUN_8001b678(1,_DAT_8003bb6c,&DAT_8003bae0);
      if (iVar3 == 1) {
        if (1 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(&DAT_800108f8);
        }
        iVar3 = 0;
        do {
          if (*pbVar5 == 0) break;
          iVar6 = iVar3 * 0x2c;
          *(undefined4 *)(iVar6 + -0x7ffc5b18) = *(undefined4 *)(pbVar5 + 2);
          iVar7 = iVar6 + -0x7ffc5b14;
          bVar1 = pbVar5[6];
          iVar3 = iVar3 + 1;
          *(int *)(iVar6 + -0x7ffc5b20) = iVar3;
          *(uint *)(iVar6 + -0x7ffc5b1c) = (uint)bVar1;
          FUN_8001e44c(iVar7,pbVar5 + 8,*pbVar5);
          *(undefined1 *)(iVar7 + (uint)*pbVar5) = 0;
          pbVar5 = pbVar5 + (uint)*pbVar5 + (*pbVar5 & 1) + 8;
          if (1 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
            FUN_8001e5ec(&DAT_80010918,*(undefined4 *)(iVar6 + -0x7ffc5b18),
                         *(undefined4 *)(iVar6 + -0x7ffc5b20),*(undefined4 *)(iVar6 + -0x7ffc5b1c),
                         iVar7);
          }
          if (0x7f < iVar3) goto LAB_8001bae0;
        } while (pbVar5 < (byte *)0x8003c2e0);
        if (iVar3 < 0x80) {
          *(undefined4 *)(iVar3 * 0x2c + -0x7ffc5b1c) = 0;
        }
LAB_8001bae0:
        DAT_80026be8 = 0;
        uVar4 = 1;
        if (1 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(&DAT_8001092c,iVar3);
        }
      }
      else {
        uVar4 = 0;
        if (0 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(s_SOFTWARE_TERMINATED_CONSOLE_MAY_H_800108a4 + 0x30,uVar2);
        }
      }
    }
    else {
      uVar4 = 0;
      if (0 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(s_SOFTWARE_TERMINATED_CONSOLE_MAY_H_800108a4);
      }
    }
  }
  else {
    uVar4 = 0;
    if (0 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(&PTR_FUN_80010870);
    }
  }
  return uVar4;
}

