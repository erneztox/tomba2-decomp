
int FUN_8009b0c0(int param_1,char *param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  char *local_res4;
  uint local_res8;
  undefined4 local_resc;
  byte local_39;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint *local_28;
  
  local_28 = &local_res8;
  cVar1 = *param_2;
  iVar8 = 0;
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
joined_r0x8009b108:
  iVar4 = (int)cVar1;
  if (iVar4 != 0) {
    if (iVar4 == 0x25) {
      local_38 = DAT_800acf14;
      local_34 = DAT_800acf18;
      local_30 = DAT_800acf1c;
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                pcVar2 = local_res4 + 1;
                iVar4 = (int)local_res4[1];
                if (iVar4 != 0x2d) break;
                local_38 = local_38 | 1;
                local_res4 = pcVar2;
              }
              if (iVar4 != 0x2b) break;
              local_38 = local_38 | 2;
              local_res4 = pcVar2;
            }
            if (iVar4 != 0x20) break;
            local_38._0_2_ = CONCAT11(local_res4[1],(byte)local_38);
            local_res4 = pcVar2;
          }
          if (iVar4 != 0x23) break;
          local_38 = local_38 | 4;
          local_res4 = pcVar2;
        }
        if (iVar4 != 0x30) break;
        local_38 = local_38 | 8;
        local_res4 = pcVar2;
      }
      if (iVar4 == 0x2a) {
        local_34 = *local_28;
        local_28 = local_28 + 1;
        if ((int)local_34 < 0) {
          local_34 = -local_34;
          local_38 = local_38 | 1;
        }
        iVar4 = (int)local_res4[2];
        local_res4 = local_res4 + 2;
      }
      else {
        while (local_res4 = pcVar2, iVar4 - 0x30U < 10) {
          local_34 = local_34 * 10 + -0x30 + iVar4;
          pcVar2 = local_res4 + 1;
          iVar4 = (int)local_res4[1];
        }
      }
      if (iVar4 == 0x2e) {
        iVar4 = (int)local_res4[1];
        pcVar2 = local_res4;
        if (iVar4 == 0x2a) {
          local_30 = *local_28;
          local_28 = local_28 + 1;
          iVar4 = (int)local_res4[2];
          local_res4 = local_res4 + 2;
        }
        else {
          while (local_res4 = pcVar2 + 1, iVar4 - 0x30U < 10) {
            local_30 = local_30 * 10 + -0x30 + iVar4;
            iVar4 = (int)pcVar2[2];
            pcVar2 = local_res4;
          }
        }
        if (-1 < (int)local_30) {
          local_38 = local_38 | 0x10;
        }
      }
      pbVar6 = (byte *)&local_38;
      if ((local_38 & 1) != 0) {
        local_38 = local_38 & 0xfffffff7;
      }
      do {
        switch(iVar4) {
        case 0x4c:
          local_38 = local_38 | 0x80;
          break;
        default:
          goto switchD_8009b378_caseD_4d;
        case 99:
          pbVar6 = &local_39;
          uVar5 = 1;
          local_39 = (byte)*local_28;
          local_28 = local_28 + 1;
          goto LAB_8009b860;
        case 100:
        case 0x69:
          uVar3 = *local_28;
          if ((local_38 >> 5 & 1) != 0) {
            uVar3 = (uint)(short)uVar3;
          }
          if ((int)uVar3 < 0) {
            uVar3 = -uVar3;
            local_38._0_2_ = CONCAT11(0x2d,(byte)local_38);
          }
          else if ((local_38 >> 1 & 1) != 0) {
            local_38._0_2_ = CONCAT11(0x2b,(byte)local_38);
          }
          goto LAB_8009b450;
        case 0x68:
          local_38 = local_38 | 0x20;
          break;
        case 0x6c:
          local_38 = local_38 | 0x40;
          break;
        case 0x6e:
          piVar7 = (int *)*local_28;
          local_28 = local_28 + 1;
          if ((local_38 >> 5 & 1) == 0) {
            *piVar7 = iVar8;
          }
          else {
            *(short *)piVar7 = (short)iVar8;
          }
          goto LAB_8009b8ec;
        case 0x6f:
          uVar3 = *local_28;
          local_28 = local_28 + 1;
          if ((local_38 >> 5 & 1) != 0) {
            uVar3 = uVar3 & 0xffff;
          }
          if ((local_38 >> 4 & 1) == 0) {
            if ((local_38 >> 3 & 1) != 0) {
              local_30 = local_34;
            }
            if ((int)local_30 < 1) {
              local_30 = 1;
            }
          }
          uVar5 = 0;
          for (; uVar3 != 0; uVar3 = uVar3 >> 3) {
            pbVar6 = pbVar6 + -1;
            *pbVar6 = ((byte)uVar3 & 7) + 0x30;
            uVar5 = uVar5 + 1;
          }
          if ((((local_38 >> 2 & 1) != 0) && (uVar5 != 0)) && (*pbVar6 != 0x30)) {
            pbVar6 = pbVar6 + -1;
            *pbVar6 = 0x30;
            uVar5 = uVar5 + 1;
          }
          for (; (int)uVar5 < (int)local_30; uVar5 = uVar5 + 1) {
            pbVar6 = pbVar6 + -1;
            *pbVar6 = 0x30;
          }
          goto LAB_8009b860;
        case 0x70:
          local_30 = 8;
          local_38 = local_38 | 0x50;
        case 0x58:
          pcVar2 = s_0123456789ABCDEF_8001c960;
          goto LAB_8009b664;
        case 0x73:
          pbVar6 = (byte *)*local_28;
          local_28 = local_28 + 1;
          if ((local_38 >> 2 & 1) == 0) {
            if ((local_38 >> 4 & 1) == 0) {
              uVar5 = FUN_8009a600(pbVar6);
            }
            else {
              iVar4 = FUN_8009ae10(pbVar6,0,local_30);
              uVar5 = iVar4 - (int)pbVar6;
              if (iVar4 == 0) {
                uVar5 = local_30;
              }
            }
          }
          else {
            uVar5 = (uint)*pbVar6;
            pbVar6 = pbVar6 + 1;
            if (((local_38 >> 4 & 1) != 0) && ((int)local_30 < (int)uVar5)) {
              uVar5 = local_30;
            }
          }
          goto LAB_8009b860;
        case 0x75:
          uVar3 = *local_28;
          if ((local_38 >> 5 & 1) != 0) {
            uVar3 = uVar3 & 0xffff;
          }
          local_38._0_2_ = (ushort)(byte)local_38;
LAB_8009b450:
          local_28 = local_28 + 1;
          if ((local_38 >> 4 & 1) == 0) {
            if (((local_38 >> 3 & 1) != 0) && (local_30 = local_34, local_38._1_1_ != 0)) {
              local_30 = local_34 - 1;
            }
            if ((int)local_30 < 1) {
              local_30 = 1;
            }
          }
          uVar5 = 0;
          while (uVar3 != 0) {
            pbVar6 = pbVar6 + -1;
            uVar5 = uVar5 + 1;
            *pbVar6 = (char)uVar3 + (char)(uVar3 / 10) * -10 + 0x30;
            uVar3 = uVar3 / 10;
          }
          for (; (int)uVar5 < (int)local_30; uVar5 = uVar5 + 1) {
            pbVar6 = pbVar6 + -1;
            *pbVar6 = 0x30;
          }
          if (local_38._1_1_ != 0) {
            pbVar6 = pbVar6 + -1;
            *pbVar6 = local_38._1_1_;
            uVar5 = uVar5 + 1;
          }
          goto LAB_8009b860;
        case 0x78:
          pcVar2 = s_0123456789abcdef_8001c974;
LAB_8009b664:
          uVar3 = *local_28;
          local_28 = local_28 + 1;
          if ((local_38 >> 5 & 1) != 0) {
            uVar3 = uVar3 & 0xffff;
          }
          if ((local_38 >> 4 & 1) == 0) {
            if (((local_38 >> 3 & 1) != 0) && (local_30 = local_34, (local_38 >> 2 & 1) != 0)) {
              local_30 = local_34 - 2;
            }
            if ((int)local_30 < 1) {
              local_30 = 1;
            }
          }
          uVar5 = 0;
          for (; uVar3 != 0; uVar3 = uVar3 >> 4) {
            pbVar6 = pbVar6 + -1;
            uVar5 = uVar5 + 1;
            *pbVar6 = pcVar2[uVar3 & 0xf];
          }
          for (; (int)uVar5 < (int)local_30; uVar5 = uVar5 + 1) {
            pbVar6 = pbVar6 + -1;
            *pbVar6 = 0x30;
          }
          if ((local_38 >> 2 & 1) != 0) {
            pbVar6[-1] = (byte)iVar4;
            pbVar6 = pbVar6 + -2;
            *pbVar6 = 0x30;
            uVar5 = uVar5 + 2;
          }
LAB_8009b860:
          iVar4 = param_1 + iVar8;
          if (((int)uVar5 < (int)local_34) && ((local_38 & 1) == 0)) {
            do {
              *(undefined1 *)(param_1 + iVar8) = 0x20;
              local_34 = local_34 - 1;
              iVar8 = iVar8 + 1;
            } while ((int)uVar5 < (int)local_34);
            iVar4 = param_1 + iVar8;
          }
          FUN_8009b940(iVar4,pbVar6,uVar5);
          iVar8 = iVar8 + uVar5;
          for (; (int)uVar5 < (int)local_34; uVar5 = uVar5 + 1) {
            *(undefined1 *)(param_1 + iVar8) = 0x20;
            iVar8 = iVar8 + 1;
          }
          goto LAB_8009b8ec;
        }
        iVar4 = (int)local_res4[1];
        local_res4 = local_res4 + 1;
      } while( true );
    }
    goto LAB_8009b854;
  }
LAB_8009b90c:
  *(undefined1 *)(param_1 + iVar8) = 0;
  return iVar8;
switchD_8009b378_caseD_4d:
  if (iVar4 != 0x25) goto LAB_8009b90c;
LAB_8009b854:
  *(char *)(param_1 + iVar8) = (char)iVar4;
  iVar8 = iVar8 + 1;
LAB_8009b8ec:
  cVar1 = local_res4[1];
  local_res4 = local_res4 + 1;
  goto joined_r0x8009b108;
}

