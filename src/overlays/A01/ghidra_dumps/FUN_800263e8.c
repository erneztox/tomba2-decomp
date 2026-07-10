// FUN_800263e8

void FUN_800263e8(void)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  
  pcVar3 = (&PTR_DAT_8009d414)[DAT_800bf870];
  cVar1 = *pcVar3;
  while (cVar1 != -1) {
    puVar2 = (undefined1 *)FUN_8007ad98();
    *puVar2 = 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    puVar2[2] = cVar1;
    cVar1 = *pcVar3;
  }
  return;
}

