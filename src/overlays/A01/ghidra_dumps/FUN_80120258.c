// FUN_80120258

/* WARNING: Removing unreachable block (ram,0x8012038c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80120258(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ushort *in_t0;
  int in_t1;
  int unaff_s0;
  uint unaff_s2;
  uint uVar4;
  ushort *unaff_s3;
  
  bVar1 = *(byte *)(param_1 + 0x47);
  if (bVar1 == 2) {
    unaff_s2 = *(uint *)(param_1 + 0x3c);
    uVar4 = unaff_s2;
    if (*(char *)(param_1 + 3) == '\x02') {
      unaff_s0 = param_1 + 0x98;
      *(short *)(param_1 + 0x56) = *(short *)(unaff_s2 + 0x56) + _DAT_1f8000f2;
      func_0x80051794(unaff_s0);
      func_0x80084d10((int)*(short *)(param_1 + 0x54),unaff_s0);
      func_0x80084eb0((int)*(short *)(param_1 + 0x56),unaff_s0);
      func_0x80085050((int)*(short *)(param_1 + 0x58),unaff_s0);
      goto LAB_8012932c;
    }
    if ((byte)(*(char *)(param_1 + 3) - 7U) < 2) {
      func_0x80085480(param_1 + 0x54,param_1 + 0x98);
      goto LAB_8012932c;
    }
    *(short *)(param_1 + 0x54) = -_DAT_1f8000f0;
    func_0x80085480(param_1 + 0x54,param_1 + 0x98);
    goto LAB_8012932c;
  }
  uVar2 = 3;
  if (bVar1 < 3) {
    unaff_s2 = *(uint *)(param_1 + 0x10);
    *(short *)(param_1 + 0x56) = -_DAT_1f8000f2 - *(short *)(unaff_s2 + 0x56);
    func_0x80085480(param_1 + 0x54,param_1 + 0x98);
    uVar4 = unaff_s2;
    goto LAB_8012932c;
  }
  uVar4 = unaff_s2;
  if (bVar1 != 3) {
    do {
      *in_t0 = (ushort)unaff_s2 | param_4 | uVar2 | (ushort)(unaff_s2 << 5);
      in_t1 = in_t1 + 1;
      in_t0 = in_t0 + 1;
      if (0xf < in_t1) {
        func_0x80081218(&stack0xfffffff0,&stack0xfffffff8);
        func_0x80080f6c(0);
        iVar3 = (int)*(short *)(uVar4 + 6);
LAB_8012937c:
        unaff_s0 = unaff_s0 + 1;
        if (iVar3 <= unaff_s0) {
          do {
            param_1 = param_1 + 0x10;
            if (*(short *)(uVar4 + 4) <= param_1) {
              return;
            }
            unaff_s0 = 0;
          } while (*(short *)(uVar4 + 6) < 1);
        }
        func_0x80081278(&stack0xfffffff0,&stack0xfffffff8);
        func_0x80080f6c(0);
        in_t1 = 0;
        in_t0 = unaff_s3;
      }
      param_4 = *in_t0;
      unaff_s2 = (param_4 & 0x1f) * 0x4d + (param_4 >> 5 & 0x1f) * 0x96 +
                 (param_4 >> 10 & 0x1f) * 0x1d >> 8;
      param_4 = param_4 & 0x8000;
      if (0x1f < unaff_s2) {
        unaff_s2 = 0x1f;
      }
LAB_8012932c:
      uVar2 = (ushort)(unaff_s2 << 10);
    } while( true );
  }
  *(short *)(param_1 + 0x56) = -_DAT_1f8000f2;
  iVar3 = func_0x800517f8();
  goto LAB_8012937c;
}

