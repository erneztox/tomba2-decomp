// FUN_8011ddb4

/* WARNING: Control flow encountered bad instruction data */

void FUN_8011ddb4(undefined4 *param_1)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int unaff_s8;
  ulonglong uVar7;
  
  uVar5 = (uint)*(byte *)(param_1 + 1);
  uVar7 = (ulonglong)CONCAT14(*(byte *)(param_1 + 1),(uint)(uVar5 < 2));
  puVar6 = param_1;
  if (uVar5 == 1) {
    uVar7 = FUN_801267e8();
  }
  else {
    if (uVar5 < 2 == 0) {
      uVar7 = CONCAT44(uVar5,3);
      if (uVar5 != 2) {
        if (uVar5 != 3) goto LAB_80126ea0;
        func_0x8007a624(param_1);
      }
      return;
    }
    if (uVar5 == 0) {
      FUN_80126a80(param_1);
      uVar5 = (uint)*(byte *)((int)param_1 + 3);
      *(undefined2 *)((int)param_1 + 0x2e) = *(undefined2 *)(uVar5 * 6 + -0x7fec89ec);
      *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)(uVar5 * 6 + -0x7fec89ea);
      iVar4 = param_1[4];
      *(undefined2 *)((int)param_1 + 0x36) = *(undefined2 *)(uVar5 * 6 + -0x7fec89e8);
      *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)(iVar4 + 0x54);
      *(undefined2 *)((int)param_1 + 0x56) = *(undefined2 *)(iVar4 + 0x56);
      uVar1 = *(undefined2 *)(iVar4 + 0x58);
      *(undefined2 *)(param_1 + 0x20) = 0x32;
      *(undefined2 *)((int)param_1 + 0x82) = 100;
      *(undefined2 *)(param_1 + 0x16) = uVar1;
      *(short *)(param_1 + 0x21) =
           *(short *)((uint)*(byte *)((int)param_1 + 3) * 2 + -0x7fec89b4) + 0x5a;
      sVar2 = *(short *)((uint)*(byte *)((int)param_1 + 3) * 2 + -0x7fec89b4);
      *(short *)((int)param_1 + 0x32) = *(short *)((int)param_1 + 0x32) + 0xaf;
      *(short *)((int)param_1 + 0x86) = sVar2 + 0xdc;
      uVar7 = func_0x800517f8();
    }
  }
LAB_80126ea0:
  uVar5 = (uint)(uVar7 >> 0x20);
  iVar4 = (int)uVar7;
  *(uint *)(unaff_s8 + 0x80) = uVar5;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 3;
  }
  setCopReg(2,0x4000,(iVar4 >> 2) + (uVar5 >> 0x16));
  setCopReg(2,0x3000,*(undefined4 *)((int)param_1 + -9));
  copFunction(2,0x780010);
  uVar3 = getCopReg(2,0x16);
  *puVar6 = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

