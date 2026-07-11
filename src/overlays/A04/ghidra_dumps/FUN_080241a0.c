// FUN_080241a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080241a0(undefined1 *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = func_0x00051b70(param_1,0xc,0x22);
  if (iVar3 == 0) {
    param_1[0xb] = 0xf;
    *(undefined2 *)(param_1 + 0x62) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) = 0x1000;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0x1000;
    *(undefined2 *)(param_1 + 100) = 0x1000;
    *(undefined2 *)(param_1 + 0x66) = 0x1000;
    *(undefined2 *)(param_1 + 0xbc) = 0x1000;
    *(undefined2 *)(param_1 + 0xba) = 0x1000;
    *(undefined2 *)(param_1 + 0xb8) = 0x1000;
    *(undefined2 *)(param_1 + 0x40) = 0x14;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x76) = 0;
    *(undefined2 *)(param_1 + 0x78) = 0;
    *(undefined2 *)(param_1 + 0x7a) = 0;
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[4] = param_1[4] + '\x01';
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3c) =
         *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38);
    func_0x0011d568(param_1);
    iVar3 = func_0x00048894(param_1);
    uVar1 = _DAT_1f8001a0;
    if (iVar3 != 0) {
      uVar2 = _DAT_1f8001a2 & 0xfff;
      *(undefined2 *)(param_1 + 0x32) = _DAT_1f8001a4;
      *(undefined2 *)(param_1 + 0x56) = uVar1;
      *(ushort *)(param_1 + 0x58) = uVar2;
    }
    func_0x000518fc(param_1);
  }
  return;
}

