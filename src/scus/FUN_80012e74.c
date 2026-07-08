
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80012e74(void)

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
  
  FUN_80012ecc(1);
  FUN_80018160();
  FUN_80012ecc(5);
  _DAT_1f801daa = 0;
  FUN_8001768c(auStack_e0,0,0,0x140,0xf0);
  FUN_8001774c(auStack_80,0,0,0x140,0xf0);
  local_c8 = 1;
  FUN_80014094(auStack_68,auStack_e0);
  FUN_800137e0(auStack_68);
  FUN_80013a78(auStack_80);
  local_28 = 0x2000000;
  local_24 = 0xe6000002;
  local_20 = 0;
  FUN_800137e0(&local_28);
  uVar2 = 0xffff;
  iVar3 = 0;
  local_12 = 1;
  local_14 = (ushort)(byte)(&DAT_8002545e)[DAT_800384a4 * 0xc];
  do {
    iVar1 = DAT_800384a4 * 0xc;
    local_18 = *(short *)(&DAT_80025460 + iVar1) + (short)iVar3;
    local_16 = *(short *)(&DAT_80025462 + iVar1) + (short)iVar3;
    iVar3 = iVar3 + 1;
    FUN_800127e0(*(undefined4 *)(&DAT_80025464 + iVar1),&local_18,uVar2);
    uVar2 = 0x8000;
  } while (iVar3 < 2);
  FUN_80012b9c();
  FUN_800131b0(1);
  FUN_8001f0dc();
  return;
}

