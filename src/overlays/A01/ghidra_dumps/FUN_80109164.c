// FUN_80109164

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80109164(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[3];
    if (bVar1 < 8) {
      if (5 < bVar1) {
        func_0x8007778c(param_1);
        FUN_8011276c();
        return;
      }
      if (bVar1 == 2) {
        func_0x8007778c(param_1);
        FUN_801125cc(param_1);
        return;
      }
      if (2 < bVar1) {
LAB_801095b0:
        func_0x8007778c(param_1);
        func_0x80077b5c(param_1);
        if (param_1[5] == '\0') {
          FUN_80112a8c(param_1);
          FUN_8011276c();
          return;
        }
        if (param_1[5] == '\x01') {
          FUN_80112bb8(param_1);
          FUN_8011276c();
          return;
        }
        FUN_8011276c();
        return;
      }
      if (bVar1 != 0) {
        if (bVar1 != 1) {
          FUN_8011276c();
          return;
        }
        if (DAT_800bf816 == '\0') goto LAB_801097c0;
      }
      iVar4 = func_0x8007778c(param_1);
      if (iVar4 != 0) {
        func_0x800517f8(param_1);
        func_0x8004b374(param_1,1);
        FUN_8011276c();
        return;
      }
    }
    else {
      if (bVar1 == 9) {
        param_1[1] = 1;
        func_0x80077efc(param_1);
        func_0x8004b374(param_1,0);
        FUN_8011276c();
        return;
      }
      if (bVar1 < 9) {
        func_0x8007778c(param_1);
        FUN_801125cc(param_1);
        return;
      }
      if (bVar1 < 0x85) {
        if (bVar1 < 0x83) {
          FUN_8011276c();
          return;
        }
        goto LAB_801095b0;
      }
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8011276c();
      return;
    }
    bVar1 = param_1[3];
    param_1[4] = 1;
    if (bVar1 < 8) {
      if (5 < bVar1) {
        param_1[0xb] = 0x11;
        *(undefined2 *)(param_1 + 0x7a) = 0x1c00;
        *(undefined2 *)(param_1 + 0x7c) = 0x1c00;
        *(undefined2 *)(param_1 + 0x7e) = 0x1c00;
        *(undefined2 *)(param_1 + 0x5a) = 0;
        param_1[0x47] = 0;
        *(undefined2 *)(param_1 + 0x5c) = 0;
        param_1[0xd] = 0;
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
        func_0x80077b38(param_1,0x80139294,0xc);
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x80) = 0x20;
        *(undefined2 *)(param_1 + 0x82) = 0x40;
        *(undefined2 *)(param_1 + 0x84) = 0x20;
        *(undefined2 *)(param_1 + 0x86) = 0x40;
        FUN_8011276c();
        return;
      }
      if (bVar1 == 2) {
        param_1[0xb] = 0x11;
        *(undefined2 *)(param_1 + 0x7a) = 0x1c00;
        *(undefined2 *)(param_1 + 0x7c) = 0x1c00;
        *(undefined2 *)(param_1 + 0x7e) = 0x1c00;
        *(undefined2 *)(param_1 + 0x5a) = 0;
        param_1[0x47] = 0;
        *(undefined2 *)(param_1 + 0x5c) = 0;
        param_1[0xd] = 0;
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
        func_0x80077b38(param_1,0x80139294,4);
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x80) = 0x20;
        *(undefined2 *)(param_1 + 0x82) = 0x40;
        *(undefined2 *)(param_1 + 0x84) = 0x20;
        *(undefined2 *)(param_1 + 0x86) = 0x40;
        func_0x8004b354(param_1,0);
        FUN_8011276c();
        return;
      }
      if (2 < bVar1) {
LAB_801093d0:
        FUN_80111f94(param_1);
        FUN_8011276c();
        return;
      }
      if (bVar1 == 0) {
        iVar4 = func_0x80051b70(param_1,0xc,0x18);
        if (iVar4 == 0) {
          *(undefined2 *)(param_1 + 0x82) = 0x28;
          *(undefined2 *)(param_1 + 0x86) = 0x28;
          *param_1 = 1;
          *(undefined2 *)(param_1 + 0x80) = 0x14;
          *(undefined2 *)(param_1 + 0x84) = 0x14;
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(undefined2 *)(param_1 + 0x56) = 0xc00;
          func_0x8004b354(param_1,1);
          iVar4 = func_0x80072ddc(param_1,0x82,3,0x10);
          if (iVar4 != 0) {
            *(int *)(param_1 + 0x10) = iVar4;
            *(undefined1 *)(iVar4 + 3) = 0;
            *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
            *(undefined2 *)(iVar4 + 0x32) = *(undefined2 *)(param_1 + 0x32);
            sVar2 = *(short *)(param_1 + 0x36);
            *(undefined4 *)(iVar4 + 0x1c) = 0x801156a4;
            *(short *)(iVar4 + 0x36) = sVar2 + 100;
            FUN_8011276c();
            return;
          }
        }
      }
      else {
        if (bVar1 != 1) {
          FUN_8011276c();
          return;
        }
        iVar4 = func_0x80051b70(param_1,(int)_DAT_800a2a76,(int)_DAT_800a2a74);
        if (iVar4 == 0) {
          *param_1 = 1;
          *(ushort *)(param_1 + 0x80) = (ushort)DAT_800a2a78;
          *(ushort *)(param_1 + 0x82) = (ushort)DAT_800a2a78 << 1;
          *(ushort *)(param_1 + 0x84) = (ushort)DAT_800a2a79;
          *(ushort *)(param_1 + 0x86) = (ushort)DAT_800a2a79 << 1;
          uVar3 = _DAT_800a2a7a;
          *(undefined2 *)(param_1 + 0x56) = 0;
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined2 *)(param_1 + 0x58) = 0xf46;
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(undefined2 *)(param_1 + 0x68) = uVar3;
          func_0x8004b354(param_1,1);
          FUN_8011276c();
          return;
        }
      }
    }
    else {
      if (bVar1 == 9) {
        param_1[3] = 0xf;
        func_0x8004a828(param_1);
        func_0x8004b354(param_1,0);
        param_1[0xb] = 0x10;
        param_1[3] = 9;
        *param_1 = 1;
        FUN_8011276c();
        return;
      }
      if (bVar1 < 9) {
        if (DAT_800bf871 == '\x1a') {
          param_1[0xb] = 0x10;
          *(undefined2 *)(param_1 + 0x5a) = 0;
          param_1[0x47] = 0;
          *(undefined2 *)(param_1 + 0x5c) = 0;
          param_1[0xd] = 0;
          *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
          func_0x80077b38(param_1,0x80139294,0xe);
          *param_1 = 1;
          *(undefined2 *)(param_1 + 0x80) = 0x20;
          *(undefined2 *)(param_1 + 0x82) = 0x40;
          *(undefined2 *)(param_1 + 0x84) = 0x20;
          *(undefined2 *)(param_1 + 0x86) = 0x40;
          func_0x8004b354(param_1,0);
          *(undefined2 *)(param_1 + 0x68) = 0x92;
          FUN_8011276c();
          return;
        }
LAB_801097c0:
        param_1[4] = 3;
        FUN_8011276c();
        return;
      }
      if (bVar1 < 0x85) {
        if (bVar1 < 0x83) {
          FUN_8011276c();
          return;
        }
        goto LAB_801093d0;
      }
    }
  }
  else if (bVar1 == 2) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_1[3]) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 3) {
      FUN_8011276c();
      return;
    }
    func_0x8007a624(param_1);
  }
  return;
}

