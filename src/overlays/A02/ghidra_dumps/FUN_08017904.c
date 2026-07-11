// FUN_08017904

/* WARNING: Control flow encountered bad instruction data */

uint FUN_08017904(int param_1,int param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0x32;
  if ((*(byte *)(param_1 + 0xd) & 0x10) != 0) {
    iVar3 = 0x5a;
  }
  uVar2 = 0;
  if ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
            (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
      (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
    uVar2 = 0;
    if ((int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c)) +
              iVar3 + (uint)*(ushort *)(param_2 + 0x80) & 0xffff) <=
        iVar3 * 2 + (int)*(short *)(param_2 + 0x82)) {
      if (*(char *)(param_3 + 0x3e) == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar2 = 0;
      if ((iVar3 + ((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34)) + 0x8c &
          0xffff) <= iVar3 * 2 + 0x118U) {
        sVar1 = *(short *)(param_3 + 0x34) + 0x8c;
        if ((*(short *)(param_3 + 0x34) + 0x8c < (int)*(short *)(param_1 + 0x36)) ||
           (sVar1 = *(short *)(param_3 + 0x34) + -0x8c,
           (int)*(short *)(param_1 + 0x36) < *(short *)(param_3 + 0x34) + -0x8c)) {
          *(short *)(param_1 + 0x36) = sVar1;
        }
        if ((*(char *)(param_3 + 0x3e) == '\x01') &&
           ((int)*(short *)(param_3 + 0x2c) + (int)*(short *)(param_2 + 0x80) + -200 <=
            (int)*(short *)(param_1 + 0x2e))) {
          iVar3 = (int)((uint)*(ushort *)(param_1 + 0x56) * -0x100000) >> 0x10;
          if (iVar3 < 0) {
            iVar3 = -iVar3;
          }
          if ((iVar3 < 0x2001) && (*(byte *)(param_1 + 5) < 2)) {
            *(undefined1 *)(param_1 + 5) = 5;
            *(undefined1 *)(param_1 + 6) = 1;
            *(undefined1 *)(param_1 + 7) = 0;
          }
        }
        uVar2 = 0;
        if ((*(byte *)(param_1 + 0x145) & 1) == 0) {
          *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + -10;
          uVar2 = (uint)*(ushort *)(param_3 + 0x30);
          if (((int)*(short *)(param_3 + 0x30) - (int)*(short *)(param_2 + 0x84)) -
              (int)*(short *)(param_1 + 0x84) <= (int)*(short *)(param_1 + 0x32)) {
            *(ushort *)(param_1 + 0x32) =
                 (*(ushort *)(param_3 + 0x30) - *(short *)(param_2 + 0x84)) -
                 *(short *)(param_1 + 0x84);
            uVar2 = func_0x00022c78(param_1);
          }
        }
      }
    }
  }
  return uVar2;
}

