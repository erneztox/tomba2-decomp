// FUN_08017b1c

/* WARNING: Control flow encountered bad instruction data */

uint FUN_08017b1c(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0x32;
  if ((*(byte *)(param_1 + 0xd) & 0x10) != 0) {
    iVar4 = 0x5a;
  }
  uVar3 = 0;
  if ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
            (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
      (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
    uVar1 = *(ushort *)(param_2 + 0x80);
    uVar3 = 0;
    if (((int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c)) +
               iVar4 + (uint)uVar1 & 0xffff) <= iVar4 * 2 + (int)*(short *)(param_2 + 0x82)) &&
       (uVar3 = 0,
       (iVar4 + ((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34)) + 0x8c &
       0xffff) <= iVar4 * 2 + 0x118U)) {
      if (*(int *)(param_3 + 0x2c) + (int)(short)uVar1 < (int)(short)*(ushort *)(param_1 + 0x2e)) {
        *(ushort *)(param_1 + 0x2e) = *(ushort *)(param_3 + 0x2c) + uVar1;
      }
      if ((ushort)((*(short *)(param_1 + 0x2e) - *(short *)(*(int *)(param_2 + 0xe8) + 0x2c)) +
                  0x8cU) < 0x119) {
        if ((int)*(short *)(param_1 + 0x36) < *(short *)(param_3 + 0x34) + -0x8c) {
          *(short *)(param_1 + 0x36) = *(short *)(param_3 + 0x34) + -0x8c;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        sVar2 = *(short *)(param_3 + 0x34) + 0x8c;
        if ((*(short *)(param_3 + 0x34) + 0x8c < (int)*(short *)(param_1 + 0x36)) ||
           (sVar2 = *(short *)(param_3 + 0x34) + -0x8c,
           (int)*(short *)(param_1 + 0x36) < *(short *)(param_3 + 0x34) + -0x8c)) {
          *(short *)(param_1 + 0x36) = sVar2;
        }
      }
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + -10;
      uVar3 = (uint)*(ushort *)(param_3 + 0x30);
      if (((int)*(short *)(param_3 + 0x30) - (int)*(short *)(param_2 + 0x84)) -
          (int)*(short *)(param_1 + 0x84) <= (int)*(short *)(param_1 + 0x32)) {
        *(ushort *)(param_1 + 0x32) =
             (*(ushort *)(param_3 + 0x30) - *(short *)(param_2 + 0x84)) - *(short *)(param_1 + 0x84)
        ;
        uVar3 = func_0x00022c78(param_1);
      }
    }
  }
  return uVar3;
}

