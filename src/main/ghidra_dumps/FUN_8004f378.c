
void FUN_8004f378(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_80077d64();
  puVar3 = (undefined4 *)(param_1 + 0x1b0);
  FUN_8004f184(param_1,puVar3);
  uVar1 = *(short *)(param_1 + 10) - 1;
  *(ushort *)(param_1 + 10) = uVar1;
  iVar2 = 0;
  if (0 < (int)((uint)uVar1 << 0x10)) {
    do {
      iVar2 = iVar2 + 1;
      *puVar3 = puVar3[8];
      puVar3[1] = puVar3[9];
      puVar3[2] = puVar3[10];
      puVar3[3] = puVar3[0xb];
      puVar3[4] = puVar3[0xc];
      puVar3[5] = puVar3[0xd];
      puVar3[6] = puVar3[0xe];
      puVar3[7] = puVar3[0xf];
      puVar3 = puVar3 + 8;
    } while (iVar2 < *(short *)(param_1 + 10));
  }
  FUN_8004ee2c(puVar3);
  return;
}

