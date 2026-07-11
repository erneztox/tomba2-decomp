// FUN_080155ac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080155ac(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = func_0x00022f04();
  if (iVar2 != 0) {
    func_0x0001e860(param_1,param_2,0,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_2 + 0x5e) != '\0') {
    iVar4 = *(int *)(param_2 + 0xfc);
    iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar4 + 0x2c)) * 0x10000)
            >> 0x10;
    iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar4 + 0x34)) * 0x10000)
            >> 0x10;
    uVar3 = func_0x00084080(iVar5 * iVar5 + iVar2 * iVar2);
    bVar1 = false;
    if (((int)(uVar3 & 0xffff) <= *(short *)(param_1 + 0x80) + 0x78) &&
       (bVar1 = false,
       (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(iVar4 + 0x30)) +
             *(ushort *)(param_1 + 0x84) + 0x28 & 0xffff) <= *(short *)(param_1 + 0x86) + 0x50)) {
      _DAT_1f80009c = func_0x00085690(-iVar2,iVar5);
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = func_0x0001dc9c(param_1,param_2,0,0x81);
      if ((uVar3 & 0x80) != 0) {
        DAT_800e7ef9 = 1;
        *(undefined1 *)(param_1 + 0x2b) = 2;
      }
      DAT_1f800182 = 0;
    }
    iVar2 = 8;
    do {
      if ((int)(uint)*(byte *)(param_2 + 8) <= iVar2) {
        return;
      }
      iVar5 = *(int *)(param_2 + iVar2 * 4 + 0xc0);
      iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar5 + 0x2c)) * 0x10000)
              >> 0x10;
      iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar5 + 0x34)) * 0x10000)
              >> 0x10;
      uVar3 = func_0x00084080(iVar6 * iVar6 + iVar4 * iVar4);
      bVar1 = false;
      if (((int)(uVar3 & 0xffff) <= *(short *)(param_1 + 0x80) + 100) &&
         (bVar1 = false,
         (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(iVar5 + 0x30)) +
               *(ushort *)(param_1 + 0x84) + 0x28 & 0xffff) <= *(short *)(param_1 + 0x86) + 0x50)) {
        _DAT_1f80009c = func_0x00085690(-iVar4,iVar6);
        bVar1 = true;
      }
      iVar2 = iVar2 + 1;
      if (bVar1) {
        uVar3 = func_0x0001e860(param_1,param_2,0,1);
        if ((uVar3 & 0x80) != 0) {
          DAT_800e7ef9 = 1;
          *(undefined1 *)(param_1 + 0x2b) = 2;
        }
        DAT_1f800182 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    } while (iVar2 < 0xf);
  }
  return;
}

