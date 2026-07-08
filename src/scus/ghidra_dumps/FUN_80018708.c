
void FUN_80018708(void)

{
  int in_v0;
  uint uVar1;
  
  uVar1 = **(uint **)(in_v0 + 0x567c);
  FUN_80017fc4(DAT_800267b4 + 1,1);
  if (((uVar1 & 0x400000) != 0) && (-1 < (int)(uVar1 ^ *DAT_8002567c))) {
    do {
    } while (((uVar1 ^ *DAT_8002567c) & 0x80000000) == 0);
  }
  DAT_80025688 = DAT_800267b4;
  do {
    DAT_80025684 = *DAT_80025680;
  } while (*DAT_80025680 != *DAT_80025680);
  return;
}

