
void FUN_80052010(int param_1)

{
  param_1 = param_1 * 0x70;
  if (*(short *)(&DAT_801fe000 + param_1) != 0) {
    *(short *)(&DAT_801fe000 + param_1) = 0;
    (&DAT_801fe06c)[param_1] = 0;
    (&DAT_801fe06f)[param_1] = 0;
    FUN_80080890();
    FUN_80080870(*(undefined4 *)(&DAT_801fe004 + param_1));
    FUN_800808a0();
  }
  return;
}

