// FUN_08035534

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080356e0) */
/* WARNING: Removing unreachable block (ram,0x080356f0) */
/* WARNING: Removing unreachable block (ram,0x080356f8) */

void FUN_08035534(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    sVar6 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar6 + -1;
    if (sVar6 == 1) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      func_0x0004130c(param_1,0);
    }
    else {
      *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x80;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar7 = func_0x0009a450();
      cVar2 = *(char *)(param_1 + 0xbe);
      *(short *)(param_1 + 0x6a) = (short)(uVar7 & 3);
      puVar11 = (ushort *)
                (*(int *)((uint)*(byte *)(param_1 + 3) * 4 + -0x7feb73d4) + (uVar7 & 3) * 6);
      uVar3 = *puVar11;
      *(ushort *)(param_1 + 100) = uVar3;
      *(ushort *)(param_1 + 0x66) = puVar11[1];
      uVar4 = puVar11[2];
      *(ushort *)(param_1 + 0x68) = uVar4;
      sVar6 = func_0x00085690(-((int)(((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000)
                               >> 0x10),
                              (int)(((uint)uVar3 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >>
                              0x10);
      cVar5 = func_0x00077768((int)sVar6,(int)*(short *)(param_1 + 0x60),0);
      *(char *)(param_1 + 0xbe) = cVar5;
      if (cVar5 == cVar2) {
        *(undefined1 *)(param_1 + 6) = 2;
      }
      else {
        *(undefined2 *)(param_1 + 0x40) = 0x10;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
    }
  }
  else if (bVar1 == 2) {
    *(undefined1 *)(param_1 + 6) = 3;
    func_0x00077cfc(param_1,0x8014d97c,1,4);
    *(undefined2 *)(param_1 + 0x40) = 0x2d;
    iVar8 = (int)*(short *)(param_1 + 0x40);
    iVar12 = ((int)*(short *)(param_1 + 0x66) - (int)*(short *)(param_1 + 0x32)) * 0x100;
    if (iVar8 == 0) {
      trap(0x1c00);
    }
    if ((iVar8 == -1) && (iVar12 == -0x80000000)) {
      trap(0x1800);
    }
    iVar10 = (int)*(short *)(param_1 + 0x40);
    iVar9 = ((int)*(short *)(param_1 + 0x68) - (int)*(short *)(param_1 + 0x36)) * 0x100;
    if (iVar10 == 0) {
      trap(0x1c00);
    }
    if ((iVar10 == -1) && (iVar9 == -0x80000000)) {
      trap(0x1800);
    }
    *(short *)(param_1 + 0x4e) =
         (short)((((int)*(short *)(param_1 + 100) - (int)*(short *)(param_1 + 0x2e)) * 0x100) / 0x2d
                );
    *(short *)(param_1 + 0x50) = (short)(iVar12 / iVar8);
    *(short *)(param_1 + 0x52) = (short)(iVar9 / iVar10);
  }
  else if (bVar1 == 3) {
    sVar6 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar6 + -1;
    if (sVar6 == 1) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x4e) * 0x100;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x52) * 0x100;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

