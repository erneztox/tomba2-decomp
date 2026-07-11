// FUN_08013290

/* WARNING: Control flow encountered bad instruction data */

void FUN_08013290(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
          >> 0x10;
  iVar2 = (int)((*(ushort *)(param_1 + 0x36) - 0x1040) * 0x10000) >> 0x10;
  uVar3 = func_0x00084080(iVar1 * iVar1 + iVar2 * iVar2);
  if ((((int)(uVar3 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80))
      && ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
                (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
          (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) &&
     (DAT_800e7e84 == '\x01')) {
    if ((*param_2 == '\x01') && ((*(byte *)(param_1 + 0x46) & 1) == 0)) {
      param_2[0x2b] = '\x01';
      func_0x0001dc9c(param_1,param_2,0,0);
      DAT_1f800137 = 2;
      DAT_800e7e80 = DAT_800e7e80 | 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0001e860(param_1,param_2,0,0);
  }
  return;
}

