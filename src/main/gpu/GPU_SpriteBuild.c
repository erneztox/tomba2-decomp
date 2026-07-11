/**
 * @brief GPU sprite builder: constructs sprite prim from data
 * @note Original: func_8007C940 at 0x8007C940
 */
// GPU_SpriteBuild



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_8007c940(int param_1)

{
  short *psVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  short *psVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  short local_28->state;
  
  FUN_8007d208();
  bVar8 = 0;
  pbVar6 = *(byte **)(param_1 + 0x10);
  local_28->type = param_1->rot_x;
  psVar5 = (short *)&DAT_800ecb88;
  bVar7 = *(byte *)(param_1 + 0x56);
  _DAT_1f80017e = 0;
  if (pbVar6 != *(byte **)(param_1 + 0x14)) {
    do {
      bVar3 = *pbVar6 + 0x10;
      if (bVar3 < 8) goto switchD_8007c9ec_caseD_f8;
      bVar3 = bVar8;
      switch(*pbVar6) {
      case 0xc0:
      case 0xc1:
      case 0xc2:
        psVar1 = (short *)FUN_8007c3cc(psVar5,local_28,bVar7,*pbVar6 - 0xc0);
        break;
      case 0xc3:
        psVar1 = (short *)FUN_8007c5e4(psVar5,local_28,bVar7 + 2);
        break;
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
      case 200:
        psVar1 = (short *)FUN_8007c780(psVar5,local_28,bVar7 + 2,*pbVar6 - 0xc4);
        break;
      case 0xc9:
        psVar1 = (short *)FUN_8007c620(psVar5,local_28,bVar7 + 2);
        break;
      case 0xca:
      case 0xcb:
        psVar1 = (short *)FUN_8007c688(psVar5,local_28,bVar7 + 2,*pbVar6 - 0xca);
        break;
      case 0xcc:
        psVar1 = (short *)FUN_8007c654(psVar5,local_28,bVar7 + 2);
        break;
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd0:
        psVar1 = (short *)FUN_8007c8c8(psVar5,*pbVar6 + 0x33,local_28,bVar7);
        break;
      default:
        psVar5->flags = bVar7;
        *psVar5 = local_28->type;
        if (*pbVar6 - 0x60 < 0x21) {
          *(undefined1 *)((int)psVar5 + 3) = 0x80;
          iVar4 = *pbVar6 - 0x60;
          iVar2 = iVar4;
          if (iVar4 < 0) {
            iVar2 = *pbVar6 - 0x51;
          }
          psVar5->kind = ((short)iVar4 + (short)(iVar2 >> 4) * -0x10) * 0x10;
          iVar2 = *pbVar6 - 0x60;
          if (iVar2 < 0) {
            iVar2 = *pbVar6 - 0x51;
          }
          psVar5->sub_type = (short)(iVar2 >> 4) * 0x10 + 0x78;
          local_28->type = local_28->type + 0x10;
        }
        else {
          *(byte *)((int)psVar5 + 3) = bVar8;
          psVar5->kind = (*pbVar6 & 0x1f) << 3;
          local_28->type = local_28->type + 8;
          psVar5->sub_type = (ushort)(*pbVar6 >> 5) * 0x10 + 0x28;
        }
        _DAT_1f80017e = _DAT_1f80017e + 1;
        psVar5 = psVar5 + 4;
      case 0xf8:
      case 0xf9:
      case 0xfc:
        goto switchD_8007c9ec_caseD_f8;
      case 0xfa:
        local_28->type = param_1->rot_x;
        bVar7 = bVar7 + 0x10;
        goto switchD_8007c9ec_caseD_f8;
      case 0xfb:
        local_28->type = local_28->type + 8;
        goto switchD_8007c9ec_caseD_f8;
      }
      _DAT_1f80017e = _DAT_1f80017e + (short)((int)psVar1 - (int)psVar5 >> 3);
      psVar5 = psVar1;
switchD_8007c9ec_caseD_f8:
      pbVar6 = pbVar6 + 1;
      bVar8 = bVar3;
    } while (pbVar6 != *(byte **)(param_1 + 0x14));
  }
  return pbVar6;
}
