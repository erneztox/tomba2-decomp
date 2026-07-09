// FUN_80107d04

undefined4 FUN_80107d04(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar1 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
          >> 0x10;
  iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
          >> 0x10;
  uVar3 = func_0x80084080(iVar1 * iVar1 + iVar2 * iVar2);
  uVar4 = 0xffffffff;
  if ((int)(uVar3 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar1 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
    iVar2 = ((uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x86)) -
            (uint)*(ushort *)(param_1 + 0x84);
    if ((int)(short)*(ushort *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
        (int)(iVar1 + iVar2 & 0xffffU)) {
      uVar4 = FUN_80110dd4();
      return uVar4;
    }
    puVar5 = (undefined4 *)
             (((uint)*(ushort *)(param_1 + 0x80) + (uint)*(ushort *)(param_2 + 0x80)) - uVar3);
    if (iVar1 * 0x10000 < 0) {
                    /* WARNING: Could not recover jumptable at 0x80110db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)*puVar5)(iVar2,-iVar2);
      return uVar4;
    }
    iVar2 = (uint)*(ushort *)(param_1 + 0x84) +
            ((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84));
    uVar4 = 0;
    if (((iVar2 - iVar1) * 0x10000 <= (int)puVar5 * 0x10000) && (uVar4 = 2, 0 < iVar2 * 0x10000)) {
      uVar4 = 3;
    }
  }
  return uVar4;
}

