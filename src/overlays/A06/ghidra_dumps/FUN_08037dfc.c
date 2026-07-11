// FUN_08037dfc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08037dfc(undefined1 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[6] == '\0') {
    if ((DAT_800e7e85 == '\x18') && (DAT_800e7e80 == '\x06')) {
      _DAT_800e7e84 = CONCAT12(2,_DAT_800e7e84);
    }
    func_0x00074590(0x1b,0,0);
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 6) = 0;
      *(undefined1 *)(iVar3 + 5) = 0;
      *(undefined1 *)(iVar3 + 4) = 3;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    func_0x0003116c(0x706,param_1 + 0x2c,0xffffffe2);
    *param_1 = 2;
    *(undefined2 *)(param_1 + 0x40) = 3;
    if ((_DAT_800e7ffe & 0x200) != 0) {
      DAT_800bf81e = 0;
      DAT_1f800137 = 2;
    }
    param_1[6] = param_1[6] + '\x01';
  }
  else if (param_1[6] == '\x01') {
    sVar1 = *(short *)(param_1 + 0x40);
    *(ushort *)(param_1 + 0x40) = sVar1 - 1U;
    uVar2 = _DAT_800e7e84;
    if ((int)((uint)(ushort)(sVar1 - 1U) << 0x10) < 0) {
      if ((((_DAT_800e7ffe & 0x200) != 0) && (_DAT_800e7fee != 0)) && (DAT_800e7e84 != '\x02')) {
        DAT_800bf81e = 0;
        _DAT_800e7e84 = CONCAT11(0x3a,DAT_800e7e84);
        DAT_800e7eef = 0;
        DAT_800e7e87 = SUB41(uVar2,3);
        _DAT_800e7e84 = (uint3)_DAT_800e7e84;
        _DAT_1f80023c = uVar2;
        func_0x0004ed94(0x44,0x41);
      }
      param_1[5] = 0;
      param_1[4] = 4;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

