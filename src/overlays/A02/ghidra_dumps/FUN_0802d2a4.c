// FUN_0802d2a4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802d3f0) */

undefined4 FUN_0802d2a4(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = *(int *)(param_1 + 0x6c);
  bVar1 = *(byte *)(param_1 + 0x78);
  sVar4 = *(short *)(iVar8 + 10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      goto LAB_0802d49c;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar5 = (int)((uint)*(ushort *)(param_1 + 100) << 0x10) >> 0x18;
    if (iVar5 == 0) {
      iVar5 = 10;
    }
    iVar7 = (uint)*(ushort *)(param_1 + 0x76) - (uint)*(ushort *)(param_1 + 0x36);
    iVar6 = iVar7 * 0x10000 >> 0x10;
    *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x74) - *(short *)(param_1 + 0x2e);
    *(short *)(param_1 + 0x4c) = (short)iVar7;
    sVar2 = func_0x00084080(iVar6 * iVar6 +
                            (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x48));
    iVar5 = (int)(short)iVar5;
    uVar9 = (int)sVar2 / iVar5;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (sVar2 == -0x80000000)) {
      trap(0x1800);
    }
    *(short *)(param_1 + 100) = (short)uVar9;
    if ((uVar9 & 0xffff) == 0) {
      *(undefined2 *)(param_1 + 100) = 1;
    }
    if (*(short *)(param_1 + 100) == 0) {
      trap(0x1c00);
    }
    *(undefined2 *)(param_1 + 0x44) = 0x1000;
    *(short *)(param_1 + 100) = (short)(0x1000 / (int)*(short *)(param_1 + 100));
    if (sVar4 == -1) {
      uVar3 = func_0x00085690(-(int)*(short *)(param_1 + 0x4c),(int)*(short *)(param_1 + 0x48));
      *(ushort *)(param_1 + 0x56) = uVar3 & 0xfff;
    }
    else if (sVar4 == 0) {
      *(undefined1 *)(param_1 + 0x78) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = func_0x00085690(-(int)*(short *)(param_1 + 0x4c),(int)*(short *)(param_1 + 0x48));
    *(ushort *)(param_1 + 0x66) = uVar3 & 0xfff;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  iVar5 = func_0x00041438(param_1,(int)*(short *)(param_1 + 0x66),0x100);
  if (iVar5 != 0) {
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  if (sVar4 == 1) {
    return 0;
  }
LAB_0802d49c:
  func_0x00041768(param_1,*(ushort *)(param_1 + 0x72) & 0xfff,4);
  iVar5 = (uint)*(ushort *)(param_1 + 0x44) - (uint)*(ushort *)(param_1 + 100);
  *(short *)(param_1 + 0x44) = (short)iVar5;
  if (iVar5 * 0x10000 < 1) {
    *(undefined2 *)(param_1 + 0x44) = 0;
  }
  iVar5 = (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xfff;
  }
  iVar6 = (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4c);
  *(short *)(param_1 + 0x2e) = *(short *)(iVar8 + 4) - (short)(iVar5 >> 0xc);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xfff;
  }
  *(short *)(param_1 + 0x36) = *(short *)(iVar8 + 6) - (short)(iVar6 >> 0xc);
  func_0x0010a73c(param_1,1);
  iVar8 = func_0x0010a868(param_1);
  if (iVar8 == 0) {
    sVar4 = *(short *)(param_1 + 0x50) + 0x800;
    *(short *)(param_1 + 0x50) = sVar4;
    if (0x3000 < sVar4) {
      *(undefined2 *)(param_1 + 0x50) = 0x3000;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
    if (*(short *)(param_1 + 0x44) != 0) {
      func_0x00042ea4(param_1,param_1 + 0x68,(int)*(short *)(param_1 + 0x6a));
      return 0;
    }
    if (*(char *)(param_1 + 0x7b) != -1) {
      func_0x00041768(param_1,*(undefined1 *)(param_1 + 0x7b),4);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0x2800 < *(short *)(param_1 + 0x50)) {
    func_0x00074590(3,0,0);
  }
  *(undefined2 *)(param_1 + 0x50) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

