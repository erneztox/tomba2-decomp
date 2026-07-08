
void FUN_80075f0c(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(short *)(param_1 + 0x88) = *(short *)(param_1 + 0x88) + *(short *)(param_1 + 0x90);
  *(short *)(param_1 + 0x8a) = *(short *)(param_1 + 0x8a) + *(short *)(param_1 + 0x92);
  *(short *)(param_1 + 0x8c) = *(short *)(param_1 + 0x8c) + *(short *)(param_1 + 0x94);
  iVar2 = param_1;
  if (*(char *)(param_1 + 9) != '\0') {
    do {
      if ((int)(uint)*(byte *)(param_1 + 8) <= iVar3) break;
      iVar1 = *(int *)(iVar2 + 0xc0);
      *(short *)(iVar1 + 8) = *(short *)(iVar1 + 8) + *(short *)(iVar1 + 0x10);
      iVar1 = *(int *)(iVar2 + 0xc0);
      *(short *)(iVar1 + 10) = *(short *)(iVar1 + 10) + *(short *)(iVar1 + 0x12);
      iVar1 = *(int *)(iVar2 + 0xc0);
      iVar3 = iVar3 + 1;
      *(short *)(iVar1 + 0xc) = *(short *)(iVar1 + 0xc) + *(short *)(iVar1 + 0x14);
      iVar2 = iVar2 + 4;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 9));
  }
  if (param_2 == 1) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80000000;
  }
  return;
}

