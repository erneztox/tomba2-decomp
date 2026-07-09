// FUN_80112ca0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8012de38) */
/* WARNING: Removing unreachable block (ram,0x8012de44) */
/* WARNING: Removing unreachable block (ram,0x8012de4c) */
/* WARNING: Removing unreachable block (ram,0x8012df54) */
/* WARNING: Removing unreachable block (ram,0x8012df5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_80112ca0(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_zero;
  undefined1 *puVar7;
  uint *puVar8;
  int iVar9;
  int extraout_v1;
  uint uVar10;
  int iVar11;
  int iVar12;
  int in_t0;
  int *in_t1;
  int in_t2;
  int in_t3;
  uint in_t4;
  uint *in_t5;
  int *in_t6;
  uint in_t7;
  
  puVar7 = (undefined1 *)func_0x80077b5c();
  bVar1 = param_1[7];
  if (bVar1 == 1) {
    puVar8 = (uint *)0x0;
    if (puVar7 != (undefined1 *)0x0) {
      puVar8 = (uint *)func_0x80074590(5,0,0);
      return puVar8;
    }
  }
  else {
    puVar8 = (uint *)(uint)(bVar1 < 2);
    if (puVar8 != (uint *)0x0) {
      puVar7 = param_1;
      if (bVar1 == 0) {
        *param_1 = (char)param_1;
        param_1[0xb] = 1;
        *(undefined2 *)(param_1 + 0x5a) = 0;
        param_1[0x46] = 8;
        param_1[0x47] = 8;
        *(undefined2 *)(param_1 + 0x2e) = uRam00000001;
        puVar8 = (uint *)(uint)uRam00000003;
      }
LAB_8011bda4:
      *(short *)(puVar7 + 0x32) = (short)puVar8;
      iVar12 = 4;
      *(undefined2 *)(puVar7 + 0x36) = _DAT_00000005;
      func_0x80077b38();
      func_0x8004d4c4();
      puVar7 = param_1;
      func_0x8004b0d8(param_1);
      iVar9 = 3;
      param_1[4] = 3;
      if (extraout_v1 == 0) {
        iVar9 = FUN_80136f08(param_1);
        puVar7 = param_1;
      }
      do {
        setCopReg(2,in_zero,in_t5[5]);
        setCopReg(2,0x800,in_t4);
        setCopReg(2,0x1800,in_t4 >> 0x10);
        setCopReg(2,iVar9,in_t5[7]);
        setCopReg(2,puVar7,in_t5[8]);
        setCopReg(2,0x2800,in_t5[9]);
        uVar10 = *in_t5;
        *(uint *)(in_t0 + -0x2c) = uVar10 & 0xfff0f0f0;
        copFunction(2,0x280030);
        *(uint *)(in_t0 + -0x20) = uVar10 << 4 & in_t7;
        uVar10 = *(uint *)(in_t3 + -0xc);
        iVar9 = getCopControlWord(2,0xf800);
        *in_t6 = iVar9;
        if (-1 < *in_t6) {
          copFunction(2,0x1400006);
          *(undefined4 *)(in_t0 + -0x24) = *(undefined4 *)(in_t3 + -8);
          iVar9 = getCopReg(2,0x18);
          *in_t6 = iVar9;
          if (0 < *in_t6) {
            uVar5 = getCopReg(2,0xc);
            *(undefined4 *)(in_t2 + 8) = uVar5;
            uVar5 = getCopReg(2,0xd);
            *(undefined4 *)(in_t2 + 0x14) = uVar5;
            uVar5 = getCopReg(2,0xe);
            *(undefined4 *)(in_t2 + 0x20) = uVar5;
            setCopReg(2,in_zero,in_t5[10]);
            setCopReg(2,0x800,in_t5[9] >> 0x10);
            *(uint *)(in_t0 + -0x14) = uVar10 & in_t7;
            copFunction(2,0x180001);
            *(uint *)(in_t0 + -8) = uVar10 << 4 & in_t7;
            *(undefined4 *)(in_t0 + -0x18) = *(undefined4 *)(in_t3 + -4);
            iVar9 = getCopControlWord(2,0xf800);
            *in_t6 = iVar9;
            if (-1 < *in_t6) {
              uVar5 = getCopReg(2,0xe);
              *(undefined4 *)(in_t2 + 0x2c) = uVar5;
              if (((((*(ushort *)(in_t0 + -0x28) < 0x140) || (*(ushort *)(in_t0 + -0x1c) < 0x140))
                   || (*(ushort *)(in_t0 + -0x10) < 0x140)) || (*(ushort *)(in_t0 + -4) < 0x140)) &&
                 (((*(ushort *)(in_t0 + -0x26) < 0xf0 || (*(ushort *)(in_t0 + -0x1a) < 0xf0)) ||
                  ((*(ushort *)(in_t0 + -0xe) < 0xf0 || (*(ushort *)(in_t0 + -2) < 0xf0)))))) {
                uVar10 = uVar10 >> 0x18 & 3;
                if (uVar10 == 1) {
                  iVar9 = getCopReg(2,0x10);
                  iVar12 = getCopReg(2,0x11);
                  iVar6 = getCopReg(2,0x12);
                  iVar11 = getCopReg(2,0x13);
                  if (iVar12 < iVar9) {
                    iVar12 = iVar9;
                  }
                  bVar4 = iVar11 < iVar12;
                  if (iVar11 < iVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                }
                else {
                  if (uVar10 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  iVar9 = getCopReg(2,0x10);
                  iVar12 = getCopReg(2,0x11);
                  iVar6 = getCopReg(2,0x12);
                  iVar11 = getCopReg(2,0x13);
                  if (iVar9 < iVar12) {
                    iVar12 = iVar9;
                  }
                  bVar4 = iVar12 < iVar11;
                  if (iVar6 < iVar11) {
                    bVar4 = iVar12 < iVar6;
                    iVar11 = iVar6;
                  }
                }
                if (bVar4) {
                  iVar11 = iVar12;
                }
                *in_t1 = iVar11 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
          }
        }
        in_t3 = in_t3 + 0x2c;
        if (iVar12 == 0) {
          _DAT_800bf544 = in_t2;
          return in_t5 + 0xb;
        }
        in_t4 = in_t5[0x11];
        iVar9 = iVar12;
        iVar12 = iVar12 + -1;
        in_t5 = in_t5 + 0xb;
      } while( true );
    }
    puVar8 = (uint *)0x3;
    if (bVar1 == 2) {
      sVar2 = *(short *)(param_1 + 0x4a);
      sVar3 = *(short *)(param_1 + 0x4a);
      *(short *)(param_1 + 0x4a) = sVar3 + 0x400;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
      if (0x3000 < (short)(sVar3 + 0x400)) {
        *(undefined2 *)(param_1 + 0x4a) = 0x3000;
      }
      func_0x8004766c(param_1);
      iVar9 = func_0x80049250(param_1,0,0x14);
      if (iVar9 == 1) {
        *(undefined2 *)(param_1 + 0x4a) = 0;
        param_1[0x29] = 1;
      }
      puVar8 = (uint *)0x0;
      if (param_1[0x29] != '\0') {
        puVar8 = (uint *)func_0x80074590(3,3,0xfffffff6);
        return puVar8;
      }
    }
    else {
      if (bVar1 != 3) goto LAB_8011bda4;
      if (puVar7 != (undefined1 *)0x0) {
        param_1[6] = 0;
        param_1[7] = 0;
      }
    }
  }
  return puVar8;
}

