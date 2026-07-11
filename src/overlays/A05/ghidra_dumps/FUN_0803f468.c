// FUN_0803f468

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803f468(int param_1)

{
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = *(undefined4 *)(param_1 + 0x5c);
  DAT_8013fe6f = (char)*(undefined2 *)(param_1 + 0x60);
  DAT_8013fe67 = DAT_8013fe6f + -8;
  DAT_8013feb7 = (char)*(short *)(param_1 + 0x62);
  DAT_8013feb3 = DAT_8013feb7 + -8;
  DAT_8013feaf = (char)*(undefined2 *)(param_1 + 100);
  DAT_8013feab = DAT_8013feaf + -8;
  DAT_8013fe87 = (char)*(undefined2 *)(param_1 + 0x66);
  DAT_8013fe8b = DAT_8013fe87 + -8;
  DAT_8013fecf = DAT_8013feb3;
  DAT_8013fed3 = DAT_8013feb7;
  DAT_8013fed7 = DAT_8013fe67;
  DAT_8013fedb = DAT_8013fe6f;
  DAT_8013fef3 = DAT_8013fe87;
  DAT_8013fef7 = DAT_8013feaf;
  DAT_8013fefb = DAT_8013fe8b;
  DAT_8013feff = DAT_8013feab;
  func_0x000318a0(param_1 + 0x2c,param_1 + 0x50,param_1 + 0x48,(int)*(short *)(param_1 + 0x62),
                  _DAT_8010a1ac);
  func_0x00027768(0x8013fe54,0,0xffffffec,*(undefined1 *)(param_1 + 0x29));
  return;
}

