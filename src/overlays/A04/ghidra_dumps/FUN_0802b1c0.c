// FUN_0802b1c0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802b1c0(byte *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  
  iVar4 = func_0x000519e0(param_1,0x10,_DAT_800ecfe8,0x80143dc0);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfec;
    iVar4 = func_0x0004766c(param_1);
    if (iVar4 == 0) {
      param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00049674(param_1);
    uVar3 = _DAT_1f8001a2;
    uVar2 = _DAT_1f8001a0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    *(undefined2 *)(param_1 + 0x56) = uVar2;
    *(undefined2 *)(param_1 + 0x58) = uVar3;
    *(undefined2 *)(param_1 + 0x60) = uVar2;
    param_1[100] = 0;
    param_1[0x62] = 0;
    param_1[99] = 0;
    *param_1 = 1;
    param_1[0x5f] = 0;
    param_1[0x1b] = param_1[0x1b] & 0xbf;
    bVar1 = param_1[3];
    if (bVar1 == 0x80) {
      if (param_1[0x46] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) | 1;
      param_1[0x70] = 0x46;
      *param_1 = *param_1 | 8;
      func_0x00077e20(param_1,0x20,0x30,0xff);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((byte)(bVar1 + 0x7f) < 2) {
      if (bVar1 == 0x81) {
        *param_1 = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_1 = 1;
      if (param_1[0x46] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfffe;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00127e68(param_1);
    param_1[0x70] = 0;
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0x66] = param_1[3];
    param_1[0x46] = 0;
    func_0x00077c40(param_1,0x80144f14,0);
    param_1[0xbc] = 0;
    param_1[0xbd] = 0x10;
    param_1[0xba] = 0;
    param_1[0xbb] = 0x10;
    param_1[0xb8] = 0;
    param_1[0xb9] = 0x10;
    param_1[0x80] = 0x38;
    param_1[0x81] = 0;
    param_1[0x82] = 0x70;
    param_1[0x83] = 0;
    param_1[0x84] = 0x8c;
    param_1[0x85] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x86] = 0xf0;
    param_1[0x87] = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x40);
    if ((_DAT_800bfe56 & 0x10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x40) = 0;
    }
  }
  return;
}

