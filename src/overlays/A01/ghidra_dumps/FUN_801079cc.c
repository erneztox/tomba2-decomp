// FUN_801079cc

void FUN_801079cc(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  if (*(char *)(param_2 + 3) != '\b') {
    sVar1 = *(short *)(param_2 + 0x84);
    *(short *)(param_2 + 0x84) = sVar1 + 300;
    sVar2 = *(short *)(param_2 + 0x86);
    *(short *)(param_2 + 0x86) = sVar2 + 300;
    iVar4 = func_0x800240fc();
    if (iVar4 != 0) {
      sVar3 = *(short *)(param_1 + 0x4a) + -0x800;
      *(short *)(param_1 + 0x4a) = sVar3;
      if (sVar3 < -0x2000) {
        *(undefined2 *)(param_1 + 0x4a) = 0xe000;
      }
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
    *(short *)(param_2 + 0x84) = sVar1;
    *(short *)(param_2 + 0x86) = sVar2;
  }
  return;
}

