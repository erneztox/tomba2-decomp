// FUN_8011d55c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011d55c(short *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s8;
  undefined6 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x2f);
  uVar2 = (uint)(bVar1 < 2);
  if (bVar1 == 1) {
    uVar4 = FUN_80124a38(param_1);
    goto LAB_801265f0;
  }
  if (uVar2 == 0) {
    uVar2 = 2;
    if (bVar1 == 2) {
      FUN_80124cf8(param_1);
      func_0x800735f4(param_1,0x6a);
      return;
    }
  }
  else if (bVar1 == 0) {
    uVar2 = 0x800c0000;
    if (*(char *)((int)param_1 + 5) == '\0') {
      uVar2 = (uint)DAT_800bf916;
      if (uVar2 == 1) {
        *(byte *)((int)param_1 + 5) = DAT_800bf916;
        iVar3 = func_0x800313a0(0x20a,param_1 + 0x16,0xffffffe0,param_1 + 0x2a);
        goto LAB_801265c0;
      }
    }
    else {
      if (*(char *)((int)param_1 + 5) != '\x01') {
        *(undefined1 *)((int)param_1 + 1) = 0;
        goto LAB_801265f8;
      }
      if (1 < DAT_800bf916) {
        *(undefined1 *)(param_1 + 0x2f) = 1;
        *(undefined1 *)((int)param_1 + 5) = 0;
      }
      uVar2 = _DAT_1f80017c & 0xf;
      if ((_DAT_1f80017c & 0xf) == 0) {
        uVar2 = func_0x80074590(0xd,0xffffffe3,0);
      }
    }
    *(undefined1 *)((int)param_1 + 1) = 0;
  }
LAB_801265f8:
  do {
    unaff_s1 = unaff_s1 + 1;
    param_1 = param_1 + uVar2;
    if (unaff_s4 < unaff_s1) {
      do {
        unaff_s2 = unaff_s2 + 1;
        if (unaff_s8 < unaff_s2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      } while ((unaff_s2 < 0) || (*(short *)(unaff_s3 + 10) <= unaff_s2));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*param_1 != -1) {
      if (DAT_80139000 != '\0') {
        iVar3 = FUN_8012f864(unaff_s1);
        iVar3 = iVar3 << 0x10;
LAB_801265c0:
        if (iVar3 == 0) goto LAB_801265f4;
      }
      bVar1 = *(byte *)(unaff_s3 + 6);
      if (bVar1 < 0xfe) {
        *(byte *)(unaff_s3 + 6) = bVar1 + 1;
        uVar4 = CONCAT24(*param_1,unaff_s3 + (uint)bVar1 * 2);
LAB_801265f0:
        *(short *)((int)uVar4 + 0x10) = (short)((uint6)uVar4 >> 0x20);
      }
    }
LAB_801265f4:
    uVar2 = (uint)*(short *)(unaff_s3 + 10);
  } while( true );
}

