// CRD_HandManager (CRD_HandManager) - Hand/card management

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_HandManager(int param_1)

{
  u8 bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  u8 *pbVar5;
  u8 *pbVar6;
  u8 bVar7;
  u8 auStack_38 [32];
  
  iVar3 = BIOS_Syscall_B0_80080840(_DAT_800bf4b4);
  cVar2 = '\x01';
  if (iVar3 != 1) {
    iVar3 = BIOS_Syscall_B0_80080840(_DAT_800bf4b8);
    cVar2 = '\x02';
    if (iVar3 != 1) {
      iVar3 = BIOS_Syscall_B0_80080840(_DAT_800bf4bc);
      cVar2 = '\x03';
      if (iVar3 != 1) {
        iVar3 = BIOS_Syscall_B0_80080840(_DAT_800bf4c0);
        cVar2 = '\0';
        if (iVar3 == 1) {
          cVar2 = '\x04';
        }
      }
    }
  }
  *(char *)(param_1 + 0x3e) = cVar2;
  if (cVar2 == '\0') {
    return;
  }
  iVar3 = *(int *)(param_1 + 8);
  func_0x000808f0(*(s32 *)(param_1 + 4));
  if ((*(char *)(param_1 + 0x3e) == '\x01') &&
     (pbVar5 = *(u8 **)(param_1 + 0x14), pbVar5[0x5fe] == 3)) {
    bVar7 = 0;
    iVar4 = 0x5fe;
    pbVar6 = pbVar5;
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      iVar4 = iVar4 + -1;
      bVar7 = bVar7 ^ bVar1;
    } while (-1 < iVar4);
    if (pbVar5[0x5ff] == bVar7) {
      *(u8 *)(param_1 + 0x3f) = 0;
      *(u8 *)(param_1 + 0x40) = 0;
      return;
    }
  }
  cVar2 = -1;
  if (param_1->anim_id != -1) {
    cVar2 = param_1->anim_id << 4;
  }
  if (cVar2 != -1) {
    if ((*(u8 *)(param_1 + 0x5b) & 0xf) == *(u8 *)(param_1 + 0x3e)) {
      *(u8 *)(param_1 + 0x5b) = *(u8 *)(param_1 + 0x5b) + 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(u8 *)(param_1 + 0x5b) = *(u8 *)(param_1 + 0x3e);
    if (*(char *)(param_1 + 0x3e) == '\x04') {
      BIOS_Syscall_B0_80080840(_DAT_800bf4c4);
      BIOS_Syscall_B0_80080840(_DAT_800bf4c8);
      BIOS_Syscall_B0_80080840(_DAT_800bf4cc);
      BIOS_Syscall_B0_80080840(_DAT_800bf4d0);
      func_0x0009bab0(cVar2);
      do {
        iVar4 = BIOS_Syscall_B0_80080840(_DAT_800bf4c4);
        if (((iVar4 == 1) || (iVar4 = BIOS_Syscall_B0_80080840(_DAT_800bf4c8), iVar4 == 1)) ||
           (iVar4 = BIOS_Syscall_B0_80080840(_DAT_800bf4cc), iVar4 == 1)) break;
        iVar4 = BIOS_Syscall_B0_80080840(_DAT_800bf4d0);
      } while (iVar4 != 1);
      *(u8 *)(param_1 + 0x5b) = *(u8 *)(param_1 + 0x5b) & 0xf;
    }
    if (cVar2 != -1) {
      if ((*(u8 *)(param_1 + 0x5b) & 0xf0) < 0x20) {
        *(u8 *)(param_1 + 0x3e) = 0;
        *(u8 *)(param_1 + 0x51) = 0;
        param_1->kind = 0;
        *(u8 *)(param_1 + 0x3f) = 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      CD_EventMain(auStack_38,0x8018a090,cVar2,0x8018a0a0,
                      *(u8 *)(iVar3 + (uint)param_1->sub_anim_id * 0x3c + 4));
      func_0x00080910(auStack_38);
    }
  }
  *(u8 *)(param_1 + 0x3e) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

