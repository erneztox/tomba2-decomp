// FUN_80121644

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80121644(void)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int in_v0;
  int iVar4;
  int iVar5;
  undefined1 in_v1;
  int extraout_v1;
  undefined1 *unaff_s0;
  int unaff_s1;
  undefined4 uVar6;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  *(undefined1 *)(unaff_s1 + 0x46) = in_v1;
  *(undefined2 *)(*(int *)(unaff_s1 + 0xc0) + 0x3a) = *(undefined2 *)(in_v0 + 2);
  *(undefined2 *)(unaff_s1 + 0x86) = *(undefined2 *)(in_v0 + 4);
  FUN_801291f4();
  if (extraout_v1 != 1) {
    if (1 < extraout_v1) {
      if (extraout_v1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (extraout_v1 != 0) {
      halt_baddata();
    }
    unaff_s0[0xb] = 0x20;
    *(undefined **)(unaff_s0 + 0x18) = &DAT_8012e5f8;
    *(undefined2 *)(unaff_s0 + 0x80) = 100;
    *(undefined2 *)(unaff_s0 + 0x82) = 200;
    *(undefined2 *)(unaff_s0 + 0x84) = 200;
    unaff_s0[4] = 1;
    *unaff_s0 = 1;
    uVar2 = _DAT_80137c2c;
    *(undefined2 *)(unaff_s0 + 0x86) = 400;
    *(undefined2 *)(unaff_s0 + 0x40) = 0;
    *(undefined2 *)(unaff_s0 + 0x70) = uVar2;
    uVar2 = _DAT_80137c2e;
    *(undefined4 *)(unaff_s0 + 0x60) = 0x80137c30;
    *(undefined4 *)(unaff_s0 + 100) = 0x80137c30;
    *(undefined2 *)(unaff_s0 + 0x2e) = 0x5238;
    *(undefined2 *)(unaff_s0 + 0x32) = 0xe375;
    *(undefined2 *)(unaff_s0 + 0x36) = 0x2340;
    *(undefined2 *)(unaff_s0 + 0x72) = uVar2;
    uVar3 = func_0x8009a450();
    *(ushort *)(unaff_s0 + 0x68) = (*(short *)(unaff_s0 + 0x2e) + 0x40) - (uVar3 & 0x7f);
    uVar3 = func_0x8009a450();
    *(ushort *)(unaff_s0 + 0x6a) = *(short *)(unaff_s0 + 0x32) + (uVar3 & 0x7f) + 0x100;
    uVar3 = func_0x8009a450();
    *(undefined2 *)(unaff_s0 + 0x6e) = 0;
    *(ushort *)(unaff_s0 + 0x6c) = (*(short *)(unaff_s0 + 0x36) + 0x10) - (uVar3 & 0x1f);
  }
  sVar1 = *(short *)(unaff_s0 + 0x40);
  *(short *)(unaff_s0 + 0x40) = sVar1 + 1;
  if (((short)(sVar1 + 1) == 7) && ((byte)unaff_s0[3] < 0xc)) {
    uVar6 = *(undefined4 *)(unaff_s0 + 0x10);
    iVar4 = func_0x8007a980(1,2,0);
    iVar5 = 0;
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x1c) = 0x8013362c;
      *(undefined4 *)(iVar4 + 0x10) = uVar6;
      *(undefined1 *)(iVar4 + 2) = 0x1a;
      *(undefined1 *)(iVar4 + 3) = 0;
      iVar5 = iVar4;
    }
    *(char *)(iVar5 + 3) = unaff_s0[3] + '\x01';
  }
  if (((*(short *)(unaff_s0 + 0x40) < 0x10) &&
      (*(int *)(unaff_s0 + 0x60) = *(int *)(unaff_s0 + 100), *(int *)(unaff_s0 + 100) != 0)) &&
     (*(short *)(unaff_s0 + 0x32) < -6000)) {
    iVar5 = func_0x8007778c();
    if (iVar5 != 0) {
      FUN_8010eea8();
      if ((_DAT_1f80017c + (ushort)(byte)unaff_s0[3] & 7) == 0) {
        in_stack_00000010._2_2_ = *(undefined2 *)(unaff_s0 + 0x68);
        in_stack_00000014._2_2_ = *(undefined2 *)(unaff_s0 + 0x6a);
        in_stack_00000018._2_2_ = *(undefined2 *)(unaff_s0 + 0x6c);
        uVar3 = func_0x8009a450();
        *(ushort *)(unaff_s0 + 0x68) = (*(short *)(unaff_s0 + 0x68) + 0x80) - (uVar3 & 0xff);
        *(short *)(unaff_s0 + 0x6a) = *(short *)(unaff_s0 + 0x6a) + -100;
        uVar3 = func_0x8009a450();
        *(ushort *)(unaff_s0 + 0x6c) = (*(short *)(unaff_s0 + 0x6c) + 0x40) - (uVar3 & 0x7f);
        func_0x8003116c(0xd,&stack0x00000010,0xffffffe2);
      }
      sVar1 = *(short *)(unaff_s0 + 0x6e);
      *(ushort *)(unaff_s0 + 0x6e) = sVar1 - 1U;
      if ((int)((uint)(ushort)(sVar1 - 1U) << 0x10) < 1) {
        func_0x80074590(2,0xfffffff2,0);
        *(undefined2 *)(unaff_s0 + 0x6e) = 9;
      }
    }
    *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_s0[4] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

