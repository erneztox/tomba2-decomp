// FUN_80124a68

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

uint * FUN_80124a68(int param_1,undefined4 param_2,uint *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_zero;
  uint *puVar4;
  uint uVar5;
  uint extraout_v1;
  int iVar6;
  int iVar7;
  int in_t0;
  int *in_t1;
  int in_t2;
  int in_t3;
  uint in_t4;
  int iVar8;
  uint *in_t5;
  int *in_t6;
  uint in_t7;
  
  uVar5 = (uint)*(byte *)(param_1 + 4);
  iVar7 = 1;
  puVar4 = (uint *)(uint)(uVar5 < 2);
  if (uVar5 == 1) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 3)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      return (uint *)0x80110000;
    }
  }
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)0x3;
    if (uVar5 == 2) {
      if ((uint *)(uint)*(byte *)(param_1 + 3) != (uint *)0x2) {
        return (uint *)(uint)*(byte *)(param_1 + 3);
      }
      func_0x8004d4c4(0x1d,1);
      iVar7 = param_1;
      func_0x8004b0d8(param_1);
      puVar4 = (uint *)0x3;
      *(undefined1 *)(param_1 + 4) = 3;
      uVar5 = extraout_v1;
    }
    else if (uVar5 == 3) {
      puVar4 = (uint *)func_0x8007a624(param_1);
      return puVar4;
    }
  }
  else if (uVar5 == 0) {
    *(undefined1 *)(param_1 + 4) = 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 3)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      return (uint *)0x0;
    }
  }
  if (puVar4 != (uint *)0x0) {
    if (uVar5 == 0) {
      puVar4 = (uint *)FUN_80136f08(param_1);
      iVar7 = param_1;
    }
LAB_80136ef8:
    do {
      setCopReg(2,in_zero,in_t5[5]);
      setCopReg(2,0x800,in_t4);
      setCopReg(2,0x1800,in_t4 >> 0x10);
      setCopReg(2,puVar4,in_t5[7]);
      setCopReg(2,iVar7,in_t5[8]);
      setCopReg(2,0x2800,in_t5[9]);
      uVar5 = *in_t5;
      *(uint *)(in_t0 + -0x2c) = uVar5 & 0xfff0f0f0;
      copFunction(2,0x280030);
      *(uint *)(in_t0 + -0x20) = uVar5 << 4 & in_t7;
      uVar5 = *(uint *)(in_t3 + -0xc);
      iVar8 = getCopControlWord(2,0xf800);
      *in_t6 = iVar8;
      if (-1 < *in_t6) {
        copFunction(2,0x1400006);
        *(undefined4 *)(in_t0 + -0x24) = *(undefined4 *)(in_t3 + -8);
        iVar8 = getCopReg(2,0x18);
        *in_t6 = iVar8;
        if (0 < *in_t6) {
          uVar2 = getCopReg(2,0xc);
          *(undefined4 *)(in_t2 + 8) = uVar2;
          uVar2 = getCopReg(2,0xd);
          *(undefined4 *)(in_t2 + 0x14) = uVar2;
          uVar2 = getCopReg(2,0xe);
          *(undefined4 *)(in_t2 + 0x20) = uVar2;
          setCopReg(2,in_zero,in_t5[10]);
          setCopReg(2,0x800,in_t5[9] >> 0x10);
          *(uint *)(in_t0 + -0x14) = uVar5 & in_t7;
          copFunction(2,0x180001);
          *(uint *)(in_t0 + -8) = uVar5 << 4 & in_t7;
          *(undefined4 *)(in_t0 + -0x18) = *(undefined4 *)(in_t3 + -4);
          iVar8 = getCopControlWord(2,0xf800);
          *in_t6 = iVar8;
          if (-1 < *in_t6) {
            uVar2 = getCopReg(2,0xe);
            *(undefined4 *)(in_t2 + 0x2c) = uVar2;
            if (((((*(ushort *)(in_t0 + -0x28) < 0x140) || (*(ushort *)(in_t0 + -0x1c) < 0x140)) ||
                 (*(ushort *)(in_t0 + -0x10) < 0x140)) || (*(ushort *)(in_t0 + -4) < 0x140)) &&
               (((*(ushort *)(in_t0 + -0x26) < 0xf0 || (*(ushort *)(in_t0 + -0x1a) < 0xf0)) ||
                ((*(ushort *)(in_t0 + -0xe) < 0xf0 || (*(ushort *)(in_t0 + -2) < 0xf0)))))) {
              uVar5 = uVar5 >> 0x18 & 3;
              if (uVar5 == 1) {
                iVar7 = getCopReg(2,0x10);
                iVar8 = getCopReg(2,0x11);
                iVar3 = getCopReg(2,0x12);
                iVar6 = getCopReg(2,0x13);
                if (iVar8 < iVar7) {
                  iVar8 = iVar7;
                }
                bVar1 = iVar6 < iVar8;
                if (iVar6 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                if (uVar5 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                iVar7 = getCopReg(2,0x10);
                iVar8 = getCopReg(2,0x11);
                iVar3 = getCopReg(2,0x12);
                iVar6 = getCopReg(2,0x13);
                if (iVar7 < iVar8) {
                  iVar8 = iVar7;
                }
                bVar1 = iVar8 < iVar6;
                if (iVar3 < iVar6) {
                  bVar1 = iVar8 < iVar3;
                  iVar6 = iVar3;
                }
              }
              if (bVar1) {
                iVar6 = iVar8;
              }
              *in_t1 = iVar6 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
      in_t3 = in_t3 + 0x2c;
      if (param_3 == (uint *)0x0) {
        _DAT_800bf544 = in_t2;
        return in_t5 + 0xb;
      }
      in_t4 = in_t5[0x11];
      puVar4 = param_3;
      param_3 = (uint *)((int)param_3 - 1);
      in_t5 = in_t5 + 0xb;
    } while( true );
  }
  puVar4 = (uint *)0x3;
  if (uVar5 != 2) {
    if (uVar5 != 3) goto LAB_80136ef8;
    puVar4 = (uint *)func_0x8007a624(param_1);
  }
  return puVar4;
}

