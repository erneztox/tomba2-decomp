// FUN_80129464

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80129464(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  uVar3 = (uint)(bVar1 < 2);
  if (bVar1 == 1) {
    if ((DAT_800bf89c == '\x02') || (uVar3 = 1, DAT_800e7eaa != '\x01')) {
      iVar4 = func_0x8007778c(param_1);
      uVar3 = 0;
      if (iVar4 != 0) {
        FUN_80132020(param_1);
        uVar3 = func_0x800517f8(param_1);
      }
    }
    param_1[0x2b] = 0;
  }
  else {
    if (uVar3 == 0) {
      uVar3 = 3;
      if (bVar1 != 2) {
        if (bVar1 != 3) goto code_r0x80132538;
        func_0x8007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar4 = func_0x80051b70(param_1,0xc,0x25);
      if (iVar4 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x1e;
      *(undefined2 *)(param_1 + 0x82) = 0x3c;
      *(undefined2 *)(param_1 + 0x84) = 0x32;
      *(undefined2 *)(param_1 + 0x86) = 100;
      *(undefined2 *)(param_1 + 0x60) = 0xf6d2;
      *(undefined2 *)(param_1 + 0x62) = 0xf9a2;
      *(undefined2 *)(param_1 + 0x50) = 0x780;
      *param_1 = 1;
      param_1[0x29] = 0;
      param_1[0x5e] = 0;
      param_1[4] = param_1[4] + '\x01';
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x80;
      param_1[3] = 0;
      uVar3 = FUN_8013a730(param_1);
      *(uint *)(param_1 + 0x10) = uVar3;
    }
  }
code_r0x80132538:
  _DAT_00000041 = (undefined2)(uVar3 - 1);
  if ((uVar3 - 1 & 0xffff) == 0) {
    uRam00000001 = 2;
    DAT_00000007 = DAT_00000007 + '\x01';
  }
  FUN_8013b024(1,0x1f);
  uVar2 = func_0x800518fc(1);
  DAT_0000002a = 0;
  DAT_0000002c = 0;
  *(undefined2 *)(param_1 + 6) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

