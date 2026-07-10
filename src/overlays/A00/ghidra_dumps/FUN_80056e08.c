// FUN_80056e08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80056e08(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  
  if ((_DAT_800ecf54 & _DAT_1f800172) == 0) {
    if (*(byte *)(param_1 + 0x167) < 0xb) {
      if ((*(ushort *)(param_1 + 0x17e) & 0x180) == 0) {
        bVar1 = *(byte *)(param_1 + 0x167);
        puVar3 = &DAT_800a4588;
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x167);
        puVar3 = &DAT_800a45a0;
      }
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(puVar3 + (uint)bVar1 * 2)
      ;
      *(undefined1 *)(param_1 + 0x167) = 0x10;
      if (0 < *(short *)(param_1 + 0x4a)) {
        *(undefined2 *)(param_1 + 0x4a) = 0;
      }
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x167) + '\x01';
    *(char *)(param_1 + 0x167) = cVar2;
    if (cVar2 == -1) {
      *(undefined1 *)(param_1 + 0x167) = 0xfe;
      return;
    }
  }
  return;
}

