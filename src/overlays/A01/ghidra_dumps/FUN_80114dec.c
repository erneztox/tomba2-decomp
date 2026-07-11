// FUN_80114dec

/* WARNING: Control flow encountered bad instruction data */

void FUN_80114dec(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int unaff_s8;
  undefined8 uVar11;
  
  iVar8 = param_1;
  FUN_8011d9e4(param_1,param_2 + 1);
  puVar10 = (undefined4 *)(param_1 + (param_2 + 1) * 2);
  iVar5 = (int)*(short *)(puVar10 + 0x18);
  if (iVar5 != 2) {
    *(undefined2 *)(param_1 + param_2 * 2 + 0x60) = 0;
    iVar8 = iVar8 + 0x7614;
    *(undefined2 *)((int)puVar10 + 0x2e) = *(undefined2 *)(iVar5 * 6 + iVar8);
    *(undefined2 *)((int)puVar10 + 0x32) = *(undefined2 *)(iVar5 * 6 + iVar8 + 2);
    iVar6 = puVar10[4];
    *(undefined2 *)((int)puVar10 + 0x36) = *(undefined2 *)(iVar5 * 6 + iVar8 + 4);
    *(undefined2 *)(puVar10 + 0x15) = *(undefined2 *)(iVar6 + 0x54);
    *(undefined2 *)((int)puVar10 + 0x56) = *(undefined2 *)(iVar6 + 0x56);
    uVar2 = *(undefined2 *)(iVar6 + 0x58);
    *(undefined2 *)(puVar10 + 0x20) = 0x32;
    *(undefined2 *)((int)puVar10 + 0x82) = 100;
    *(undefined2 *)(puVar10 + 0x16) = uVar2;
    *(short *)(puVar10 + 0x21) =
         *(short *)((uint)*(byte *)((int)puVar10 + 3) * 2 + -0x7fec89b4) + 0x5a;
    sVar3 = *(short *)((uint)*(byte *)((int)puVar10 + 3) * 2 + -0x7fec89b4);
    *(short *)((int)puVar10 + 0x32) = *(short *)((int)puVar10 + 0x32) + 0xaf;
    *(short *)((int)puVar10 + 0x86) = sVar3 + 0xdc;
    puVar9 = puVar10;
    uVar11 = func_0x800517f8();
    uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
    iVar8 = (int)uVar11;
    *(uint *)(unaff_s8 + 0x80) = uVar7;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 3;
    }
    setCopReg(2,0x4000,(iVar8 >> 2) + (uVar7 >> 0x16));
    setCopReg(2,0x3000,*(undefined4 *)((int)puVar10 + -9));
    copFunction(2,0x780010);
    uVar4 = getCopReg(2,0x16);
    *puVar9 = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x38) + 4);
  iVar8 = param_1 + param_2 * 2;
  if ((int)((uint)uVar1 << 0x10) >> 0x14 != (int)*(short *)(iVar8 + 0x60)) {
    func_0x80051b04(*(undefined4 *)(param_1 + 200),0x15);
    *(short *)(iVar8 + 0x60) = (short)uVar1 >> 4;
  }
  return;
}

