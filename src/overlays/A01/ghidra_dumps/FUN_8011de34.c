// FUN_8011de34

/* WARNING: Control flow encountered bad instruction data */

void FUN_8011de34(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined2 in_v0;
  int in_v1;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *unaff_s0;
  int unaff_s8;
  undefined8 uVar7;
  
  *(undefined2 *)((int)unaff_s0 + 0x2e) = in_v0;
  *(undefined2 *)((int)unaff_s0 + 0x32) = *(undefined2 *)(in_v1 * 6 + param_1 + 2);
  iVar4 = unaff_s0[4];
  *(undefined2 *)((int)unaff_s0 + 0x36) = *(undefined2 *)(in_v1 * 6 + param_1 + 4);
  *(undefined2 *)(unaff_s0 + 0x15) = *(undefined2 *)(iVar4 + 0x54);
  *(undefined2 *)((int)unaff_s0 + 0x56) = *(undefined2 *)(iVar4 + 0x56);
  uVar1 = *(undefined2 *)(iVar4 + 0x58);
  *(undefined2 *)(unaff_s0 + 0x20) = 0x32;
  *(undefined2 *)((int)unaff_s0 + 0x82) = 100;
  *(undefined2 *)(unaff_s0 + 0x16) = uVar1;
  *(short *)(unaff_s0 + 0x21) =
       *(short *)((uint)*(byte *)((int)unaff_s0 + 3) * 2 + -0x7fec89b4) + 0x5a;
  sVar2 = *(short *)((uint)*(byte *)((int)unaff_s0 + 3) * 2 + -0x7fec89b4);
  *(short *)((int)unaff_s0 + 0x32) = *(short *)((int)unaff_s0 + 0x32) + 0xaf;
  *(short *)((int)unaff_s0 + 0x86) = sVar2 + 0xdc;
  puVar6 = unaff_s0;
  uVar7 = func_0x800517f8();
  uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
  iVar4 = (int)uVar7;
  *(uint *)(unaff_s8 + 0x80) = uVar5;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 3;
  }
  setCopReg(2,0x4000,(iVar4 >> 2) + (uVar5 >> 0x16));
  setCopReg(2,0x3000,*(undefined4 *)((int)unaff_s0 + -9));
  copFunction(2,0x780010);
  uVar3 = getCopReg(2,0x16);
  *puVar6 = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

