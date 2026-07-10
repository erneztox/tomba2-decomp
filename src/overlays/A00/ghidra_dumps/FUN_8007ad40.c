// FUN_8007ad40

void FUN_8007ad40(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = &DAT_800ec188;
  FUN_8009a420(&DAT_800ec188,0,0xa00);
  iVar1 = 0;
  do {
    puVar2[7] = (byte)iVar1 & 7;
    *(undefined2 *)(puVar2 + 0xc) = 0x1000;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x40;
  } while (iVar1 < 0x28);
  return;
}

