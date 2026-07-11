// FUN_080184d0

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080184d0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c)) * 0x10000)
          >> 0x10;
  iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar1 = func_0x00084080(iVar5 * iVar5 + iVar6 * iVar6);
  uVar2 = 0;
  if ((int)(uVar1 & 0xffff) <= *(short *)(param_1 + 0x80) + 0x244) {
    iVar3 = func_0x00083e80((int)*(short *)(param_3 + 8));
    uVar2 = 0;
    if (((int)((((uint)*(ushort *)(param_3 + 0x30) - (iVar3 * iVar5 >> 0xc)) -
               (*(ushort *)(param_1 + 0x84) + 0x50)) * 0x10000) >> 0x10 <=
         (int)*(short *)(param_1 + 0x32)) && (uVar2 = 1, *(short *)(param_2 + 0x72) == 0)) {
      *(undefined1 *)(param_2 + 0x29) = 4;
      sVar4 = 0x800;
      if (*(char *)(param_1 + 0x5e) != '\0') {
        sVar4 = 0x1200;
      }
      if (0 < iVar6) {
        *(short *)(param_2 + 0x48) = -sVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_2 + 0x48) = sVar4;
      uVar2 = 1;
    }
  }
  return uVar2;
}

