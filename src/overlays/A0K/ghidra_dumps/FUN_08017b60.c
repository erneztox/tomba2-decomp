// FUN_08017b60

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017b60(undefined4 param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = *(char **)(param_2 * 4 + -0x7fee364c);
  if (*pcVar5 != -1) {
    pcVar4 = pcVar5 + 0xc;
    do {
      bVar1 = pcVar4[-2];
      if (bVar1 == 1) {
        _DAT_800bf814 = *(undefined2 *)(pcVar4 + -4);
        _DAT_800bf812 = *(undefined2 *)(pcVar4 + -6);
        _DAT_800bf810 = *(undefined2 *)(pcVar4 + -8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
LAB_08017c40:
        iVar3 = func_0x00072ddc(param_1,*pcVar5,pcVar4[-0xb],pcVar4[-10]);
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0x2c) = (int)*(short *)(pcVar4 + -8) << 0x10;
          *(int *)(iVar3 + 0x30) = (int)*(short *)(pcVar4 + -6) << 0x10;
          *(int *)(iVar3 + 0x34) = (int)*(short *)(pcVar4 + -4) << 0x10;
          cVar2 = pcVar4[-9];
          *(undefined2 *)(iVar3 + 0x54) = 0;
          *(undefined2 *)(iVar3 + 0x56) = 0;
          *(undefined2 *)(iVar3 + 0x58) = 0;
          *(char *)(iVar3 + 3) = cVar2;
          *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)pcVar4;
        }
      }
      else {
        if (bVar1 == 2) {
          if (((int)(uint)DAT_800bfa23 >> ((byte)pcVar4[-9] & 0x1f) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          goto LAB_08017c40;
        }
        if (bVar1 != 3) {
          halt_baddata();
        }
        if (DAT_800bf8fb != -1) goto LAB_08017c40;
      }
      pcVar5 = pcVar5 + 0x10;
      pcVar4 = pcVar4 + 0x10;
    } while (*pcVar5 != -1);
  }
  return;
}

