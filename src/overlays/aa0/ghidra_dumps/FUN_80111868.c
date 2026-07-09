// FUN_80111868

void FUN_80111868(undefined1 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  short sVar2;
  short extraout_var;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int in_lo;
  int iStackX_0;
  int iStackX_4;
  int iStackX_8;
  
  puVar5 = param_1;
  if (param_1[5] == '\0') {
    if ((DAT_800bf816 != '\0') && (DAT_800bf817 == '\x02')) {
      param_1[1] = 1;
      func_0x80077e7c(param_1);
      if ((param_1[0x2b] == '\x03') && (DAT_1f800207 == '*')) {
        func_0x80042354(1,1);
        uVar1 = 0x25;
        if (DAT_800bf8cd == -1) {
          uVar1 = 0x26;
        }
        param_1[0x7a] = uVar1;
        param_2 = -0x7feb777c;
        func_0x80040d68();
        param_1[0x70] = 2;
        param_1[6] = 0;
        param_1[5] = param_1[5] + '\x01';
        goto LAB_8011a900;
      }
    }
  }
  else {
    if (param_1[5] != '\x01') {
LAB_8011a900:
      trap(0x1800);
      if (puVar5 == (undefined1 *)0x0) {
        trap(0x1c00);
      }
      if ((puVar5 == (undefined1 *)0xffffffff) && (param_3 * 0x1b + param_2 * -0xa3 == -0x80000000))
      {
        trap(0x1800);
      }
      puVar5 = &stack0xfffffff8;
      func_0x80084470();
      iStackX_0 = iStackX_0 + *(int *)(unaff_s1 + 0x14);
      iStackX_4 = iStackX_4 + *(int *)(unaff_s1 + 0x18);
      iStackX_8 = iStackX_8 + *(int *)(unaff_s1 + 0x1c);
      *(undefined2 *)(param_1 + 0x2e) = (undefined2)iStackX_0;
      *(undefined2 *)(param_1 + 0x32) = (undefined2)iStackX_4;
      *(undefined2 *)(param_1 + 0x36) = (undefined2)iStackX_8;
      if (0 < *(short *)(param_1 + 100)) {
        *(short *)(param_1 + 100) = *(short *)(param_1 + 100) + -1;
      }
      *(undefined2 *)(param_1 + 0x60) = 0;
      if (*(short *)(param_1 + 0x62) < 0x101) {
        *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x62) + 0xc;
      }
      func_0x80083f50((int)*(short *)(param_1 + 0x42));
      *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x62) + extraout_var;
      *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 0x199;
      if (*(byte *)(unaff_s2 + 0x2b) < 2) {
        if ((param_1[3] == '\x01') && (3 < DAT_800e7eaa)) {
          return;
        }
        param_1[1] = 1;
        sVar2 = func_0x80077e7c();
        while( true ) {
          iVar3 = *(int *)((int)register0x00000074 + 0x7e74);
          uVar4 = *(undefined4 *)(param_1 + 0xc0);
          *(short *)(in_lo + -0x2f68) = sVar2 + 1;
          *(int *)((int)register0x00000074 + 0x7e74) = iVar3 + -4;
          *(undefined4 *)(iVar3 + -4) = uVar4;
          if (3 < unaff_s2) break;
          param_1 = puVar5 + unaff_s3;
          puVar5 = puVar5 + 4;
          unaff_s2 = unaff_s2 + 1;
          sVar2 = *(short *)(in_lo + -0x2f68);
        }
        *(char *)(unaff_s3 + 9) = *(char *)(unaff_s3 + 9) + -4;
        *(char *)(unaff_s3 + 8) = *(char *)(unaff_s3 + 8) + -4;
        FUN_8012ce0c();
        return;
      }
      param_1[5] = param_1[5] + '\x01';
      *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x32);
      *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_1 + 0x36);
      FUN_80123c14();
      return;
    }
    param_1[1] = 1;
    func_0x80077e7c();
    func_0x80041098(param_1);
    if (param_1[0x70] == -1) {
      param_1[5] = 0;
    }
  }
  if (param_1[1] != '\0') {
    func_0x8004190c(param_1);
  }
  return;
}

