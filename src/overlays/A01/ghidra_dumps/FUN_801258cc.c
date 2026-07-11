// FUN_801258cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801258cc(int param_1)

{
  byte bVar1;
  undefined4 in_zero;
  undefined4 in_at;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  
  pbVar3 = *(byte **)(param_1 + 100);
  uVar4 = *(uint *)(param_1 + 0x60);
  if (pbVar3 != (byte *)0x0) {
    bVar1 = *pbVar3;
    if ((bVar1 & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte **)(param_1 + 0x68) = pbVar3 + 1;
    local_20 = CONCAT22(*(undefined2 *)(param_1 + 0x32),*(undefined2 *)(param_1 + 0x2e));
    local_1c = CONCAT22(local_1c._2_2_,*(undefined2 *)(param_1 + 0x36));
    setCopReg(2,in_zero,local_20);
    setCopReg(2,in_at,local_1c);
    func_0x800329e0(6);
    iVar2 = func_0x800317cc(0);
    if (iVar2 == 0) {
      _DAT_1f800088 = _DAT_1f800084 * (uVar4 >> 0x10) >> 8;
      _DAT_1f800084 = _DAT_1f800084 * (uVar4 & 0xffff) >> 8;
      func_0x800328ec(*(undefined4 *)((uint)bVar1 * 4 + *(int *)(param_1 + 0x6c)));
    }
  }
  return;
}

