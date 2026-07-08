
void FUN_8009c1fc(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)&DAT_0000df80;
  puVar2 = &DAT_8009c060;
  do {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (puVar2 != &DAT_8009c0d0);
  return;
}

