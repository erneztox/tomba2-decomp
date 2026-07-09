// FUN_801119e8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_801119e8(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined2 *unaff_s0;
  undefined1 *puVar8;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  puVar8 = &DAT_800ecf58;
  iVar7 = -0x7feb7a08;
  iVar2 = func_0x800519e0(param_1,0x11,_DAT_800ecf94);
  uVar5 = _DAT_800ecfa8;
  if (iVar2 != 0) {
    return;
  }
  iVar2 = -0x7feb3640;
  iVar6 = -0x7feb7980;
  *(undefined1 *)((int)unaff_s0 + 0xb) = 0;
  unaff_s0[0x2c] = 0;
  unaff_s0[0x2b] = 0;
  unaff_s0[0x2a] = 0;
  *(undefined1 *)(unaff_s0 + 0x5f) = 0;
  *(undefined4 *)(unaff_s0 + 0x1e) = uVar5;
  puVar4 = unaff_s0;
  func_0x80040cdc();
  if (*(char *)((int)unaff_s0 + 3) != '\0') {
    unaff_s0[0x2b] = 0x800;
    *(undefined1 *)unaff_s0 = 9;
    unaff_s0[0x40] = 0x50;
    unaff_s0[0x41] = 0xa0;
    *(undefined1 *)((int)unaff_s0 + 0x7b) = 0;
    unaff_s0[0x42] = 0x80;
    unaff_s0[0x43] = 0x120;
    func_0x80041718();
    *(char *)(unaff_s0 + 2) = *(char *)(unaff_s0 + 2) + '\x01';
    while( true ) {
      *(undefined2 *)(*(int *)(puVar8 + 0xc0) + 2) = *unaff_s0;
      *(undefined2 *)(*(int *)(puVar8 + 0xc0) + 4) = unaff_s0[1];
      *(undefined2 *)(*(int *)(puVar8 + 0xc0) + 8) = unaff_s0[2];
      *(undefined2 *)(*(int *)(puVar8 + 0xc0) + 10) = unaff_s0[3];
      *(undefined2 *)(*(int *)(puVar8 + 0xc0) + 0xc) = unaff_s0[4];
      *(int *)(*(int *)(puVar8 + 0xc0) + 0x40) =
           unaff_s4 + *(int *)((short)unaff_s0[5] * 4 + unaff_s5);
      if ((int)(uint)*(byte *)(unaff_s3 + 8) <= unaff_s2) break;
      unaff_s2 = unaff_s2 + 1;
      iVar2 = func_0x8007aae8();
      *(int *)(puVar8 + 0xc4) = iVar2;
      puVar4 = unaff_s0 + 7;
      *(undefined2 *)(iVar2 + 6) = unaff_s0[6];
      unaff_s0 = unaff_s0 + 8;
      **(undefined2 **)(puVar8 + 0xc4) = *puVar4;
      puVar8 = puVar8 + 4;
    }
    *(undefined2 *)(unaff_s3 + 0x54) = 0;
    *(undefined2 *)(unaff_s3 + 0x58) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(unaff_s3 + 3)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      return;
    }
  }
  unaff_s0[0x40] = 200;
  *(char *)unaff_s0 = (char)unaff_s2;
  unaff_s0[0x41] = 400;
  *(char *)((int)unaff_s0 + 0x7b) = (char)unaff_s2;
  unaff_s0[0x21] = (short)puVar4;
  if (1 < *(byte *)(unaff_s2 + 0x2b)) {
    *(char *)((int)unaff_s0 + 5) = *(char *)((int)unaff_s0 + 5) + '\x01';
    unaff_s0[0x24] = unaff_s0[0x17];
    unaff_s0[0x25] = unaff_s0[0x19];
    unaff_s0[0x26] = unaff_s0[0x1b];
    FUN_80123c14();
    return;
  }
  if ((*(char *)((int)unaff_s0 + 3) == '\x01') && (3 < DAT_800e7eaa)) {
    return;
  }
  *(undefined1 *)((int)unaff_s0 + 1) = 1;
  sVar1 = func_0x80077e7c();
  while( true ) {
    iVar3 = *(int *)(iVar6 + 0x7e74);
    uVar5 = *(undefined4 *)(unaff_s0 + 0x60);
    *(short *)(iVar7 + -0x2f68) = sVar1 + 1;
    *(int *)(iVar6 + 0x7e74) = iVar3 + -4;
    *(undefined4 *)(iVar3 + -4) = uVar5;
    if (3 < unaff_s2) break;
    unaff_s0 = (undefined2 *)(unaff_s3 + iVar2);
    iVar2 = iVar2 + 4;
    unaff_s2 = unaff_s2 + 1;
    sVar1 = *(short *)(iVar7 + -0x2f68);
  }
  *(char *)(unaff_s3 + 9) = *(char *)(unaff_s3 + 9) + -4;
  *(char *)(unaff_s3 + 8) = *(char *)(unaff_s3 + 8) + -4;
  FUN_8012ce0c();
  return;
}

