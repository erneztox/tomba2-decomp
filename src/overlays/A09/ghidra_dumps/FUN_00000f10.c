// FUN_00000f10

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f10(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  *(undefined2 *)(param_1 + 8) = 0;
  pcVar5 = *(char **)(param_2 * 4 + -0x7fef1fbc);
  if (*pcVar5 != -1) {
    pcVar4 = pcVar5 + 0xc;
    do {
      if ((param_2 == 0) || (*(short *)(param_1 + 8) < 0xf)) {
        bVar1 = pcVar4[-2];
        if (bVar1 == 1) {
          _DAT_800bf814 = *(undefined2 *)(pcVar4 + -4);
          _DAT_800bf812 = *(undefined2 *)(pcVar4 + -6);
          _DAT_800bf810 = *(undefined2 *)(pcVar4 + -8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (1 < bVar1) {
          if (bVar1 != 2) {
            halt_baddata();
          }
          if (((int)(uint)DAT_800bfa3d >> ((byte)pcVar4[-9] & 0x1f) & 1U) != 0) goto LAB_0000108c;
        }
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
          if (param_2 != 0) {
            *(int *)(param_1 + *(short *)(param_1 + 8) * 4 + 0xc) = iVar3;
            *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
          }
        }
      }
LAB_0000108c:
      pcVar5 = pcVar5 + 0x10;
      pcVar4 = pcVar4 + 0x10;
    } while (*pcVar5 != -1);
  }
  return;
}

