// FUN_80112a8c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8011bb50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80112a8c(void)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int in_v1;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  int *in_a3;
  uint in_t0;
  undefined4 *in_t1;
  undefined4 *in_t2;
  undefined4 uVar11;
  undefined1 *unaff_s0;
  int unaff_s1;
  uint *unaff_s2;
  char unaff_s3;
  int unaff_s4;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  short in_stack_00000018;
  short sStack0000001a;
  short in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  int in_stack_00000048;
  int in_stack_0000004c;
  
  *(undefined4 *)(in_v1 + 0x1c) = 0x8011bed0;
  *(undefined1 *)(in_v1 + 3) = 0;
  *(ushort *)(in_v1 + 0x60) = (ushort)(byte)unaff_s0[3];
  *(undefined2 *)(in_v1 + 0x2e) = *(undefined2 *)(unaff_s0 + 0x2e);
  *(undefined2 *)(in_v1 + 0x32) = *(undefined2 *)(unaff_s0 + 0x32);
  uVar1 = *(undefined2 *)(unaff_s0 + 0x36);
  *(undefined1 *)(in_v1 + 0x5e) = 0;
  *(undefined2 *)(in_v1 + 0x36) = uVar1;
  *(int *)(unaff_s0 + 0x14) = in_v1;
  if (((int)(uint)DAT_800bf9f4 >> ((byte)unaff_s0[3] & 0x1f) & 1U) != 0) {
    uVar6 = func_0x80133574(0);
    if (*(int *)(unaff_s0 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(unaff_s0 + 0x14) + 0x14) = uVar6;
    }
    unaff_s0[4] = 3;
    thunk_FUN_80124efc();
    return;
  }
  if (((byte)unaff_s0[3] == 6) && ((DAT_800bf9fc & 0x20) == 0)) {
    in_a3 = (int *)0x1c;
    iVar7 = func_0x80072ddc();
    if (iVar7 != 0) {
      *(undefined4 *)(iVar7 + 0x1c) = 0x8012ac84;
      *(int *)(unaff_s0 + 0x3c) = iVar7;
    }
  }
  if (unaff_s0[5] == '\x02') {
    piVar9 = (int *)&DAT_0000000c;
    piVar10 = (int *)&DAT_00000026;
    iVar7 = func_0x80051b70();
    if (iVar7 == 0) {
      unaff_s0[0x5e] = 1;
      puVar8 = (uint *)(uint)*(ushort *)(unaff_s0 + 0x50);
      uVar2 = _DAT_1f80017c & 0xf;
      *(ushort *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x5a) + *(ushort *)(unaff_s0 + 0x50);
      uVar6 = extraout_at;
      if (uVar2 == 0) {
        puVar8 = (uint *)&DAT_0000000d;
        piVar9 = (int *)&DAT_ffffffe3;
        piVar10 = (int *)0x0;
        func_0x80074590(0xd);
        uVar6 = extraout_at_00;
      }
      if (unaff_s1 == 0) {
        return;
      }
      unaff_s0[5] = 2;
      *unaff_s0 = 2;
      *(undefined2 *)(unaff_s0 + 0x40) = 0xf;
      *(undefined1 *)(unaff_s2 + 1) = 4;
      *(undefined1 *)((int)unaff_s2 + 5) = 0x24;
      sVar5 = 0;
      *(undefined1 *)((int)unaff_s2 + 6) = 0;
      DAT_800bf81f = 0;
      while( true ) {
        sVar4 = (short)unaff_s0;
        in_stack_00000014 = CONCAT22(in_stack_00000014._2_2_,sVar5 * sVar4);
        in_stack_00000018 = *(char *)((int)piVar9 + 5) * sVar4;
        sStack0000001a = *(char *)((int)piVar9 + 7) * sVar4;
        in_stack_0000001c = *(char *)((int)piVar9 + -5) * sVar4;
        in_stack_00000020 = CONCAT22(*(char *)((int)piVar9 + 10) * sVar4,(char)piVar9[2] * sVar4);
        in_stack_00000024 = CONCAT22(in_stack_00000024._2_2_,*(char *)((int)piVar9 + -1) * sVar4);
        in_stack_00000028 =
             CONCAT22(*(char *)((int)piVar9 + 0xb) * sVar4,*(char *)((int)piVar9 + 9) * sVar4);
        in_stack_0000002c = CONCAT22(in_stack_0000002c._2_2_,*(char *)((int)piVar9 + 3) * sVar4);
        setCopReg(2,in_zero,in_stack_00000010);
        setCopReg(2,uVar6,in_stack_00000014);
        setCopReg(2,&stack0x00000010,*in_t2);
        setCopReg(2,&stack0x00000020,in_t2[1]);
        setCopReg(2,puVar8,in_stack_00000020);
        setCopReg(2,piVar9,in_stack_00000024);
        copFunction(2,0x280030);
        uVar11 = getCopControlWord(2,0xf800);
        *in_t1 = uVar11;
        if (-1 < in_stack_00000048) {
          uVar3 = getCopReg(2,0xc);
          unaff_s2[2] = uVar3;
          uVar3 = getCopReg(2,0xd);
          unaff_s2[5] = uVar3;
          uVar3 = getCopReg(2,0xe);
          unaff_s2[8] = uVar3;
          setCopReg(2,in_zero,in_stack_00000028);
          setCopReg(2,uVar6,in_stack_0000002c);
          copFunction(2,0x180001);
          uVar11 = getCopControlWord(2,0xf800);
          *in_t1 = uVar11;
          if (-1 < in_stack_00000048) {
            uVar3 = getCopReg(2,0xe);
            unaff_s2[0xb] = uVar3;
            copFunction(2,0x168002e);
            iVar7 = getCopReg(2,7);
            in_stack_0000004c = (iVar7 >> (iVar7 >> 10 & 0x1fU)) + (iVar7 >> 10) * 0x200;
            if (0x7fb < in_stack_0000004c - 4U) {
              in_stack_0000004c = -1;
            }
            iVar7 = in_stack_0000004c + -100;
            if (-1 < in_stack_0000004c) {
              in_stack_0000004c = iVar7;
              if (iVar7 < 4) {
                in_stack_0000004c = 4;
              }
              piVar10[-0xb] = piVar9[-3] & 0xffffffU | 0x3e000000;
              iVar7 = *in_a3;
              piVar10[-6] = in_t0 & 0x7fffff;
              piVar10[-9] = iVar7;
              iVar7 = piVar9[-4];
              piVar10[-3] = iVar7;
              *piVar10 = iVar7 >> 0x10;
              piVar10[-8] = piVar9[-2];
              piVar10[-5] = piVar9[-1];
              iVar7 = *piVar9;
              *(char *)(piVar10 + -6) = (char)piVar10[-6] + unaff_s3;
              *(char *)(piVar10 + -9) = (char)piVar10[-9] + unaff_s3;
              *(char *)piVar10 = (char)*piVar10 + unaff_s3;
              piVar10[-2] = iVar7;
              *(char *)(piVar10 + -3) = (char)piVar10[-3] + unaff_s3;
              puVar8 = (uint *)(_DAT_800ed8c8 + in_stack_0000004c * 4);
              *unaff_s2 = *puVar8 | 0xc000000;
              *puVar8 = (uint)unaff_s2;
              piVar10 = piVar10 + 0xd;
              unaff_s2 = unaff_s2 + 0xd;
            }
          }
        }
        in_a3 = in_a3 + 9;
        if ((int)in_t0 < 1) break;
        in_t0 = piVar9[4];
        in_stack_00000010 = CONCAT22(*(char *)((int)piVar9 + 0x2a) * sVar4,(char)piVar9[10] * sVar4)
        ;
        sVar5 = (short)*(char *)((int)piVar9 + 0x1b);
        piVar9 = piVar9 + 9;
      }
      uVar2 = *(ushort *)(unaff_s4 + 0x40);
      _DAT_800bf544 = unaff_s2;
      func_0x800329e0(6);
      setCopReg(2,in_zero,*(undefined4 *)(unaff_s4 + 0x60));
      setCopReg(2,extraout_at_01,*(undefined4 *)(unaff_s4 + 100));
      iVar7 = func_0x800317cc(0);
      if (iVar7 == 0) {
        _DAT_1f800080 = _DAT_1f800080 + -100;
        if (_DAT_1f800080 < 4) {
          _DAT_1f800080 = 4;
        }
        _DAT_1f800084 = _DAT_1f800084 * *(short *)(unaff_s4 + 0x70) >> 0xb;
        _DAT_1f800088 = _DAT_1f800084;
        if (*(char *)(unaff_s4 + 3) == '\b') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x800328ec(*(undefined4 *)(((int)((uint)uVar2 << 0x10) >> 0x18) * 4 + -0x7fec7870));
      }
      return;
    }
  }
  else {
    iVar7 = func_0x80051b70();
    if (iVar7 == 0) {
      unaff_s0[0x5e] = 0;
      *unaff_s0 = 1;
      *(undefined2 *)(unaff_s0 + 0xbc) = 0x1000;
      *(undefined2 *)(unaff_s0 + 0xba) = 0x1000;
      *(undefined2 *)(unaff_s0 + 0xb8) = 0x1000;
      unaff_s0[4] = unaff_s0[4] + '\x01';
      unaff_s0[0xd] = 0;
      unaff_s0[0x29] = 0;
      unaff_s0[0x2b] = 0;
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 10) = 0xfc00;
      func_0x8004130c();
      unaff_s0[0x46] = unaff_s0[0xbe];
      thunk_FUN_80124efc();
      return;
    }
  }
  return;
}

