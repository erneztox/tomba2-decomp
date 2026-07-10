// FUN_000049ec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000049ec(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  short local_28;
  short local_26;
  short local_24;
  undefined2 local_22;
  
  if ((*(byte *)(param_1 + 0x72) & 1) == 0) {
    iVar6 = (uint)*(ushort *)(param_1 + 0x6a) +
            ((int)((uint)*(ushort *)(param_1 + 0x6c) << 0x10) >> 0x14);
    *(short *)(param_1 + 0x6a) = (short)iVar6;
    iVar6 = func_0x0010c36c(*(undefined4 *)(param_1 + 0x60),iVar6 * 0x10000 >> 0x10,&local_28,
                            auStack_48);
    *(int *)(param_1 + 0x60) = iVar6;
    *(undefined2 *)(param_1 + 0xa8) = 0x1000;
    *(undefined2 *)(param_1 + 0xa0) = 0x1000;
    *(undefined2 *)(param_1 + 0x98) = 0x1000;
    *(undefined2 *)(param_1 + 0xa6) = 0;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xa2) = 0;
    *(undefined2 *)(param_1 + 0x9e) = 0;
    *(undefined2 *)(param_1 + 0x9c) = 0;
    *(undefined2 *)(param_1 + 0x9a) = 0;
    func_0x00084eb0(*(short *)(iVar6 + 10) + -0x400,param_1 + 0x98);
    *(int *)(param_1 + 0xac) = (int)local_28;
    *(int *)(param_1 + 0xb4) = (int)local_24;
    *(undefined2 *)(param_1 + 0x6a) = local_22;
    *(int *)(param_1 + 0xb0) =
         *(int *)(param_1 + 0xb0) + ((int)((uint)*(ushort *)(param_1 + 0x4a) << 0x10) >> 0x14);
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x47;
    if ((*(char *)(param_1 + 4) == '\x01') && ((int)local_26 < *(int *)(param_1 + 0xb0))) {
      func_0x000521f4(0,0,0x90,1);
      func_0x00074590(0x83,0,0);
      *(undefined2 *)(param_1 + 0x6e) = 0;
      *(undefined2 *)(param_1 + 0x70) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) | 1;
      iVar6 = (int)_DAT_8011bafe;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      iVar6 = -(int)*(short *)(param_1 + 0x8a) - (iVar6 + 0x17);
      *(int *)(param_1 + 0xac) =
           *(int *)(param_1 + 0xac) + (iVar6 * *(short *)(param_1 + 0x9a) >> 0xc);
      *(int *)(param_1 + 0xb0) =
           *(int *)(param_1 + 0xb0) + (iVar6 * *(short *)(param_1 + 0xa0) >> 0xc);
      *(int *)(param_1 + 0xb4) =
           *(int *)(param_1 + 0xb4) + (iVar6 * *(short *)(param_1 + 0xa6) >> 0xc);
    }
    return;
  }
  local_88 = *(undefined4 *)(param_1 + 0x98);
  local_84 = *(int *)(param_1 + 0x9c);
  local_80 = *(undefined4 *)(param_1 + 0xa0);
  local_7c = *(undefined4 *)(param_1 + 0xa4);
  local_78 = *(undefined4 *)(param_1 + 0xa8);
  local_74 = *(undefined4 *)(param_1 + 0xac);
  iVar7 = *(int *)(param_1 + 0xb0);
  local_6c = *(undefined4 *)(param_1 + 0xb4);
  iVar6 = (uint)*(ushort *)(param_1 + 0x6a) +
          ((int)((uint)*(ushort *)(param_1 + 0x6c) << 0x10) >> 0x14);
  *(short *)(param_1 + 0x6a) = (short)iVar6;
  local_70 = iVar7;
  uVar2 = func_0x0010c060(*(undefined4 *)(param_1 + 0x60),iVar6 * 0x10000 >> 0x10,param_1 + 100,
                          &local_88);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  iVar6 = (int)*(short *)(param_1 + 0x6e);
  if ((0x2aa < iVar6) || (iVar6 < -0x2aa)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar6 = func_0x00083e80((iVar6 << 10) / 0x2aa);
  iVar6 = iVar6 * 0x2aa >> 0xc;
  func_0x00051794(auStack_68);
  func_0x00084d10(iVar6,auStack_68);
  func_0x00084250(&local_88,auStack_68);
  func_0x0010bbb8(param_1,&local_88,iVar6);
  if (0x1000 < *(short *)(param_1 + 0x6e)) {
    *(undefined2 *)(param_1 + 0x6e) = 0x1000;
  }
  if (*(short *)(param_1 + 0x6e) < -0x1000) {
    *(undefined2 *)(param_1 + 0x6e) = 0xf000;
  }
  uVar1 = *(ushort *)(param_1 + 0x6e);
  iVar3 = func_0x00085690((int)(short)local_7c,(int)(short)local_88);
  iVar6 = iVar3 - (uint)*(ushort *)(param_1 + 0x74);
  iVar5 = iVar6 * 0x10000 >> 0x10;
  if (iVar5 < -0x800) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0x800 < iVar5) {
    iVar6 = iVar6 + -0x1000;
  }
  *(short *)(param_1 + 0x74) = (short)iVar3;
  *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + (*(short *)(param_1 + 0x70) >> 4);
  sVar4 = *(short *)(param_1 + 0x70) +
          (short)(((int)*(short *)(param_1 + 0x6c) * (iVar6 * 0x10000 >> 0x10) >> 6) * 3 >> 5);
  *(short *)(param_1 + 0x70) = sVar4;
  *(short *)(param_1 + 0x70) = sVar4 + *(short *)(param_1 + 0x76) * 0xe;
  if ((int)((uint)(uVar1 ^ *(ushort *)(param_1 + 0x6e)) << 0x10) < 0) {
    iVar6 = (int)*(short *)(param_1 + 0x70) >> 1;
    *(short *)(param_1 + 0x70) = (short)iVar6;
    if (*(char *)(param_1 + 4) == '\x01') {
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (200 < iVar6) {
        func_0x000521f4(0,0,0x90,1);
      }
    }
  }
  if (0 < *(short *)(param_1 + 0x6e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + 0x44;
  uVar1 = *(short *)(param_1 + 0x70) - 3;
  if (*(short *)(param_1 + 0x70) < 1) {
    uVar1 = *(short *)(param_1 + 0x70) + 3;
    *(ushort *)(param_1 + 0x70) = uVar1;
    if (0 < (int)((uint)uVar1 << 0x10)) {
      *(undefined2 *)(param_1 + 0x70) = 0;
    }
  }
  else {
    *(ushort *)(param_1 + 0x70) = uVar1;
    if ((int)((uint)uVar1 << 0x10) < 0) {
      *(undefined2 *)(param_1 + 0x70) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uVar1 = *(ushort *)(param_1 + 0x70);
  if (-1 < (int)((uint)(uVar1 ^ *(ushort *)(param_1 + 0x6e)) << 0x10)) {
    *(ushort *)(param_1 + 0x70) = uVar1 - (short)((short)uVar1 * 3 >> 3);
  }
  if (local_84 < 0) {
    func_0x00083e80(local_84 >> 0x12);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar6 = func_0x00083e80(local_84 >> 0x12);
  *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + (short)(iVar6 * 0x35 >> 0xc);
  iVar6 = (int)*(short *)(param_1 + 0x6e);
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  if (0 < iVar6 + -0x71) {
    *(short *)(param_1 + 0x6c) =
         *(short *)(param_1 + 0x6c) - (short)(((iVar6 + -0x71) * 0x28) / 0x239);
    if (*(short *)(param_1 + 0x6e) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) | 2;
    func_0x0010c678(param_1,0xffffff60);
    func_0x0010c678(param_1,0xffffff60);
    if (*(char *)(param_1 + 4) == '\x01') {
      iVar6 = (uint)*(ushort *)(param_1 + 0x7a) +
              ((int)((uint)*(ushort *)(param_1 + 0x6c) << 0x10) >> 0x14);
      sVar4 = (short)iVar6;
      *(short *)(param_1 + 0x7a) = sVar4;
      if (0x4e2 < iVar6 * 0x10000 >> 0x10) {
        *(short *)(param_1 + 0x7a) = sVar4 + -0x4e2;
        func_0x00074590(0x82,0,0xffffffbf);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x72) & 8) != 0) {
    func_0x0010c678(param_1,0xa0);
    func_0x0010c678(param_1,0xffffff60);
    func_0x0010c678(param_1,0xa0);
    func_0x0010c678(param_1,0xffffff60);
    *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) | 6;
    if ((*(ushort *)(param_1 + 0x40) & 3) == 0) {
      func_0x00074590(0x82,0,0xffffffbf);
    }
    *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + -0x30;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    iVar6 = (uint)*(ushort *)(param_1 + 0x78) +
            ((int)((uint)*(ushort *)(param_1 + 0x6c) << 0x10) >> 0x14);
    sVar4 = (short)iVar6;
    *(short *)(param_1 + 0x78) = sVar4;
    if (0x8ca < iVar6 * 0x10000 >> 0x10) {
      *(short *)(param_1 + 0x78) = sVar4 + -0x8ca;
      func_0x00074590(0x80,0,0xffffffec);
    }
  }
  if ((iVar7 + *(short *)(param_1 + 0x4a) + 0x8d < local_70) && (local_84 < 0)) {
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *(undefined2 *)(param_1 + 0x70) = 0;
    *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xfe;
    *(short *)(param_1 + 0x4a) = (short)local_70 - (short)iVar7;
    func_0x0010bbb8(param_1,&local_88,0);
    *(undefined4 *)(param_1 + 0x98) = local_88;
    *(int *)(param_1 + 0x9c) = local_84;
    *(undefined4 *)(param_1 + 0xa0) = local_80;
    *(undefined4 *)(param_1 + 0xa4) = local_7c;
    *(undefined4 *)(param_1 + 0xa8) = local_78;
    *(undefined4 *)(param_1 + 0xac) = local_74;
    *(int *)(param_1 + 0xb0) = local_70;
    *(undefined4 *)(param_1 + 0xb4) = local_6c;
  }
  else {
    *(short *)(param_1 + 0x4a) = (short)local_70 - (short)iVar7;
    *(undefined4 *)(param_1 + 0x98) = local_88;
    *(int *)(param_1 + 0x9c) = local_84;
    *(undefined4 *)(param_1 + 0xa0) = local_80;
    *(undefined4 *)(param_1 + 0xa4) = local_7c;
    *(undefined4 *)(param_1 + 0xa8) = local_78;
    *(undefined4 *)(param_1 + 0xac) = local_74;
    *(int *)(param_1 + 0xb0) = local_70;
    *(undefined4 *)(param_1 + 0xb4) = local_6c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

