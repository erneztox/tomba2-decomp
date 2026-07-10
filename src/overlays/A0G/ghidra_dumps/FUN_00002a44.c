// FUN_00002a44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002a44(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  *(undefined2 *)(param_1 + 8) = 0;
  pcVar4 = *(char **)(param_2 * 4 + -0x7fef2a78);
  if (*pcVar4 != -1) {
    pcVar3 = pcVar4 + 0xc;
    do {
      if ((param_2 == 0) || (*(short *)(param_1 + 8) < 0xf)) {
        if ((pcVar3[-2] != '\0') && (pcVar3[-2] == '\x01')) {
          _DAT_800bf810 = *(undefined2 *)(pcVar3 + -8);
          _DAT_800bf812 = *(undefined2 *)(pcVar3 + -6);
          _DAT_800bf814 = *(undefined2 *)(pcVar3 + -4);
        }
        iVar2 = func_0x00072ddc(param_1,*pcVar4,pcVar3[-0xb],pcVar3[-10]);
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x2c) = (int)*(short *)(pcVar3 + -8) << 0x10;
          *(int *)(iVar2 + 0x30) = (int)*(short *)(pcVar3 + -6) << 0x10;
          *(int *)(iVar2 + 0x34) = (int)*(short *)(pcVar3 + -4) << 0x10;
          cVar1 = pcVar3[-9];
          *(undefined2 *)(iVar2 + 0x54) = 0;
          *(undefined2 *)(iVar2 + 0x56) = 0;
          *(undefined2 *)(iVar2 + 0x58) = 0;
          *(char *)(iVar2 + 3) = cVar1;
          *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)pcVar3;
          if (param_2 != 0) {
            *(int *)(param_1 + *(short *)(param_1 + 8) * 4 + 0xc) = iVar2;
            *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
          }
        }
      }
      pcVar4 = pcVar4 + 0x10;
      pcVar3 = pcVar3 + 0x10;
    } while (*pcVar4 != -1);
  }
  return;
}

