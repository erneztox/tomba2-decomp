
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007486c(uint param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_1 & 0xff) * 8;
  uVar2 = (int)(char)(&DAT_800a4d1e)[iVar1] + (int)param_3 + (9 - (uint)DAT_800fb165) * -0x10;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x7f < (int)uVar2) {
    uVar2 = 0x7f;
  }
  DAT_800be32a = (&DAT_800a4d1a)[iVar1];
  DAT_800be32b = (&DAT_800a4d1b)[iVar1];
  DAT_800be32c = (&DAT_800a4d1c)[iVar1];
  DAT_800be32e = (undefined1)uVar2;
  DAT_800be328 = 0xfe;
  DAT_800be32d = 0;
  DAT_800be329 = 0xff;
  DAT_800be32f = DAT_800be32e;
  FUN_80092660(0x14,(int)_DAT_800bed84,DAT_800be32a,DAT_800be32b,DAT_800be32c,0,uVar2 & 0xff,
               uVar2 & 0xff);
  DAT_800be358 = DAT_800be358 & 0xffefffff;
  return;
}

