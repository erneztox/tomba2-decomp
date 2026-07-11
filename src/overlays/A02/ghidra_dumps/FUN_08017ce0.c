// FUN_08017ce0

int FUN_08017ce0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x32;
  if ((*(byte *)(param_1 + 0xd) & 0x10) != 0) {
    iVar4 = 0x5a;
  }
  iVar3 = 0;
  if ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
            (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
      (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
    iVar3 = 0;
    if ((int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34)) +
              iVar4 + (uint)*(ushort *)(param_2 + 0x80) & 0xffff) <=
        iVar4 * 2 + (int)*(short *)(param_2 + 0x82)) {
      uVar1 = *(ushort *)(param_1 + 0x2e);
      iVar3 = 0;
      if ((iVar4 + ((uint)uVar1 - (uint)*(ushort *)(param_3 + 0x2c)) + 0x8c & 0xffff) <=
          iVar4 * 2 + 0x118U) {
        sVar2 = -0x8c;
        if (((int)(short)uVar1 < *(int *)(param_3 + 0x2c) + -0x8c) ||
           (((int)(short)*(ushort *)(param_1 + 0x36) <
             *(int *)(param_3 + 0x34) + (int)(short)*(ushort *)(param_2 + 0x80) + -0x118 &&
            (sVar2 = 0x8c, *(int *)(param_3 + 0x2c) + 0x8c < (int)(short)uVar1)))) {
          *(ushort *)(param_1 + 0x2e) = *(ushort *)(param_3 + 0x2c) + sVar2;
        }
        if (*(int *)(param_3 + 0x34) + (int)*(short *)(param_2 + 0x80) <
            (int)*(short *)(param_1 + 0x36)) {
          *(short *)(param_1 + 0x36) = *(short *)(param_3 + 0x34) + *(short *)(param_2 + 0x80);
        }
        *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -10;
        iVar3 = (*(int *)(param_3 + 0x30) - (int)*(short *)(param_2 + 0x84)) -
                (int)*(short *)(param_1 + 0x84);
        if (iVar3 <= *(short *)(param_1 + 0x32)) {
          *(short *)(param_1 + 0x32) =
               (*(short *)(param_3 + 0x30) - *(short *)(param_2 + 0x84)) -
               *(short *)(param_1 + 0x84);
          iVar3 = func_0x00022c78(param_1);
        }
      }
    }
  }
  return iVar3;
}

