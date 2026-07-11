// FUN_8012de00

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8012de00(int param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_zero;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int in_t0;
  int *in_t1;
  int in_t2;
  int in_t3;
  uint in_t4;
  int iVar9;
  uint *in_t5;
  int *in_t6;
  uint in_t7;
  
  bVar1 = *(byte *)(param_1 + 4);
  uVar5 = (uint)(bVar1 < 2);
  if (bVar1 == 1) {
    iVar9 = 2;
    if (((DAT_800bf89c == '\x02') || (*(char *)(param_1 + 3) != '\x02')) || (DAT_800e7eaa != '\x01')
       ) {
      iVar9 = param_1;
      func_0x8007778c();
    }
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      if (DAT_800bf809 != '\0') {
LAB_8012df34:
        if (*(char *)(param_1 + 1) == '\0') {
          return (uint *)0x0;
        }
        uVar5 = FUN_801389c8(param_1);
        goto LAB_80136ef8;
      }
      iVar6 = FUN_80137198();
      iVar9 = param_1;
    }
    else {
      iVar6 = 2;
      if (bVar1 < 2) {
        iVar6 = 3;
        if (bVar1 == 0) {
          if (*(char *)(param_1 + 3) == '\x03') {
            iVar6 = func_0x8018cdc4();
            iVar9 = param_1;
          }
          else {
            iVar6 = FUN_80138a64();
            iVar9 = param_1;
          }
        }
      }
      else if (bVar1 == 2) {
        func_0x8018ca1c(param_1);
        goto LAB_8012df34;
      }
    }
    in_t2 = *(int *)(iVar6 + -0xabc);
    in_t6 = (int *)&DAT_1f800000;
    if (param_3 != 0) {
      in_t7 = 0xf0f0f0;
      in_t3 = iVar9 + 0x10;
      in_t0 = in_t2 + 0x30;
      param_1 = iVar9;
      uVar5 = param_3;
      goto LAB_80136ef4;
    }
  }
  else {
    if (uVar5 == 0) {
      uVar5 = 3;
      if (bVar1 == 2) {
        return (uint *)0x3;
      }
      if (bVar1 == 3) {
        puVar7 = (uint *)func_0x8007a624(param_1);
        return puVar7;
      }
    }
    else if (bVar1 == 0) {
      uVar5 = FUN_80136f08(param_1);
    }
LAB_80136ef8:
    while( true ) {
      setCopReg(2,in_zero,in_t5[5]);
      setCopReg(2,0x800,in_t4);
      setCopReg(2,0x1800,in_t4 >> 0x10);
      setCopReg(2,uVar5,in_t5[7]);
      setCopReg(2,param_1,in_t5[8]);
      setCopReg(2,0x2800,in_t5[9]);
      uVar5 = *in_t5;
      *(uint *)(in_t0 + -0x2c) = uVar5 & 0xfff0f0f0;
      copFunction(2,0x280030);
      *(uint *)(in_t0 + -0x20) = uVar5 << 4 & in_t7;
      uVar5 = *(uint *)(in_t3 + -0xc);
      iVar9 = getCopControlWord(2,0xf800);
      *in_t6 = iVar9;
      if (-1 < *in_t6) {
        copFunction(2,0x1400006);
        *(undefined4 *)(in_t0 + -0x24) = *(undefined4 *)(in_t3 + -8);
        iVar9 = getCopReg(2,0x18);
        *in_t6 = iVar9;
        if (0 < *in_t6) {
          uVar3 = getCopReg(2,0xc);
          *(undefined4 *)(in_t2 + 8) = uVar3;
          uVar3 = getCopReg(2,0xd);
          *(undefined4 *)(in_t2 + 0x14) = uVar3;
          uVar3 = getCopReg(2,0xe);
          *(undefined4 *)(in_t2 + 0x20) = uVar3;
          setCopReg(2,in_zero,in_t5[10]);
          setCopReg(2,0x800,in_t5[9] >> 0x10);
          *(uint *)(in_t0 + -0x14) = uVar5 & in_t7;
          copFunction(2,0x180001);
          *(uint *)(in_t0 + -8) = uVar5 << 4 & in_t7;
          *(undefined4 *)(in_t0 + -0x18) = *(undefined4 *)(in_t3 + -4);
          iVar9 = getCopControlWord(2,0xf800);
          *in_t6 = iVar9;
          if (-1 < *in_t6) {
            uVar3 = getCopReg(2,0xe);
            *(undefined4 *)(in_t2 + 0x2c) = uVar3;
            if ((((*(ushort *)(in_t0 + -0x28) < 0x140) || (*(ushort *)(in_t0 + -0x1c) < 0x140)) ||
                ((*(ushort *)(in_t0 + -0x10) < 0x140 || (*(ushort *)(in_t0 + -4) < 0x140)))) &&
               (((*(ushort *)(in_t0 + -0x26) < 0xf0 || (*(ushort *)(in_t0 + -0x1a) < 0xf0)) ||
                ((*(ushort *)(in_t0 + -0xe) < 0xf0 || (*(ushort *)(in_t0 + -2) < 0xf0)))))) {
              uVar5 = uVar5 >> 0x18 & 3;
              if (uVar5 == 1) {
                iVar9 = getCopReg(2,0x10);
                iVar6 = getCopReg(2,0x11);
                iVar4 = getCopReg(2,0x12);
                iVar8 = getCopReg(2,0x13);
                if (iVar6 < iVar9) {
                  iVar6 = iVar9;
                }
                bVar2 = iVar8 < iVar6;
                if (iVar8 < iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                if (uVar5 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                iVar9 = getCopReg(2,0x10);
                iVar6 = getCopReg(2,0x11);
                iVar4 = getCopReg(2,0x12);
                iVar8 = getCopReg(2,0x13);
                if (iVar9 < iVar6) {
                  iVar6 = iVar9;
                }
                bVar2 = iVar6 < iVar8;
                if (iVar4 < iVar8) {
                  bVar2 = iVar6 < iVar4;
                  iVar8 = iVar4;
                }
              }
              if (bVar2) {
                iVar8 = iVar6;
              }
              *in_t1 = iVar8 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
      in_t3 = in_t3 + 0x2c;
      in_t5 = in_t5 + 0xb;
      uVar5 = param_3;
      if (param_3 == 0) break;
LAB_80136ef4:
      param_3 = uVar5 - 1;
      in_t4 = in_t5[6];
    }
  }
  _DAT_800bf544 = in_t2;
  return in_t5;
}

