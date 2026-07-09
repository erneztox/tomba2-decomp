// FUN_8013bcb4

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013bcb4(void)

{
  uint uVar1;
  short sVar2;
  int in_v0;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  undefined1 *unaff_s0;
  short *unaff_s1;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  if (((in_v0 == 0) || (DAT_800bf89c == '\x02')) && (DAT_800bf809 == '\0')) {
    bVar4 = unaff_s0[6];
    if (bVar4 == 1) {
      sVar2 = FUN_80140af4();
      if (unaff_s0[5] == '\x04') {
        if (sVar2 != 0) {
          *(undefined2 *)(unaff_s0 + 6) = 2;
          *(undefined2 *)(unaff_s0 + 0x42) = 0x5a;
          FUN_80144d6c();
          return;
        }
      }
      else {
        func_0x80076d68();
        if (sVar2 != 0) {
          *(undefined2 *)(unaff_s0 + 6) = 3;
        }
      }
      bVar4 = DAT_8014bf5e - 1;
      uVar1 = (uint)DAT_8014bf5e;
      DAT_8014bf5e = bVar4;
      if ((int)(uVar1 << 0x18) < 0) {
        uVar5 = *(ushort *)(unaff_s0 + 0x68) >> 8 & 0xf;
        if ((uVar5 == 1) || ((uVar5 == 2 && (0x500 < *(short *)(unaff_s0 + 0x4e))))) {
          in_stack_00000010._2_2_ = *(undefined2 *)(unaff_s0 + 0x2e);
          in_stack_00000014._2_2_ = *(undefined2 *)(unaff_s0 + 0x6a);
          in_stack_00000018._2_2_ = *(undefined2 *)(unaff_s0 + 0x36);
          func_0x8003116c(8,&stack0x00000010,0xffffffb0);
          DAT_8014bf5e = 10;
        }
        *(undefined2 *)(unaff_s0 + 0x68) = 0;
        FUN_80144ecc();
        return;
      }
    }
    else {
      if (bVar4 < 2) {
        if (bVar4 != 0) {
          FUN_80144ecc();
          return;
        }
        if (0x800 < ((((ushort)(byte)unaff_s0[0x2b] * 0x10 - 0x800 & 0xfff) - *unaff_s1) + 0x400 &
                    0xfff)) {
          FUN_80144d04();
          return;
        }
        unaff_s1[1] = unaff_s1[1] | 1;
        func_0x80074590(0x88,0,0);
        return;
      }
      if (bVar4 == 2) {
        *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
        FUN_801406e4();
        uVar5 = *(ushort *)(unaff_s0 + 0x42);
        *(ushort *)(unaff_s0 + 0x42) = uVar5 - 1;
        if ((int)((uint)uVar5 << 0x10) < 1) {
          *(undefined2 *)(unaff_s0 + 6) = 3;
          FUN_80144ecc();
          return;
        }
      }
      else {
        if (bVar4 != 3) {
          FUN_80144ecc();
          return;
        }
        if ((unaff_s0[0xd] & 2) != 0) {
          unaff_s0[0x18] = unaff_s0[0x18] + (char)((int)(0x80 - (uint)(byte)unaff_s0[0x18]) >> 3);
          unaff_s0[0x19] = unaff_s0[0x19] + (char)((int)(0x80 - (uint)(byte)unaff_s0[0x19]) >> 3);
          unaff_s0[0x1a] = unaff_s0[0x1a] + (char)((int)(0x80 - (uint)(byte)unaff_s0[0x1a]) >> 3);
        }
        sVar2 = FUN_8014243c();
        func_0x80076d68();
        if (sVar2 != 0) {
          *unaff_s0 = 1;
          unaff_s0[0xd] = unaff_s0[0xd] & 0xfd;
          unaff_s0[0x1b] = unaff_s0[0x1b] & 0xbf;
          unaff_s0[0x2b] = 0;
          unaff_s0[3] = 0;
          *(undefined4 *)(unaff_s0 + 4) = 1;
        }
      }
    }
  }
  if ((unaff_s0[0x2a] == '\x01') && (0x31a8 < *(short *)(unaff_s0 + 0x2e))) {
    *(undefined2 *)(unaff_s0 + 0x2e) = 0x31a8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = FUN_8014047c();
  if ((iVar3 == 0) && (iVar3 = func_0x800777fc(), iVar3 != 0)) {
    func_0x800518fc();
    if (unaff_s0[0x29] != '\0') {
      FUN_80145210();
      return;
    }
    unaff_s0[0xb] = unaff_s0[0xb] & 0x3f;
  }
  unaff_s0[0x29] = 0;
  return;
}

