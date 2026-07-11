// FUN_08027d80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08027e9c) */
/* WARNING: Removing unreachable block (ram,0x08027ea4) */
/* WARNING: Removing unreachable block (ram,0x08027e8c) */
/* WARNING: Removing unreachable block (ram,0x08027ef8) */
/* WARNING: Removing unreachable block (ram,0x08027f08) */
/* WARNING: Removing unreachable block (ram,0x08027f10) */

undefined4 FUN_08027d80(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  undefined1 auStack_28 [2];
  short local_26;
  short local_22;
  short local_1e;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    uVar2 = *(ushort *)(param_1 + 0x72);
    *(ushort *)(param_1 + 0x72) = uVar2 + 1;
    if ((uVar2 & 1) == 0) {
      local_26 = 0x2e6e;
      local_22 = -0xc80;
      local_1e = 0x2d7e;
      iVar3 = func_0x0009a450();
      uVar6 = iVar3 + 2U & 3;
      while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
        uVar4 = func_0x0009a450();
        sVar5 = (short)(((uVar4 & 0xff) * (uVar4 & 0xff)) / 0x100);
        uVar4 = func_0x0009a450();
        if ((uVar4 & 1) != 0) {
          sVar5 = -sVar5;
        }
        local_26 = local_26 + sVar5;
        uVar4 = func_0x0009a450();
        sVar5 = (short)(((uVar4 & 0xff) * (uVar4 & 0xff)) / 0x100);
        uVar4 = func_0x0009a450();
        if ((uVar4 & 1) != 0) {
          sVar5 = -sVar5;
        }
        local_1e = local_1e + sVar5;
        uVar2 = func_0x0009a450();
        local_22 = local_22 - (uVar2 & 0x1f);
        func_0x0003116c(0,auStack_28,0xffffffe2);
      }
      if (*(short *)(param_1 + 0x72) < 0x18) {
        return 0;
      }
      DAT_800e807e = 0;
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)(*(int *)(param_1 + 0x38) + 4) != 0) {
      DAT_800e807e = 1;
      func_0x00074590(0x80,0xfffffff8,0x1e);
      DAT_800bfa03 = 3;
      *(undefined2 *)(param_1 + 0x72) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 2) {
      halt_baddata();
    }
    if (DAT_800bfa03 == '\x04') {
      return 1;
    }
  }
  return 0;
}

