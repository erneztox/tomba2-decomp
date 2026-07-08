
void FUN_80069688(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + 0x5e) == '\0') {
    bVar1 = *(byte *)(param_1 + 2);
    puVar2 = &DAT_800a4a84;
  }
  else {
    bVar1 = *(byte *)(param_1 + 2);
    puVar2 = &DAT_800a4a8c;
  }
  *(ushort *)(param_1 + 0x76) = (ushort)(byte)puVar2[bVar1];
  return;
}

