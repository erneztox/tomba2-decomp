// FUN_800754f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_800754f4(int param_1)

{
  FUN_800753ac(param_1,0,0x51800);
  FUN_800753d4(&DAT_800bed84,param_1 + *(int *)(param_1 + 0x51028),
               param_1 + *(int *)(param_1 + 0x51030));
  FUN_800753d4(&DAT_800bed82,param_1 + *(int *)(param_1 + 0x5102c),
               param_1 + *(int *)(param_1 + 0x51034));
  FUN_80075448(0,param_1 + *(int *)(param_1 + 0x5100c),0xe,(int)_DAT_800bed82);
  FUN_80075448(1,param_1 + *(int *)(param_1 + 0x51008),0xe,(int)_DAT_800bed82);
  FUN_80075448(2,param_1 + *(int *)(param_1 + 0x51004),0xe,(int)_DAT_800bed82);
  FUN_80075448(3,param_1 + *(int *)(param_1 + 0x51000),0xe,(int)_DAT_800bed82);
  FUN_80075448(4,param_1 + *(int *)(param_1 + 0x51010),8,(int)_DAT_800bed82);
  FUN_80075448(5,param_1 + *(int *)(param_1 + 0x51014),8,(int)_DAT_800bed82);
  FUN_80075448(6,param_1 + *(int *)(param_1 + 0x51018),8,(int)_DAT_800bed82);
  FUN_80075448(7,param_1 + *(int *)(param_1 + 0x5101c),0xe,(int)_DAT_800bed82);
  FUN_80075448(8,param_1 + *(int *)(param_1 + 0x51020),0xe,(int)_DAT_800bed82);
  FUN_80075448(9,param_1 + *(int *)(param_1 + 0x51024),0xe,(int)_DAT_800bed82);
  return param_1 + 0x66f4;
}

