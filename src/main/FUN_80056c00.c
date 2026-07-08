
void FUN_80056c00(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x29) == '\0' && *(char *)(param_1 + 0x145) == '\0') {
    if ((DAT_800bf80d == '\0') && (DAT_800bf848 != '\0')) {
      FUN_80056d44(param_1,0);
    }
    else {
      sVar1 = *(short *)(param_1 + 0x50) + 0x800;
      *(short *)(param_1 + 0x50) = sVar1;
      if (0x3e00 < sVar1) {
        *(undefined2 *)(param_1 + 0x50) = 0x3e00;
      }
      if (((0x1dff < *(short *)(param_1 + 0x50)) &&
          (*(undefined1 *)(param_1 + 0x148) = 1, param_2 == 0)) &&
         (*(char *)(param_1 + 0x146) != '\x04')) {
        FUN_80056d44(param_1,0);
        if ((*(ushort *)(param_1 + 0x17e) & 0x40) == 0) {
          uVar2 = *(undefined2 *)(param_1 + 0x50);
        }
        else {
          iVar3 = (int)*(short *)(param_1 + 0x50);
          if (iVar3 < 0) {
            iVar3 = iVar3 + 3;
          }
          uVar2 = (undefined2)(iVar3 >> 2);
        }
        *(undefined2 *)(param_1 + 0x4a) = uVar2;
        *(undefined2 *)(param_1 + 0x50) = 0;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
    }
  }
  else {
    if (0x1400 < *(short *)(param_1 + 0x50)) {
      FUN_8005314c();
    }
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x148) = 0;
  }
  return;
}

