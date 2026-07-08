
undefined4 FUN_8001a764(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint in_v0;
  int iVar3;
  undefined1 *puVar4;
  undefined1 unaff_s1;
  undefined1 *unaff_s2;
  undefined1 *unaff_s3;
  char *unaff_s4;
  undefined1 *unaff_s6;
  int unaff_s7;
  byte in_stack_00000010;
  uint in_stack_00000018;
  
  while( true ) {
    if (in_v0 == 0) {
      *DAT_80026b94 = unaff_s1;
      if (*unaff_s4 == '\0') {
        if (unaff_s4[-1] == '\0') {
          if (unaff_s7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_80017e4c(0xffffffff);
          }
          return 0;
        }
        unaff_s2[1] = 0;
        puVar4 = &DAT_80039eb0;
        iVar3 = 7;
        if (unaff_s3 != (undefined1 *)0x0) {
          do {
            uVar1 = *puVar4;
            puVar4 = puVar4 + 1;
            iVar3 = iVar3 + -1;
            *unaff_s3 = uVar1;
            unaff_s3 = unaff_s3 + 1;
          } while (iVar3 != -1);
        }
      }
      else {
        unaff_s2[2] = 0;
        puVar4 = &DAT_80039eb8;
        if (unaff_s3 != (undefined1 *)0x0) {
          iVar3 = 7;
          do {
            uVar1 = *puVar4;
            puVar4 = puVar4 + 1;
            iVar3 = iVar3 + -1;
            *unaff_s3 = uVar1;
            unaff_s3 = unaff_s3 + 1;
          } while (iVar3 != -1);
          uVar2 = FUN_8001a090();
          return uVar2;
        }
      }
      uVar2 = FUN_8001a090();
      return uVar2;
    }
    if (((in_v0 & 4) != 0) && (DAT_800268d4 != (code *)0x0)) {
      (*DAT_800268d4)(*unaff_s6,&DAT_80039eb0);
    }
    if (((in_v0 & 2) != 0) && (DAT_800268d0 != (code *)0x0)) break;
    in_v0 = FUN_8001961c();
  }
  iVar3 = (*DAT_800268d0)(*unaff_s2,&DAT_80039ea8);
  if (iVar3 != 0) {
    if (((DAT_800268dc & 0x10) == 0) && ((in_stack_00000018 & 0x10) != 0)) {
      iRam800268e4 = iRam800268e4 + 1;
    }
    DAT_800268dc = in_stack_00000018 & 0xff;
    DAT_800268e0 = in_stack_00000018 >> 8 & 0xff;
  }
  if ((in_stack_00000010 == 5) && (0 < DAT_800268d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(0x800106ec);
  }
  if (4 < in_stack_00000010 - 1) {
    FUN_8001effc(0x80010714);
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(0x80010728,in_stack_00000010);
  }
                    /* WARNING: Jumptable at 0x8001a070 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)((in_stack_00000010 - 1) * 4 + -0x7ffef8cc))();
  return uVar2;
}

