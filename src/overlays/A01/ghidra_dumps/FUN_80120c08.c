// FUN_80120c08

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_80120c08(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_zero;
  uint *puVar5;
  int in_v0;
  int in_v1;
  uint uVar6;
  int iVar7;
  int iVar8;
  int in_t0;
  int in_t1;
  int *in_t2;
  int in_t3;
  int iVar9;
  uint *in_t5;
  uint in_t6;
  int *in_t7;
  
  if (in_v0 <= param_3) {
    *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(in_v1 + 2);
    *(undefined1 *)(param_2 + 0x5e) = 2;
    *(undefined1 *)(*(int *)(param_2 + 0x10) + 0x5e) = 0;
    *(undefined1 *)(*(int *)(param_2 + 0x14) + 0x5e) = 2;
    puVar5 = *(uint **)(param_2 + 0x3c);
    *(undefined1 *)((int)puVar5 + 0x5e) = 2;
    return puVar5;
  }
  *(short *)(param_1 + 0x3a) =
       (short)param_3 + (short)(char)((ushort)*(undefined2 *)(param_2 + 0x4a) >> 8);
  *(short *)(param_2 + 0x86) =
       *(short *)(*(int *)(param_2 + 0xc0) + 0x3a) + *(short *)(param_2 + 0x84);
  if ((*(char *)(param_2 + 3) == '\x02') && (DAT_1f800137 != '\0')) {
    uVar6 = 2;
    do {
      *(uint *)(in_t0 + -0x20) = uVar6 << 4 & in_t6;
      uVar6 = *(uint *)(in_t3 + -0xc);
      iVar9 = getCopControlWord(2,0xf800);
      *in_t7 = iVar9;
      if (-1 < *in_t7) {
        copFunction(2,0x1400006);
        *(undefined4 *)(in_t0 + -0x24) = *(undefined4 *)(in_t3 + -8);
        iVar9 = getCopReg(2,0x18);
        *in_t7 = iVar9;
        if (0 < *in_t7) {
          uVar3 = getCopReg(2,0xc);
          *(undefined4 *)(in_t1 + 8) = uVar3;
          uVar3 = getCopReg(2,0xd);
          *(undefined4 *)(in_t1 + 0x14) = uVar3;
          uVar3 = getCopReg(2,0xe);
          *(undefined4 *)(in_t1 + 0x20) = uVar3;
          setCopReg(2,in_zero,in_t5[10]);
          setCopReg(2,0x800,in_t5[9] >> 0x10);
          *(uint *)(in_t0 + -0x14) = uVar6 & in_t6;
          copFunction(2,0x180001);
          *(uint *)(in_t0 + -8) = uVar6 << 4 & in_t6;
          *(undefined4 *)(in_t0 + -0x18) = *(undefined4 *)(in_t3 + -4);
          iVar9 = getCopControlWord(2,0xf800);
          *in_t7 = iVar9;
          if (-1 < *in_t7) {
            uVar3 = getCopReg(2,0xe);
            *(undefined4 *)(in_t1 + 0x2c) = uVar3;
            if (((((*(ushort *)(in_t0 + -0x28) < 0x140) || (*(ushort *)(in_t0 + -0x1c) < 0x140)) ||
                 (*(ushort *)(in_t0 + -0x10) < 0x140)) || (*(ushort *)(in_t0 + -4) < 0x140)) &&
               (((*(ushort *)(in_t0 + -0x26) < 0xf0 || (*(ushort *)(in_t0 + -0x1a) < 0xf0)) ||
                ((*(ushort *)(in_t0 + -0xe) < 0xf0 || (*(ushort *)(in_t0 + -2) < 0xf0)))))) {
              *(undefined4 *)(in_t0 + -0x18) = *(undefined4 *)(in_t3 + -4);
              iVar9 = getCopReg(2,0x10);
              iVar8 = getCopReg(2,0x11);
              iVar4 = getCopReg(2,0x12);
              iVar7 = getCopReg(2,0x13);
              if (uVar6 >> 0x18 == 1) {
                if (iVar8 < iVar9) {
                  iVar8 = iVar9;
                }
                bVar2 = iVar7 < iVar8;
                if (iVar7 < iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                if (uVar6 >> 0x18 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (iVar9 < iVar8) {
                  iVar8 = iVar9;
                }
                bVar2 = iVar8 < iVar7;
                if (iVar4 < iVar7) {
                  bVar2 = iVar8 < iVar4;
                  iVar7 = iVar4;
                }
              }
              if (bVar2) {
                iVar7 = iVar8;
              }
              *in_t2 = iVar7 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
      in_t3 = in_t3 + 0x2c;
      puVar5 = in_t5 + 0xb;
      if (param_3 == 0) {
        _DAT_800bf544 = in_t1;
        return puVar5;
      }
      setCopReg(2,in_zero,in_t5[0x10]);
      setCopReg(2,0x800,in_t5[0x11]);
      setCopReg(2,0x1800,in_t5[0x11] >> 0x10);
      setCopReg(2,param_3,in_t5[0x12]);
      setCopReg(2,param_1,in_t5[0x13]);
      setCopReg(2,0x2800,in_t5[0x14]);
      uVar6 = *puVar5;
      *(uint *)(in_t0 + -0x2c) = uVar6 & in_t6;
      copFunction(2,0x280030);
      param_3 = param_3 + -1;
      in_t5 = puVar5;
    } while( true );
  }
  if (*(char *)(param_2 + 0x29) != '\0') {
    uVar1 = *(ushort *)(param_2 + 0x4a);
    *(short *)(param_4 + 0x156) = *(short *)(param_4 + 0x156) + (short)(char)(uVar1 >> 8);
    return (uint *)((int)((uint)uVar1 << 0x10) >> 0x18);
  }
  return (uint *)0x0;
}

