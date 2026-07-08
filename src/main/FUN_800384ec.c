
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800384ec(int param_1)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  
  bVar4 = 0;
  iVar2 = 1;
  pcVar1 = &DAT_800a33d4;
  _DAT_800e7e6c = -0x7ff36198;
  _DAT_800bf53c = -0x7ff22198;
  do {
    if (*pcVar1 == '\0') {
      *(char *)(param_1 + 10) = *(char *)(param_1 + 10) + '\x01';
      *(char *)((uint)(byte)pcVar1[2] * 3 + _DAT_800e7e6c + 1) = (char)iVar2;
      *(undefined1 *)((uint)(byte)pcVar1[2] * 3 + _DAT_800e7e6c + 2) =
           *(undefined1 *)(iVar2 + -0x7ff4074c);
      *(char *)((uint)(byte)pcVar1[2] * 3 + _DAT_800e7e6c) = pcVar1[2];
      if ((*(char *)(iVar2 + -0x7ff4074c) != '\0') && (bVar4 < (byte)pcVar1[2])) {
        bVar4 = pcVar1[2];
      }
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0xc;
  } while (iVar2 < 0x8b);
  bVar3 = 0;
  iVar2 = 1;
  pcVar1 = &DAT_800a33d4;
  do {
    if (*pcVar1 != '\0') {
      *(char *)(param_1 + 0xb) = *(char *)(param_1 + 0xb) + '\x01';
      *(char *)((uint)(byte)pcVar1[2] * 3 + _DAT_800bf53c + 1) = (char)iVar2;
      *(undefined1 *)((uint)(byte)pcVar1[2] * 3 + _DAT_800bf53c + 2) =
           *(undefined1 *)(iVar2 + -0x7ff4074c);
      *(char *)((uint)(byte)pcVar1[2] * 3 + _DAT_800bf53c) = pcVar1[2];
      if ((*(char *)(iVar2 + -0x7ff4074c) != '\0') && (bVar3 < (byte)pcVar1[2])) {
        bVar3 = pcVar1[2];
      }
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0xc;
  } while (iVar2 < 0x8b);
  if (bVar3 < bVar4) {
    bVar3 = bVar4;
  }
  *(byte *)(param_1 + 0x21) = bVar3 + 1;
  return;
}

