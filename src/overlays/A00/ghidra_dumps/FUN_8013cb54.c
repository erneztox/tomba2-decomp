// FUN_8013cb54

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013cb54(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  bVar1 = param_1[7];
  iVar3 = *(int *)(param_1 + 0x14);
  if (bVar1 == 1) {
LAB_8013cbc0:
                    /* WARNING: Subroutine does not return */
    FUN_801402b8(param_1,0x1c,0);
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_801406e4(param_1);
      goto LAB_8013cbc0;
    }
  }
  else if (bVar1 == 2) {
    *(short *)(param_1 + 0x2e) = *(short *)(iVar3 + 0x2c) + 0x28;
    *(short *)(param_1 + 0x32) = *(short *)(iVar3 + 0x30) + -0xcd;
    uVar2 = *(undefined2 *)(iVar3 + 0x34);
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x36) = uVar2;
    if ((*(short *)(iVar4 + 0x7a) != 2) && (*(short *)(iVar4 + 0x7a) != 6)) {
      if ((*(short *)(iVar4 + 0x6c) == 2) && (*(byte *)(iVar4 + 0x5e) - 2 < 2)) {
        if (*(byte *)(iVar4 + 0x5e) == 2) {
          param_1[0x2b] = 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[0x2b] = 0;
        *(undefined4 *)(param_1 + 4) = 2;
        if ((param_1[0x1b] & 0x40) == 0) {
          func_0x800331d8(param_1,*(undefined4 *)(param_1 + 0xc4),0xffffff9c,0);
          param_1[0x1b] = param_1[0x1b] | 0x40;
          *param_1 = 7;
        }
      }
      return;
    }
    param_1[0x2b] = 0;
    *(undefined4 *)(param_1 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

