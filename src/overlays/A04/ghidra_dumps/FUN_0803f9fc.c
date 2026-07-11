// FUN_0803f9fc

int FUN_0803f9fc(int param_1,undefined1 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  iVar2 = func_0x0007a980(1,2,0);
  iVar3 = 0;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x801387f4;
    *(int *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 2) = 0x31;
    *(undefined1 *)(iVar2 + 3) = param_2;
    *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    *(short *)(iVar2 + 0x2e) =
         (short)((*(int *)(*(int *)(param_1 + 0xd8) + 0x2c) +
                 *(int *)(*(int *)(param_1 + 0xe4) + 0x2c)) / 2);
    sVar4 = (short)((*(int *)(*(int *)(param_1 + 0xd8) + 0x30) +
                    *(int *)(*(int *)(param_1 + 0xe4) + 0x30)) / 2);
    *(short *)(iVar2 + 0x32) = sVar4;
    sVar1 = sVar4 + -100;
    if (*(short *)(param_1 + 0xb8) == 0x1000) {
      sVar1 = sVar4 + -0x82;
    }
    *(short *)(iVar2 + 0x32) = sVar1;
    *(short *)(iVar2 + 0x36) =
         (short)((*(int *)(*(int *)(param_1 + 0xd8) + 0x34) +
                 *(int *)(*(int *)(param_1 + 0xe4) + 0x34)) / 2);
    iVar3 = iVar2;
  }
  return iVar3;
}

