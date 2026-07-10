// FUN_8011BE5C

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8012de38) */
/* WARNING: Removing unreachable block (ram,0x8012de44) */
/* WARNING: Removing unreachable block (ram,0x8012de4c) */
/* WARNING: Removing unreachable block (ram,0x8012df54) */
/* WARNING: Removing unreachable block (ram,0x8012df5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8011bcd0(undefined1 *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 in_zero;
  short sVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int extraout_v1;
  undefined1 *puVar9;
  byte bVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint in_t4;
  uint *in_t5;
  int *in_t6;
  uint in_t7;
  short *psVar15;
  short local_20 [2];
  undefined1 *local_1c;
  undefined4 local_18;
  
  iVar14 = -0x7fef6484;
  iVar11 = 0x8044ad8;
  piVar12 = (int *)&DAT_a2200182;
  iVar13 = -0x69fdffa0;
  local_20[0] = 0x4ad8;
  local_20[1] = 0x804;
  local_1c = &DAT_a2200182;
  local_18 = 0x96020060;
  bVar10 = param_1[0x60] - 2;
  uVar8 = (uint)bVar10;
  psVar15 = local_20 + uVar8 * 3;
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    param_1[5] = 2;
    *(ushort *)(param_1 + 0x48) = (ushort)(byte)param_1[0x46] * -0x400;
    *(ushort *)(param_1 + 0x4a) = (ushort)(byte)param_1[0x46] * 0x800 + -0x1800;
    *(ushort *)(param_1 + 0x50) = (ushort)(byte)param_1[0x46] * 0x20 + 0x180;
LAB_8011bdf8:
    iVar11 = func_0x8007778c(param_1);
    puVar6 = (uint *)0x0;
    if (iVar11 != 0) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * 0x100;
      sVar5 = *psVar15 + -0x40;
      if (((int)*(short *)(param_1 + 0x2e) < *psVar15 + -0x40) ||
         (sVar5 = *psVar15 + 0x40, *psVar15 + 0x40 < (int)*(short *)(param_1 + 0x2e))) {
        *(short *)(param_1 + 0x2e) = sVar5;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      func_0x80077b5c(param_1);
      puVar6 = (uint *)(uint)(*(short *)(param_1 + 0x32) < local_20[uVar8 * 3 + 1]);
      if (puVar6 == (uint *)0x0) {
        param_1[5] = 1;
        cVar2 = param_1[0x46];
        param_1[0x46] = '\x01' - cVar2;
        param_1[0x47] = '\x01' - cVar2;
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -8;
        puVar6 = (uint *)func_0x80074590(0x8f,0,0);
        return puVar6;
      }
    }
    return puVar6;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1[5] = 1;
      *param_1 = 1;
      param_1[0xb] = 0x10;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      param_1[0x46] = bVar10;
      param_1[0x47] = bVar10;
      *(short *)(param_1 + 0x2e) = *psVar15;
      *(short *)(param_1 + 0x32) = local_20[uVar8 * 3 + 1];
      param_3 = 4;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)((int)&local_1c + uVar8 * 6);
      func_0x80077b38(param_1,0x8014c808);
    }
  }
  else if (bVar1 == 2) goto LAB_8011bdf8;
  func_0x8004d4c4();
  puVar9 = param_1;
  func_0x8004b0d8(param_1);
  iVar7 = 3;
  param_1[4] = 3;
  if (extraout_v1 == 0) {
    iVar7 = FUN_80136f08(param_1);
    puVar9 = param_1;
  }
  do {
    setCopReg(2,in_zero,in_t5[5]);
    setCopReg(2,0x800,in_t4);
    setCopReg(2,0x1800,in_t4 >> 0x10);
    setCopReg(2,iVar7,in_t5[7]);
    setCopReg(2,puVar9,in_t5[8]);
    setCopReg(2,0x2800,in_t5[9]);
    uVar8 = *in_t5;
    *(uint *)(iVar11 + -0x2c) = uVar8 & 0xfff0f0f0;
    copFunction(2,0x280030);
    *(uint *)(iVar11 + -0x20) = uVar8 << 4 & in_t7;
    uVar8 = *(uint *)(iVar14 + -0xc);
    iVar7 = getCopControlWord(2,0xf800);
    *in_t6 = iVar7;
    if (-1 < *in_t6) {
      copFunction(2,0x1400006);
      *(undefined4 *)(iVar11 + -0x24) = *(undefined4 *)(iVar14 + -8);
      iVar7 = getCopReg(2,0x18);
      *in_t6 = iVar7;
      if (0 < *in_t6) {
        uVar4 = getCopReg(2,0xc);
        *(undefined4 *)(iVar13 + 8) = uVar4;
        uVar4 = getCopReg(2,0xd);
        *(undefined4 *)(iVar13 + 0x14) = uVar4;
        uVar4 = getCopReg(2,0xe);
        *(undefined4 *)(iVar13 + 0x20) = uVar4;
        setCopReg(2,in_zero,in_t5[10]);
        setCopReg(2,0x800,in_t5[9] >> 0x10);
        *(uint *)(iVar11 + -0x14) = uVar8 & in_t7;
        copFunction(2,0x180001);
        *(uint *)(iVar11 + -8) = uVar8 << 4 & in_t7;
        *(undefined4 *)(iVar11 + -0x18) = *(undefined4 *)(iVar14 + -4);
        iVar7 = getCopControlWord(2,0xf800);
        *in_t6 = iVar7;
        if (-1 < *in_t6) {
          uVar4 = getCopReg(2,0xe);
          *(undefined4 *)(iVar13 + 0x2c) = uVar4;
          if (((((*(ushort *)(iVar11 + -0x28) < 0x140) || (*(ushort *)(iVar11 + -0x1c) < 0x140)) ||
               (*(ushort *)(iVar11 + -0x10) < 0x140)) || (*(ushort *)(iVar11 + -4) < 0x140)) &&
             (((*(ushort *)(iVar11 + -0x26) < 0xf0 || (*(ushort *)(iVar11 + -0x1a) < 0xf0)) ||
              ((*(ushort *)(iVar11 + -0xe) < 0xf0 || (*(ushort *)(iVar11 + -2) < 0xf0)))))) {
            uVar8 = uVar8 >> 0x18 & 3;
            if (uVar8 == 1) {
              iVar11 = getCopReg(2,0x10);
              iVar13 = getCopReg(2,0x11);
              iVar14 = getCopReg(2,0x12);
              iVar7 = getCopReg(2,0x13);
              if (iVar13 < iVar11) {
                iVar13 = iVar11;
              }
              bVar3 = iVar7 < iVar13;
              if (iVar7 < iVar14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else {
              if (uVar8 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar11 = getCopReg(2,0x10);
              iVar13 = getCopReg(2,0x11);
              iVar14 = getCopReg(2,0x12);
              iVar7 = getCopReg(2,0x13);
              if (iVar11 < iVar13) {
                iVar13 = iVar11;
              }
              bVar3 = iVar13 < iVar7;
              if (iVar14 < iVar7) {
                bVar3 = iVar13 < iVar14;
                iVar7 = iVar14;
              }
            }
            if (bVar3) {
              iVar7 = iVar13;
            }
            *piVar12 = iVar7 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
    }
    iVar14 = iVar14 + 0x2c;
    if (param_3 == 0) {
      _DAT_800bf544 = iVar13;
      return in_t5 + 0xb;
    }
    in_t4 = in_t5[0x11];
    iVar7 = param_3;
    param_3 = param_3 + -1;
    in_t5 = in_t5 + 0xb;
  } while( true );
}

