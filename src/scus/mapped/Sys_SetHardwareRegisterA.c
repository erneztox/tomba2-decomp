/**
 * @brief Sets hardware register 1F801DAA and calls init
 * @note Original: func_80012E74 at 0x80012E74
 */
// Sys_SetHardwareRegisterA



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Sys_SetHardwareRegisterA(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_e0 [24];
  undefined1 local_c8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [64];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  short local_18;
  short local_16;
  ushort local_14;
  undefined2 local_12;
  
  Sys_SetHardwareRegisterA(1);
  Sys_SetHardwareRegisterA();
  Sys_SetHardwareRegisterA(5);
  _DAT_1f801daa = 0;
  Sys_SetHardwareRegisterA(auStack_e0,0,0,0x140,0xf0);
  Sys_SetHardwareRegisterA(auStack_80,0,0,0x140,0xf0);
  local_c8 = 1;
  Sys_SetHardwareRegisterA(auStack_68,auStack_e0);
  Sys_SetHardwareRegisterA(auStack_68);
  Sys_SetHardwareRegisterA(auStack_80);
  local_28 = 0x2000000;
  local_24 = 0xe6000002;
  local_20 = 0;
  Sys_SetHardwareRegisterA(&local_28);
  uVar2 = 0xffff;
  iVar3 = 0;
  local_12 = 1;
  local_14 = (ushort)(byte)(&DAT_8002545e)[DAT_800384a4 * 0xc];
  do {
    iVar1 = DAT_800384a4 * 0xc;
    local_18 = *(short *)(&DAT_80025460 + iVar1) + (short)iVar3;
    local_16 = *(short *)(&DAT_80025462 + iVar1) + (short)iVar3;
    iVar3 = iVar3 + 1;
    Sys_SetHardwareRegisterA(*(undefined4 *)(&DAT_80025464 + iVar1),&local_18,uVar2);
    uVar2 = 0x8000;
  } while (iVar3 < 2);
  Sys_SetHardwareRegisterA();
  Sys_SetHardwareRegisterA(1);
  Sys_SetHardwareRegisterA();
  return;
}
