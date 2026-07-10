// FUN_80042894

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80042894(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    if ((*(ushort *)(param_1 + 0x72) & 1) == 0) {
      FUN_8006e1c0(7);
    }
    else {
      DAT_800e806c = 7;
    }
    if ((-1 < *(short *)(param_1 + 100)) &&
       (DAT_1f800207 = *(undefined1 *)(param_1 + 100), DAT_800e7fe4 == '\0')) {
      DAT_800e7e85 = 0x21;
      DAT_800e7e86 = 0;
    }
    puVar3 = &local_28;
    if ((*(ushort *)(param_1 + 0x72) & 0x2000) == 0) {
      puVar3 = *(undefined2 **)(param_1 + 0x74);
    }
    else {
      puVar2 = *(undefined2 **)(param_1 + 0x74);
      local_28 = *puVar2;
      local_26 = puVar2[1];
      local_24 = puVar2[2];
      local_22 = *(undefined2 *)(param_1 + 0x2e);
      local_20 = *(undefined2 *)(param_1 + 0x32);
      local_1e = *(undefined2 *)(param_1 + 0x36);
    }
    if ((*(short *)(param_1 + 0x66) == 0) || ((*(ushort *)(param_1 + 0x72) & 3) < 2)) {
      FUN_8006cbd0(0x800e8008,puVar3);
      return 1;
    }
    FUN_8006cba8(&DAT_1f8000dc);
    FUN_8006cc1c(0x800e8008,puVar3,(int)*(short *)(param_1 + 0x66));
    if (((int)*(short *)(param_1 + 0x72) & 0x8000U) != 0) {
      _DAT_800e8084 = 0;
      _DAT_800e8082 = 0;
      _DAT_800e8080 = 0;
    }
    if ((*(ushort *)(param_1 + 0x72) & 0x4000) != 0) {
      _DAT_800e808a = 0;
      _DAT_800e8088 = 0;
      _DAT_800e8086 = 0;
    }
    if (*(short *)(param_1 + 0x68) != 0) {
      return 1;
    }
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 0x78) != '\x01') {
      return 0;
    }
    iVar1 = FUN_8006cdcc(0x800e8008);
    if (iVar1 == 1) {
      return 1;
    }
  }
  return 0;
}

