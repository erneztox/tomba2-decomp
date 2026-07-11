// FUN_080186a4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080186a4(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_2 + 3) == '\x02') {
    iVar2 = (int)((0x2741 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
    iVar3 = (int)((0x209e - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10;
    uVar1 = func_0x00084080(iVar2 * iVar2 + iVar3 * iVar3);
    if (uVar1 < 0xf1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (((*(char *)(param_2 + 0x47) != '\0') &&
           (iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x2e) -
                          (uint)*(ushort *)(*(int *)(param_2 + 0xc4) + 0x2c)) * 0x10000) >> 0x10,
           iVar3 = (int)(((*(ushort *)(param_1 + 0x36) + 100) -
                         (uint)*(ushort *)(*(int *)(param_2 + 0xc4) + 0x34)) * 0x10000) >> 0x10,
           uVar4 = func_0x00084080(iVar2 * iVar2 + iVar3 * iVar3),
           (int)(uVar4 & 0xffff) <= *(short *)(param_1 + 0x80) + 0xb4)) &&
          ((int)(((uint)*(ushort *)(param_1 + 0x32) -
                 (uint)*(ushort *)(*(int *)(param_2 + 0xc4) + 0x30)) +
                 (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
           (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
    DAT_1f800182 = 0;
    _DAT_1f800080 = param_2;
    *(undefined1 *)(param_2 + 0x2b) = 1;
  }
  return;
}

