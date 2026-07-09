// FUN_80131964

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80131964(undefined1 *param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  short *psVar6;
  undefined2 *unaff_s0;
  undefined1 *puVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar5 = (uint)(byte)param_1[4];
  if (uVar5 == 1) {
    if (8 < DAT_1f800207 - 0x17) {
      return;
    }
    iVar8 = func_0x8007778c(param_1);
    if (iVar8 == 0) {
      return;
    }
    if (param_1[3] == 0) {
      if (param_1[0x29] != '\0') {
        if ((DAT_800e7fc7 & 1) != 0) {
          FUN_8013ab7c();
          return;
        }
        iVar3 = (int)_DAT_800e7ed8;
        iVar8 = func_0x80083e80(iVar3);
        unaff_s0 = (undefined2 *)(-iVar8 >> 9);
        iVar8 = func_0x80083f50(iVar3);
        uVar1 = func_0x80085690(iVar8 >> 9,0x6e);
        sVar2 = func_0x80085690(unaff_s0,0x6e);
        psVar6 = *(short **)(param_1 + 0xc4);
        *psVar6 = _DAT_8014aa98 + (short)unaff_s0;
        *(short *)(*(int *)(param_1 + 0xc4) + 2) = _DAT_8014aa9a + (short)(iVar8 >> 9);
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = uVar1;
        *(short *)(*(int *)(param_1 + 0xc4) + 10) = -sVar2;
        uVar4 = FUN_801409c0(unaff_s0,(int)(short)psVar6);
        uVar9 = CONCAT44(uVar4,uVar4) & 0xffffffff0000ffff;
        goto LAB_8013ac18;
      }
    }
    else if ((byte)param_1[3] < 3) {
      FUN_8013abf8();
      return;
    }
    uVar9 = func_0x800517f8(param_1);
  }
  else {
    if (1 < uVar5) {
      uVar9 = CONCAT44(uVar5,3);
      if (uVar5 != 2) {
        if (uVar5 != 3) goto LAB_8013ac18;
        func_0x8007a624(param_1);
      }
      return;
    }
    uVar9 = CONCAT44(uVar5,0x800f0000);
    if (uVar5 == 0) {
      uVar9 = 3;
      if (_DAT_800ed098 < 2) {
        param_1[4] = 3;
      }
      else {
        param_1[8] = 2;
        param_1[9] = 2;
        *(undefined2 *)(param_1 + 0x80) = 0x1e;
        *(undefined2 *)(param_1 + 0x82) = 0x3c;
        *(undefined2 *)(param_1 + 0x84) = 0x32;
        *(undefined2 *)(param_1 + 0x86) = 100;
        param_1[4] = 1;
        *param_1 = 1;
        param_1[0x29] = 0;
        param_1[0xd] = 0;
        param_1[0xb] = 0;
        unaff_s0 = *(undefined2 **)((uint)(byte)param_1[3] * 4 + -0x7feb5550);
        iVar8 = 0;
        puVar7 = param_1;
        if (param_1[8] != '\0') {
          do {
            iVar3 = func_0x8007aae8();
            *(int *)(puVar7 + 0xc0) = iVar3;
            *(short *)(iVar3 + 6) = (short)iVar8 + -1;
            **(undefined2 **)(puVar7 + 0xc0) = *unaff_s0;
            *(undefined2 *)(*(int *)(puVar7 + 0xc0) + 2) = unaff_s0[1];
            *(undefined2 *)(*(int *)(puVar7 + 0xc0) + 4) = unaff_s0[2];
            iVar8 = iVar8 + 1;
            *(undefined4 *)(*(int *)(puVar7 + 0xc0) + 8) = 0;
            psVar6 = unaff_s0 + 3;
            *(undefined4 *)(*(int *)(puVar7 + 0xc0) + 0xc) = 0;
            unaff_s0 = unaff_s0 + 4;
            func_0x80051b04(*(undefined4 *)(puVar7 + 0xc0),0xc,(int)*psVar6);
            puVar7 = puVar7 + 4;
          } while (iVar8 < (int)(uint)(byte)param_1[8]);
        }
        uVar5 = (uint)(byte)param_1[3];
        if (uVar5 == 0) {
          if (DAT_800bf8f7 == '\0') {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_801252c0(param_1,5,2);
        }
        uVar9 = CONCAT44(uVar5,0x4e74);
        if (uVar5 == 2) {
          *(undefined2 *)(param_1 + 0x2e) = 0x4e74;
          *(undefined2 *)(param_1 + 0x32) = 0xf170;
          *(undefined2 *)(param_1 + 0x36) = 0x2284;
          uVar9 = CONCAT44((uint)*(ushort *)(param_1 + 0x32),0xc00);
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined2 *)(param_1 + 0x56) = 0xc00;
          *(undefined2 *)(param_1 + 0x58) = 0;
          *(undefined2 *)(param_1 + 0x4a) = 0;
          *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x32);
        }
      }
    }
  }
LAB_8013ac18:
  if ((int)uVar9 == 0) {
    *(undefined4 *)(unaff_s0 + 2) = 0x301;
    return;
  }
  *(char *)((int)unaff_s0 + 5) = (char)(uVar9 >> 0x20);
  *(undefined1 *)(unaff_s0 + 3) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

