// FUN_0801cb10

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0801cb10(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  undefined1 auStack_30 [2];
  undefined2 local_2e;
  undefined2 local_2a;
  undefined2 local_26;
  
  if (DAT_800bf816 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = _DAT_800e7ed6 + 0x800 & 0xfff;
  iVar5 = func_0x00083f50(uVar4);
  iVar7 = iVar5 * 0x4b0 >> 0xc;
  iVar5 = func_0x00083e80(uVar4);
  _DAT_1f8000c0 = (undefined2)iVar7;
  iVar5 = iVar5 * -0x4b0 >> 0xc;
  _DAT_1f8000c4 = (undefined2)iVar5;
  _DAT_1f8000c2 = _DAT_800e7ee2;
  uVar2 = func_0x00125f7c(0x800e7eac,&DAT_1f8000c0);
  iVar7 = iVar7 << 0x10;
  *(undefined1 *)(param_1 + 0x65) = uVar2;
  iVar5 = iVar5 << 0x10;
  _DAT_1f8000c0 = (undefined2)((iVar7 >> 0x10) - (iVar7 >> 0x1f) >> 1);
  _DAT_1f8000c4 = (undefined2)((iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1);
  _DAT_1f8000c2 = _DAT_800e7ee2;
  bVar3 = func_0x00125f7c(0x800e7eac,&DAT_1f8000c0);
  bVar1 = *(byte *)(param_1 + 0x65);
  *(byte *)(param_1 + 0x65) = bVar1 | bVar3;
  if (bVar1 != 0 || bVar3 != 0) {
    _DAT_1f8000c0 = 0;
    _DAT_1f8000c4 = 0;
    _DAT_1f8000c2 = _DAT_800e7ee2;
    local_2e = _DAT_1f8000d2;
    local_2a = _DAT_800e7eb2;
    local_26 = _DAT_1f8000da;
    iVar5 = func_0x00125f7c(auStack_30);
    if ((iVar5 != 0) ||
       (iVar5 = func_0x00077768((int)(short)_DAT_800e7ed6,(int)*(short *)(param_1 + 0x52),0),
       iVar5 != 0)) {
      iVar5 = func_0x00077768((int)((_DAT_800e7ed6 + 0x400) * 0x10000) >> 0x10,
                              (int)*(short *)(param_1 + 0x52),0);
      if (iVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar6 = _DAT_800e7ed6 + 0x400 & 0xfff;
      iVar5 = func_0x00083f50(uVar6);
      iVar7 = func_0x00083e80(uVar6);
      _DAT_1f8000c0 = (undefined2)(iVar5 * 0x4b0 >> 0xc);
      _DAT_1f8000c4 = (undefined2)(iVar7 * -0x4b0 >> 0xc);
      _DAT_1f8000c2 = _DAT_800e7ee2;
      iVar5 = func_0x00125f7c(0x800e7eac,&DAT_1f8000c0);
      uVar4 = uVar6 - 0x800;
      if (iVar5 != 0) {
        iVar5 = func_0x00083f50(uVar6 + 0x800);
        iVar7 = func_0x00083e80(uVar6 + 0x800);
        _DAT_1f8000c0 = (undefined2)(iVar5 * 0x4b0 >> 0xc);
        _DAT_1f8000c4 = (undefined2)(iVar7 * -0x4b0 >> 0xc);
        _DAT_1f8000c2 = _DAT_800e7ee2;
        iVar5 = func_0x00125f7c(0x800e7eac);
        uVar4 = uVar6;
        if (iVar5 != 0) goto LAB_0801cdbc;
      }
      *(ushort *)(param_1 + 0x6a) = uVar4;
      *(undefined1 *)(param_1 + 0x65) = 2;
    }
  }
LAB_0801cdbc:
  return *(undefined1 *)(param_1 + 0x65);
}

