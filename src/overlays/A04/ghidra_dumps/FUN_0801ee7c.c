// FUN_0801ee7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ee7c(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  
  uVar3 = 0;
  if ((_DAT_800bfe56 & 0x10) == 0) {
    do {
      sVar4 = 0x100;
      iVar2 = 0xb5;
      uVar1 = *(undefined1 *)(uVar3 + 0x80140bc4);
      do {
        func_0x00117c58(0x2f0,iVar2,(int)(((uVar3 & 0xf) * 0x10 + 0x280) * 0x10000) >> 0x10,
                        (int)sVar4,uVar1);
        iVar2 = iVar2 + 1;
        sVar4 = sVar4 + 1;
      } while (iVar2 < 0x100);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x10);
    uVar3 = 0;
    do {
      sVar4 = 0x180;
      iVar2 = 0x1b1;
      uVar1 = *(undefined1 *)(uVar3 + 0x80140bc4);
      do {
        func_0x00117c58(0x230,iVar2,(int)(((uVar3 & 0xf) * 0x10 + 0x280) * 0x10000) >> 0x10,
                        (int)sVar4,uVar1);
        iVar2 = iVar2 + 1;
        sVar4 = sVar4 + 1;
      } while (iVar2 < 0x200);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x10);
  }
  return;
}

