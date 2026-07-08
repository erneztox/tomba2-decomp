
undefined4 FUN_8001b7c0(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 in_v0;
  byte bVar3;
  undefined4 in_v1;
  int iVar4;
  undefined4 uVar5;
  undefined1 *unaff_s0;
  byte unaff_s1;
  int unaff_s2;
  undefined4 *unaff_s6;
  
  uVar5 = *(undefined4 *)(unaff_s0 + 0xc);
  *unaff_s6 = in_v0;
  unaff_s6[1] = in_v1;
  unaff_s6[2] = param_1;
  unaff_s6[3] = uVar5;
  uVar5 = *(undefined4 *)(unaff_s0 + 0x14);
  unaff_s6[4] = *(undefined4 *)(unaff_s0 + 0x10);
  unaff_s6[5] = uVar5;
  puVar1 = unaff_s0;
  while( true ) {
    bVar3 = (byte)uVar5;
    **(byte **)(puVar1 + 0x6b9c) = bVar3;
    if ((*DAT_80026ba0 & 7) == 0) break;
    *DAT_80026b94 = (char)param_1;
    *DAT_80026ba0 = bVar3;
    puVar1 = &LAB_80020000;
  }
  DAT_80026bae = 0;
  DAT_80026bad = 0;
  DAT_80026bac = 2;
  *DAT_80026b94 = 0;
  *DAT_80026ba0 = 0;
  *DAT_80026ba4 = 0x1325;
  FUN_8001a0c0(1,0,0,0);
  if ((DAT_800268dc & 0x10) != 0) {
    FUN_8001a0c0(1,0,0,0);
  }
  iVar2 = FUN_8001a0c0(10,0,0,0);
  if (((iVar2 != 0) || (iVar2 = FUN_8001a0c0(0xc,0,0,0), iVar2 != 0)) ||
     (iVar2 = FUN_80019b78(0,0), iVar2 != 2)) {
    return 0xffffffff;
  }
  if ((iRam00006b14 == 0) || (unaff_s0 != (undefined1 *)0x0)) {
    FUN_80019b78(0,0);
    if (unaff_s1 == 2) {
      iVar2 = 0;
      puVar1 = unaff_s0;
      do {
        (&DAT_800268e8)[iVar2] = *puVar1;
        iVar2 = iVar2 + 1;
        puVar1 = unaff_s0 + iVar2;
      } while (iVar2 < 4);
    }
    if (unaff_s1 == 0xe) {
      DAT_800268ec = *unaff_s0;
    }
    iVar2 = (uint)unaff_s1 * 4;
    DAT_80026bac = 0;
    if (*(int *)(&DAT_80026a14 + iVar2) != 0) {
      DAT_80026bad = 0;
    }
    *DAT_80026b94 = 0;
    iVar4 = 0;
    puVar1 = unaff_s0;
    if (0 < *(int *)(&DAT_80026b14 + iVar2)) {
      do {
        *DAT_80026b9c = *puVar1;
        iVar4 = iVar4 + 1;
        puVar1 = unaff_s0 + iVar4;
      } while (iVar4 < *(int *)(&DAT_80026b14 + iVar2));
    }
    DAT_800268ed = unaff_s1;
    *DAT_80026b98 = unaff_s1;
    uVar5 = 0;
    if (unaff_s2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_80017e4c(0xffffffff);
    }
  }
  else {
    uVar5 = 0xfffffffe;
    if (0 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(&DAT_80010764,DAT_800268f6);
    }
  }
  return uVar5;
}

