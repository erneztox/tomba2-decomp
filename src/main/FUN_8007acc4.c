
void FUN_8007acc4(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_80100400;
  do {
    FUN_8009a420(puVar1,0,0x4c);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x4c;
  } while (iVar2 < 8);
  return;
}

