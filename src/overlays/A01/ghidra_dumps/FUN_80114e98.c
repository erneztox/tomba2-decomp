// FUN_80114e98

/* WARNING: Control flow encountered bad instruction data */

void FUN_80114e98(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 extraout_v1;
  uint uVar5;
  int iVar6;
  int unaff_s0;
  int unaff_s8;
  undefined8 uVar7;
  
  if (param_3 == 0) {
    iVar6 = -0x7fec6020;
    uVar4 = func_0x80077c40(param_1,0x80139fe0,param_2);
    *(undefined2 *)((int)param_1 + 0x82) = uVar4;
    *(undefined2 *)(param_1 + 0x16) = extraout_v1;
    *(short *)(param_1 + 0x21) =
         *(short *)((uint)*(byte *)((int)param_1 + 3) * 2 + iVar6 + 0x764c) + 0x5a;
    sVar2 = *(short *)((uint)*(byte *)((int)param_1 + 3) * 2 + iVar6 + 0x764c);
    *(short *)((int)param_1 + 0x32) = *(short *)((int)param_1 + 0x32) + 0xaf;
    *(short *)((int)param_1 + 0x86) = sVar2 + 0xdc;
    uVar7 = func_0x800517f8();
    uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
    iVar6 = (int)uVar7;
    *(uint *)(unaff_s8 + 0x80) = uVar5;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 3;
    }
    setCopReg(2,0x4000,(iVar6 >> 2) + (uVar5 >> 0x16));
    setCopReg(2,0x3000,*(undefined4 *)(unaff_s0 + -9));
    copFunction(2,0x780010);
    uVar3 = getCopReg(2,0x16);
    *param_1 = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x80077cfc(param_1,0x80139fe0,param_2,(int)(short)param_3);
  FUN_8011d9e4(param_1,param_4 + 1);
  if (*(short *)((int)param_1 + (param_4 + 1) * 2 + 0x60) != 2) {
    *(undefined2 *)((int)param_1 + param_4 * 2 + 0x60) = 0;
    return;
  }
  uVar1 = *(ushort *)(param_1[0xe] + 4);
  if ((int)((uint)uVar1 << 0x10) >> 0x14 != (int)*(short *)((int)param_1 + param_4 * 2 + 0x60)) {
    func_0x80051b04(param_1[0x32],0x15);
    *(short *)((int)param_1 + param_4 * 2 + 0x60) = (short)uVar1 >> 4;
  }
  return;
}

