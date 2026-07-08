
undefined4 FUN_8001bf20(char param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_s0;
  byte *pbVar5;
  int iVar6;
  int aiStack_20 [2];
  undefined4 uStack_18;
  
  DAT_80026c2c = param_2;
  if (param_1 == '\x01') {
    if (0 < DAT_80026c0c) {
      if (DAT_80026c08 == 0x200) {
        if ((DAT_8002683c & 1) == 0) {
          FUN_80019414(aiStack_20,3);
                    /* WARNING: Subroutine does not return */
          FUN_8001959c(aiStack_20);
        }
        FUN_80019454(0);
        FUN_80019434(aiStack_20,3);
        FUN_80019478(0);
        FUN_80019454(0x8001b994);
        uVar3 = FUN_8001b7c0();
        return uVar3;
      }
      if ((DAT_8002683c & 1) == 0) {
        unaff_s0 = &DAT_80026c00;
        FUN_80019414(DAT_80026c00,DAT_80026c08);
        DAT_80026c00 = DAT_80026c00 + DAT_80026c08 * 4;
        DAT_80026c0c = DAT_80026c0c + -1;
        DAT_80026c18 = DAT_80026c18 + 1;
      }
      else {
        FUN_80019434(DAT_80026c00,DAT_80026c08);
      }
      pbVar5 = (byte *)(unaff_s0 + -0x1148);
      iVar2 = FUN_8001b678();
      if (iVar2 == 1) {
        iVar2 = FUN_8001e56c((int)unaff_s0 + -0x451f,&PTR_LAB_8001089c,5);
        if (iVar2 == 0) {
          uStack_18 = unaff_s0[-0x1125];
          iVar2 = FUN_8001b678(1,uStack_18,pbVar5);
          if (iVar2 == 1) {
            if (1 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
              FUN_8001e5ec(&DAT_800108f8);
            }
            iVar2 = 0;
            do {
              if ((unaff_s0 + -0xf48 <= pbVar5) || (*pbVar5 == 0)) {
                if (iVar2 < 0x80) {
                  *(undefined4 *)(iVar2 * 0x2c + -0x7ffc5b1c) = 0;
                }
                break;
              }
              iVar4 = iVar2 * 0x2c;
              *(undefined4 *)(iVar4 + -0x7ffc5b18) = *(undefined4 *)(pbVar5 + 2);
              iVar6 = iVar4 + -0x7ffc5b14;
              bVar1 = pbVar5[6];
              iVar2 = iVar2 + 1;
              *(int *)(iVar4 + -0x7ffc5b20) = iVar2;
              *(uint *)(iVar4 + -0x7ffc5b1c) = (uint)bVar1;
              FUN_8001e44c(iVar6,pbVar5 + 8,*pbVar5);
              *(undefined1 *)(iVar6 + (uint)*pbVar5) = 0;
              pbVar5 = pbVar5 + (uint)*pbVar5 + (*pbVar5 & 1) + 8;
              if (1 < DAT_800268d8) {
                aiStack_20[0] = iVar6;
                    /* WARNING: Subroutine does not return */
                FUN_8001e5ec(&DAT_80010918,*(undefined4 *)(iVar4 + -0x7ffc5b18),
                             *(undefined4 *)(iVar4 + -0x7ffc5b20),
                             *(undefined4 *)(iVar4 + -0x7ffc5b1c));
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
              FUN_8001e5ec(s_SOFTWARE_TERMINATED_CONSOLE_MAY_H_800108a4 + 0x30,uStack_18);
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
  }
  else {
    DAT_80026c0c = -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_80017e4c(0xffffffff);
}

