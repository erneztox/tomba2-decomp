// FUN_800329e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800329e0(undefined4 param_1)

{
  setCopControlWord(2,0,_DAT_1f8000f8);
  setCopControlWord(2,0x800,_DAT_1f8000fc);
  setCopControlWord(2,0x1000,_DAT_1f800100);
  setCopControlWord(2,0x1800,_DAT_1f800104);
  setCopControlWord(2,0x2000,_DAT_1f800108);
  setCopControlWord(2,0x2800,_DAT_1f80010c);
  setCopControlWord(2,0x3000,_DAT_1f800110);
  setCopControlWord(2,0x3800,_DAT_1f800114);
  setCopControlWord(2,0xd800,param_1);
  setCopControlWord(2,0xe000,0);
  return;
}

