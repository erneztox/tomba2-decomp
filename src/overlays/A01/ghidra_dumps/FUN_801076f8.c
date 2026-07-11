// FUN_801076f8

void FUN_801076f8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0xc0);
  iVar1 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar5 + 0x2c)) * 0x10000) >>
          0x10;
  iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar5 + 0x34)) * 0x10000) >>
          0x10;
  uVar3 = func_0x80084080(iVar1 * iVar1 + iVar2 * iVar2);
  if (((int)(uVar3 & 0xffff) <=
       ((int)*(short *)(param_1 + 0x82) - (int)*(short *)(param_1 + 0x80)) +
       (int)*(short *)(param_2 + 0x80)) &&
     (sVar4 = *(short *)(param_2 + 0x84) + (*(short *)(param_1 + 0x86) - *(short *)(param_1 + 0x84))
     , (int)(uint)(ushort)((*(short *)(param_1 + 0x32) - *(short *)(iVar5 + 0x30)) + sVar4) <=
       (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
    *(short *)(param_1 + 0x32) = *(short *)(iVar5 + 0x30) - sVar4;
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  return;
}

