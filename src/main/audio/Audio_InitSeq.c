/**
 * @brief Audio sequence initializer: inits SEQ engine, 0x3E6 loops
 * @note Original: func_80090750 at 0x80090750
 */
// Audio_InitSeq



/* WARNING: Removing unreachable block (ram,0x80090868) */
/* WARNING: Removing unreachable block (ram,0x800908b4) */

void Audio_InitSeq(int param_1)

{
  s32 bVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  s32 uVar5;
  
  iVar2 = 0x3e6;
  do {
    bVar1 = -1 < iVar2;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  uVar5 = 0xf2000002;
  uVar4 = 0x44e8;
  cRam800ac436 = '\x06';
  cRam800ac434 = '\0';
  cRam800ac435 = '\0';
  DAT_800ac430 = 0;
  if (DAT_800ac424 == 2) goto LAB_800908c0;
  if (DAT_800ac424 < 3) {
    if (DAT_800ac424 == 0) {
      DAT_800ac430 = 0;
      cRam800ac434 = 0;
      cRam800ac435 = 0;
      cRam800ac436 = 0x7f;
      return;
    }
  }
  else {
    if (DAT_800ac424 == 3) {
      uVar4 = 0x89d0;
      goto LAB_800908c0;
    }
    if (DAT_800ac424 == 5) {
      cRam800ac436 = '\0';
      if (param_1 == 0) {
        cRam800ac434 = '\x01';
      }
      else {
        uVar5 = 0xf2000003;
        uVar4 = 1;
      }
      goto LAB_800908c0;
    }
  }
  if (DAT_800ac428 != 0) {
    DAT_800ac430 = 0;
    cRam800ac434 = 0;
    cRam800ac435 = 0;
    cRam800ac436 = 6;
    return;
  }
  if (DAT_800ac424 < 0x46) {
    uVar4 = 0x204cc0 / DAT_800ac424;
    if (DAT_800ac424 == 0) {
      trap(0x1c00);
    }
    cRam800ac435 = '\x01';
  }
  else {
    uVar4 = 0x409980 / DAT_800ac424;
    if (DAT_800ac424 == 0) {
      trap(0x1c00);
    }
  }
LAB_800908c0:
  if (cRam800ac434 == '\0') {
    BIOS_Syscall0();
    Audio_ClearSlot(uVar5);
    Audio_ChannelConfig(uVar5,uVar4 & 0xffff,0x1000);
    iVar2 = (int)cRam800ac436;
    if (iVar2 == 0) {
      DAT_800ac430 = CD_Dispatch08(0,0);
      iVar2 = (int)cRam800ac436;
      pcVar3 = Audio_CallCallbacks;
    }
    else {
      pcVar3 = Audio_Toggle;
      if (cRam800ac435 == '\0') {
        pcVar3 = (code *)PTR_FUN_800ac42c;
      }
    }
    CD_Dispatch08(iVar2,pcVar3);
  }
  else {
    BIOS_Syscall0();
    CD_Dispatch14(PTR_FUN_800ac42c);
  }
  BIOS_Syscall0_2();
  return;
}
