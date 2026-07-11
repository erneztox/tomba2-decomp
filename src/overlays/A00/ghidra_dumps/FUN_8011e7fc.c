// FUN_8011e7fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8011e7fc(undefined1 *param_1,undefined4 param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_t0;
  uint in_t1;
  int in_t2;
  uint in_t3;
  undefined4 unaff_s0;
  short unaff_s1;
  undefined8 uVar7;
  undefined4 in_stack_ffffffd8;
  short sStack_24;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((DAT_1f800207 - 0x1d < 3) || (uVar3 = (uint)DAT_800bf9b5, uVar3 == 1)) {
      iVar4 = func_0x8007778c(param_1);
      uVar3 = 0;
      if (iVar4 != 0) {
        func_0x80051844(param_1);
        uVar3 = FUN_80127cf8();
        return uVar3;
      }
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      uVar3 = FUN_80127cf8();
      return uVar3;
    }
    iVar4 = func_0x80051b70(param_1,0xc,0x52);
    uVar3 = 0x4f00;
    if (iVar4 == 0) {
      *(undefined2 *)(param_1 + 0x2e) = 0x4f00;
      *(undefined2 *)(param_1 + 0x32) = 0xed5e;
      *(undefined2 *)(param_1 + 0x36) = 0x2a6c;
      *(undefined2 *)(param_1 + 0x58) = 0xff1d;
      *param_1 = 1;
      param_1[0x29] = 0;
      param_1[4] = param_1[4] + '\x01';
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) = 0x1000;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0x1000;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3c) = 0x1000;
      *(undefined2 *)(param_1 + 0xb8) = 0x1400;
      *(undefined2 *)(param_1 + 0xba) = 0x1400;
      *(undefined2 *)(param_1 + 0xbc) = 0x1400;
      *(undefined2 *)(param_1 + 0x80) = 0x30;
      *(undefined2 *)(param_1 + 0x82) = 0x60;
      *(undefined2 *)(param_1 + 0x84) = 0x40;
      *(undefined2 *)(param_1 + 0x86) = 0x40;
      param_1[0x2a] = 0x1d;
      func_0x80041194(param_1,0,0,0);
      uVar3 = FUN_80127cf8();
      return uVar3;
    }
  }
  else {
    if (bVar1 == 2) {
      bVar1 = param_1[5];
      if (bVar1 == 2) {
        *param_1 = 1;
        param_1[4] = 1;
        param_1[5] = 0;
        *(undefined2 *)(param_1 + 0x58) = 0xe3;
      }
      else if (bVar1 < 3) {
        if (bVar1 == 1) {
          if (DAT_800e7fc7 == '\0') {
            *(ushort *)(param_1 + 0x58) = 0x1000U - *(short *)(param_1 + 0x62) & 0xfff;
          }
          else {
            *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x62);
          }
        }
      }
      else if (bVar1 == 3) {
        if (4 < (byte)param_1[6]) {
          _DAT_1f8000c0 = 0;
          _DAT_1f8000c2 = 0;
          _DAT_1f8000c4 = 0;
          func_0x8004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f5c,&DAT_1f8000c0);
          func_0x8006cba8(&DAT_800e7eac);
          func_0x80051844(param_1);
          param_1[1] = 1;
          func_0x80077e7c(param_1);
          uVar3 = FUN_80127cf8();
          return uVar3;
        }
                    /* WARNING: Jumptable at 0x8011ea14 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)((uint)(byte)param_1[6] * 4 + -0x7fef642c))();
        return uVar3;
      }
      iVar4 = func_0x80077a4c(1,param_2,(int)(short)((uint)in_stack_ffffffd8 >> 0x10),(int)sStack_24
                             );
      uVar3 = 1;
      if (iVar4 == 0) {
        iVar6 = (int)(short)unaff_s0;
        uVar7 = func_0x80077a4c(1,iVar6,(int)(short)((uint)unaff_s0 >> 0x10),(int)unaff_s1);
        iVar4 = (int)((ulonglong)uVar7 >> 0x20);
        if ((int)uVar7 != 0) {
          do {
            iVar5 = *(int *)(in_t0 + iVar4 + 0xc0);
            *(short *)(iVar5 + 0xc) = *(short *)(iVar5 + 0xc) + -0x80;
            iVar4 = *(int *)(in_t0 + iVar4 + 0xc0);
            *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) & 0xfff;
            do {
              *(short *)(*(int *)(iVar6 + 0xc0) + 0x16) = (short)in_t3;
              uVar3 = in_t1 - 1;
              if (0x400 < *(short *)(*(int *)(iVar6 + 0xc0) + 0xc)) {
                uVar3 = FUN_80139dec();
                return uVar3;
              }
LAB_80130e74:
              in_t1 = uVar3;
              sVar2 = (short)in_t1;
              if (sVar2 < 2) {
LAB_80130e8c:
                if (*(short *)(*(int *)(in_t0 + 0xd4) + 0x16) < 1) {
                  *(undefined2 *)(*(int *)(in_t0 + 200) + 0x16) = 0;
                  return 0;
                }
                *(undefined2 *)(*(int *)(in_t0 + 200) + 0x16) = 1;
                uVar3 = FUN_80139e5c();
                return uVar3;
              }
              iVar5 = (int)sVar2;
              iVar6 = in_t0 + iVar5 * 4;
              iVar4 = *(int *)(iVar6 + 0xc0);
              if (*(int *)(iVar4 + 0x30) + 0x30 < (int)*(short *)(in_t0 + 100)) goto LAB_80130e8c;
              uVar3 = in_t1 & 1;
              if (*(short *)(iVar4 + 0x16) == in_t2) goto LAB_80130e70;
              if (uVar3 != 0) goto code_r0x80130cfc;
              *(short *)(iVar4 + 0xc) = *(short *)(iVar4 + 0xc) + 0x80;
              *(ushort *)(*(int *)(iVar6 + 0xc0) + 0xc) =
                   *(ushort *)(*(int *)(iVar6 + 0xc0) + 0xc) & 0xfff;
            } while (iVar5 == *(byte *)(in_t0 + 8) - 1);
            iVar4 = (iVar5 + 1) * 4;
          } while( true );
        }
        uVar3 = 0;
      }
      return uVar3;
    }
    if (bVar1 != 3) {
      uVar3 = FUN_80127cf8();
      return uVar3;
    }
    uVar3 = func_0x8007a624(param_1);
  }
  return uVar3;
code_r0x80130cfc:
  if (uVar3 != in_t3) {
    _DAT_0000004f = sVar2 + -1;
    FUN_801406e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(iVar4 + 0xc) = *(short *)(iVar4 + 0xc) + -0x80;
  *(ushort *)(*(int *)(iVar6 + 0xc0) + 0xc) = *(ushort *)(*(int *)(iVar6 + 0xc0) + 0xc) & 0xfff;
  if (iVar5 != *(byte *)(in_t0 + 8) - 1) {
    iVar4 = in_t0 + (iVar5 + 1) * 4;
    iVar5 = *(int *)(iVar4 + 0xc0);
    *(short *)(iVar5 + 0xc) = *(short *)(iVar5 + 0xc) + 0x80;
    iVar4 = *(int *)(iVar4 + 0xc0);
    *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) & 0xfff;
  }
  *(short *)(*(int *)(iVar6 + 0xc0) + 0x16) = (short)uVar3;
  uVar3 = in_t1 - 1;
  if (*(short *)(*(int *)(iVar6 + 0xc0) + 0xc) < 0xc00) {
    *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 0xc) = 0xc00;
    *(short *)(*(int *)(iVar6 + 0xc0) + 0x16) = (short)in_t2;
    *(short *)(in_t0 + 0x66) = *(short *)(in_t0 + 0x66) + -0x30;
LAB_80130e70:
    uVar3 = in_t1 - 1;
  }
  goto LAB_80130e74;
}

