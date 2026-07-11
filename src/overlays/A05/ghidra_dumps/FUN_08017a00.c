// FUN_08017a00

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08017a00(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x29) != '\0') {
    *(undefined1 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x00054d14(param_1,2,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar6 = *(int *)(param_1 + 0x158);
  if (-1 < *(short *)(param_1 + 0x17e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = *(ushort *)(param_1 + 0x56) + 0x800;
  iVar5 = iVar2 * 0x10000 >> 0x10;
  iVar3 = func_0x00083f50(iVar5);
  *(short *)(param_1 + 0x2e) =
       *(short *)(iVar6 + 0x2e) + (short)(iVar3 * (*(short *)(iVar6 + 0x80) + 0x20) >> 0xc);
  iVar3 = func_0x00083e80(iVar5);
  *(short *)(param_1 + 0x36) =
       *(short *)(iVar6 + 0x36) - (short)(iVar3 * (*(short *)(iVar6 + 0x80) + 0x20) >> 0xc);
  iVar3 = param_2;
  if (*(char *)(param_1 + 0x165) != '\0') {
    iVar3 = param_2 + 3;
  }
  if (param_2 == 0) {
    sVar1 = *(short *)(param_1 + 0x156) + (short)*(char *)(iVar3 + -0x7ff5b900);
    *(short *)(param_1 + 0x156) = sVar1;
    if (((int)sVar1 <= 0x14 - *(short *)(iVar6 + 0x84)) && ((*(byte *)(iVar6 + 0x29) & 1) == 0)) {
      *(short *)(param_1 + 0x156) = 0x14 - *(short *)(iVar6 + 0x84);
    }
    *(short *)(param_1 + 0x32) = *(short *)(iVar6 + 0x32) + *(short *)(param_1 + 0x156);
    func_0x000541f4(param_1,1);
  }
  else if (param_2 == 1) {
    sVar1 = *(short *)(param_1 + 0x156) + (short)*(char *)(iVar3 + -0x7ff5b900);
    *(short *)(param_1 + 0x156) = sVar1;
    *(short *)(param_1 + 0x32) = *(short *)(iVar6 + 0x32) + sVar1;
    func_0x00024af0(param_1);
    iVar3 = func_0x0010f034(param_1);
    iVar6 = _DAT_1f800080;
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x164) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      func_0x00056d44(param_1,0);
      return 0;
    }
    iVar2 = (int)(short)iVar2;
    iVar3 = func_0x00083f50(iVar2);
    *(short *)(param_1 + 0x2e) =
         *(short *)(iVar6 + 0x2e) + (short)(iVar3 * (*(short *)(iVar6 + 0x80) + 0x20) >> 0xc);
    iVar3 = func_0x00083e80(iVar2);
    *(short *)(param_1 + 0x36) =
         *(short *)(iVar6 + 0x36) - (short)(iVar3 * (*(short *)(iVar6 + 0x80) + 0x20) >> 0xc);
    sVar1 = *(short *)(iVar6 + 0x32);
    *(int *)(param_1 + 0x158) = iVar6;
    *(short *)(param_1 + 0x32) = sVar1 + *(short *)(param_1 + 0x156);
    uVar4 = func_0x0005444c(param_1);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x164) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      func_0x00054d14(param_1,2,3);
      halt_baddata();
    }
    if ((*(byte *)(param_1 + 0x15c) & 2) == 0) {
      halt_baddata();
    }
    if (*(char *)(param_1 + 6) != '\x02') {
      func_0x00074590(4,0,0);
      *(undefined1 *)(param_1 + 6) = 2;
    }
    func_0x00054d14(param_1,0x18,3);
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

