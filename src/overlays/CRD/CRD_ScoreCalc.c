// CRD_ScoreCalc (CRD_ScoreCalc) - Score calculation

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_ScoreCalc(u8 *param_1)

{
  u8 bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = param_1->kind;
  uVar3 = (uint)(u8)param_1->anim_id << 4;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x0009ba90(uVar3 & 0xf0);
      param_1[0x43] = 0;
      param_1[(u8)param_1->anim_id + 0x4c] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 2) {
      BIOS_Syscall_B0_80080840(_DAT_800bf4b4);
      BIOS_Syscall_B0_80080840(_DAT_800bf4b8);
      BIOS_Syscall_B0_80080840(_DAT_800bf4bc);
      BIOS_Syscall_B0_80080840(_DAT_800bf4c0);
      func_0x0009baa0(uVar3 & 0xf0);
      param_1[0x43] = 0;
      param_1->kind = param_1->kind + '\x01';
      halt_baddata();
    }
    if (bVar1 != 3) {
      halt_baddata();
    }
    iVar2 = BIOS_Syscall_B0_80080840(_DAT_800bf4b4);
    bVar1 = 1;
    if (iVar2 != 1) {
      iVar2 = BIOS_Syscall_B0_80080840(_DAT_800bf4b8);
      bVar1 = 2;
      if (iVar2 != 1) {
        iVar2 = BIOS_Syscall_B0_80080840(_DAT_800bf4bc);
        bVar1 = 3;
        if (iVar2 != 1) {
          iVar2 = BIOS_Syscall_B0_80080840(_DAT_800bf4c0);
          bVar1 = 4;
          if (iVar2 != 1) {
            DAT_800bf4db = DAT_800bf4db + '\x01';
            bVar1 = 0;
            if (DAT_800bf4db == -1) {
              bVar1 = 2;
            }
          }
        }
      }
    }
    param_1[0x3e] = bVar1;
    if (bVar1 == 0) {
      return;
    }
    if (bVar1 == 3) {
      param_1[(u8)param_1->anim_id + 0x4a] = 0xfc;
    }
    else {
      if (bVar1 < 4) {
        if (bVar1 != 2) {
          param_1[0x3f] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (_DAT_800bf4b0 != 0x35) {
          String_Copy(_DAT_800bf4a4,_DAT_800a2928);
          _DAT_800bf4b0 = 0x35;
        }
        if (_DAT_800bf4b2 != -1) {
          *_DAT_800bf4a8 = 0;
          _DAT_800bf4b2 = -1;
        }
        param_1[0x50] = 0x1e;
        param_1[0x44] = 0;
        param_1[0x4b] = 0xfc;
        param_1[0x4a] = 0xfc;
        param_1[(u8)param_1->anim_id + 0x48] = 0;
        param_1[(u8)param_1->anim_id + 0x4e] = 0xff;
        param_1->anim_id = 0xff;
        param_1->sub_anim_id = 0;
        param_1[0x52] = 0;
        param_1->rot_x = 0;
        param_1->rot_y = 0;
        param_1->sub_type = 0;
        param_1->kind = 0;
        param_1->flags = 0;
        *param_1 = 0xf;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((bVar1 == 4) && (param_1[(u8)param_1->anim_id + 0x4c] == '\0')) {
        param_1[0x3e] = 0;
        func_0x0009ba90(uVar3 & 0xf0);
        param_1[0x43] = 0;
        param_1[(u8)param_1->anim_id + 0x4c] = param_1[(u8)param_1->anim_id + 0x4c] + '\x01';
        param_1->kind = 1;
        halt_baddata();
      }
    }
LAB_00002490:
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    return;
  }
  iVar2 = BIOS_Syscall_B0_80080840(_DAT_800bf4b4);
  bVar1 = 1;
  if (iVar2 != 1) {
    iVar2 = BIOS_Syscall_B0_80080840(_DAT_800bf4b8);
    bVar1 = 2;
    if (iVar2 != 1) {
      iVar2 = BIOS_Syscall_B0_80080840(_DAT_800bf4bc);
      bVar1 = 3;
      if (iVar2 != 1) {
        iVar2 = BIOS_Syscall_B0_80080840(_DAT_800bf4c0);
        bVar1 = 4;
        if (iVar2 != 1) {
          DAT_800bf4db = DAT_800bf4db + '\x01';
          bVar1 = 0;
          if (DAT_800bf4db == -1) {
            bVar1 = 2;
          }
        }
      }
    }
  }
  param_1[0x3e] = bVar1;
  if (bVar1 == 0) {
    return;
  }
  if (bVar1 == 2) {
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    if (_DAT_800bf4b0 != 0x35) {
      String_Copy(_DAT_800bf4a4,_DAT_800a2928);
      _DAT_800bf4b0 = 0x35;
    }
    if (_DAT_800bf4b2 != -1) {
      *_DAT_800bf4a8 = 0;
      _DAT_800bf4b2 = -1;
    }
    param_1[0x50] = 0x1e;
    param_1[0x44] = 0;
    param_1[0x4b] = 0xfc;
    param_1[0x4a] = 0xfc;
    param_1[(u8)param_1->anim_id + 0x48] = 0;
    param_1[(u8)param_1->anim_id + 0x4e] = 0xff;
    param_1->anim_id = 0xff;
    param_1->sub_anim_id = 0;
    param_1[0x52] = 0;
    param_1->rot_x = 0;
    param_1->rot_y = 0;
    param_1->sub_type = 0;
    param_1->kind = 0;
    param_1->flags = 0;
    *param_1 = 0xf;
    halt_baddata();
  }
  if (bVar1 < 3) {
    if (bVar1 != 1) {
      halt_baddata();
    }
    if (param_1[(u8)param_1->anim_id + 0x4e] != -1) goto LAB_00002490;
  }
  else if (bVar1 != 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  BIOS_Syscall_B0_80080840(_DAT_800bf4c4);
  BIOS_Syscall_B0_80080840(_DAT_800bf4c8);
  BIOS_Syscall_B0_80080840(_DAT_800bf4cc);
  BIOS_Syscall_B0_80080840(_DAT_800bf4d0);
  func_0x0009bab0(uVar3 & 0xf0);
  do {
    iVar2 = BIOS_Syscall_B0_80080840(_DAT_800bf4c4);
    if (((iVar2 == 1) || (iVar2 = BIOS_Syscall_B0_80080840(_DAT_800bf4c8), iVar2 == 1)) ||
       (iVar2 = BIOS_Syscall_B0_80080840(_DAT_800bf4cc), iVar2 == 1)) break;
    iVar2 = BIOS_Syscall_B0_80080840(_DAT_800bf4d0);
  } while (iVar2 != 1);
  if (param_1[0x3e] != '\x01') {
    param_1[(u8)param_1->anim_id + 0x48] = 0;
  }
  param_1[(u8)param_1->anim_id + 0x4e] = 0xff;
  param_1[0x3e] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

