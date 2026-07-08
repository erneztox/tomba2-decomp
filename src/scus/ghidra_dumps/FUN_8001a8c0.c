
undefined4 FUN_8001a8c0(byte param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  if (1 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(&DAT_8001075c,*(undefined4 *)(&DAT_800268f4 + (uint)param_1 * 4));
  }
  if ((*(int *)(&DAT_80026b14 + (uint)param_1 * 4) == 0) || (param_2 != (undefined1 *)0x0)) {
    FUN_80019b78(0,0);
    if (param_1 == 2) {
      iVar3 = 0;
      puVar2 = param_2;
      do {
        (&DAT_800268e8)[iVar3] = *puVar2;
        iVar3 = iVar3 + 1;
        puVar2 = param_2 + iVar3;
      } while (iVar3 < 4);
    }
    if (param_1 == 0xe) {
      DAT_800268ec = *param_2;
    }
    iVar3 = (uint)param_1 * 4;
    DAT_80026bac = 0;
    if (*(int *)(&DAT_80026a14 + iVar3) != 0) {
      DAT_80026bad = 0;
    }
    *DAT_80026b94 = 0;
    iVar4 = 0;
    puVar2 = param_2;
    if (0 < *(int *)(&DAT_80026b14 + iVar3)) {
      do {
        *DAT_80026b9c = *puVar2;
        iVar4 = iVar4 + 1;
        puVar2 = param_2 + iVar4;
      } while (iVar4 < *(int *)(&DAT_80026b14 + iVar3));
    }
    DAT_800268ed = param_1;
    *DAT_80026b98 = param_1;
    uVar1 = 0;
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_80017e4c(0xffffffff);
    }
  }
  else {
    uVar1 = 0xfffffffe;
    if (0 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(&DAT_80010764,*(undefined4 *)(&DAT_800268f4 + (uint)param_1 * 4));
    }
  }
  return uVar1;
}

