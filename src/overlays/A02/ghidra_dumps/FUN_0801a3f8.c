// FUN_0801a3f8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0801a654) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801a3f8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x000752b4(2);
    _DAT_801390d8 = 0xffffffff;
    _DAT_801390dc = 0xffffffff;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  iVar5 = 0;
  if ((DAT_800bf8be == -1) && (DAT_800bf816 == '\0')) {
    iVar5 = (-0xa8c - (short)_DAT_1f800162) * 0xf >> 9;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    if (DAT_1f800137 == '\x01') {
      iVar5 = iVar5 >> 1;
    }
  }
  iVar5 = func_0x0007496c(_DAT_801390d8,iVar5,iVar5);
  if (iVar5 == 0) {
    _DAT_801390d8 = func_0x00074590(0x83,0,0xffffff81);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00074a38(_DAT_801390d8);
  if ((DAT_800bf816 == '\0') || (DAT_800bf817 != '\a')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar7 = (int)((0x22de - (uint)_DAT_1f800160) * 0x10000) >> 0x10;
  iVar6 = (int)((0x26c5 - (uint)_DAT_1f800164) * 0x10000) >> 0x10;
  iVar5 = func_0x00078240(iVar7,(int)((-0x684 - (uint)_DAT_1f800162) * 0x10000) >> 0x10,iVar6);
  iVar2 = iVar5 + -700 >> 5;
  if (iVar5 + -700 < 0) {
    iVar2 = 0;
  }
  iVar2 = 0x60 - iVar2;
  if (iVar2 < 0xf) {
    iVar2 = 0xf;
  }
  uVar3 = func_0x00085690(iVar6,iVar7);
  uVar4 = func_0x00074a60(iVar2,uVar3);
  if (DAT_1f800137 == '\x01') {
    uVar4 = uVar4 >> 1 & 0x7fff7fff;
  }
  iVar5 = func_0x0007496c(_DAT_801390dc,uVar4 >> 0x10,uVar4 & 0xffff);
  if (iVar5 != 0) {
    func_0x00074a38(_DAT_801390dc);
    uVar3 = 0x1fff;
    if (DAT_1f800137 == '\x01') {
      uVar3 = 0x7fff;
    }
    func_0x00075d24(uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_801390dc = func_0x00074590(0x81,0,0xffffff81);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

