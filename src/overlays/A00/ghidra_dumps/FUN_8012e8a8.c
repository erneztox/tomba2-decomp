// FUN_8012e8a8

/* WARNING: Control flow encountered bad instruction data */

uint FUN_8012e8a8(int param_1,undefined4 param_2,int param_3)

{
  short in_v0;
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  *(short *)(unaff_s1 + 0x42) = in_v0 + -1;
  iVar4 = *(int *)(unaff_s0 + 0xc0);
  *(undefined2 *)(iVar4 + 10) = *(undefined2 *)(unaff_s1 + 100);
  sVar1 = func_0x800781e0(param_3 - param_1,
                          (int)*(short *)(unaff_s2 + 0x36) - (int)*(short *)(iVar4 + 0x164));
  if (((((int)*(short *)(unaff_s3 + 0x17e) & 0x8200U) != 0) || (0x640 < sVar1)) || (0x44c < sVar1))
  {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = 2;
  if (600 < sVar1) {
    uVar2 = 1;
  }
  if (uVar2 != 1) {
    if (1 < uVar2) {
      if (uVar2 == 2) {
        return (uint)*(byte *)(unaff_s1 + -0x7feb410c);
      }
      uVar3 = FUN_80140ad8();
      return uVar3;
    }
    if (uVar2 == 0) {
      uVar3 = FUN_80140ac8();
      return uVar3;
    }
    uVar3 = FUN_80140ad8();
    return uVar3;
  }
  uVar3 = FUN_80140ac8();
  return uVar3;
}

