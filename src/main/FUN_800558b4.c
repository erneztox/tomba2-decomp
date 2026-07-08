
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800558b4(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  if ((*(short *)(param_1 + 0x16e) != 0) && (DAT_1f800137 == '\0')) {
    bVar1 = *(byte *)(param_1 + 0x14a);
    if ((bVar1 & 2) != 0) {
      if ((bVar1 & 4) != 0) {
        if ((_DAT_1f80018e & 0x10) == 0) {
          if ((_DAT_1f80018e & 0x4000) == 0) {
            return 0;
          }
          if ((_DAT_1f80018e & 0x100) == 0) {
            if ((_DAT_1f80018e & 0xc00) == 0) {
              return 0;
            }
            _DAT_1f800194 = _DAT_1f80018c;
            cVar2 = *(char *)(param_1 + 5);
            cVar3 = '\n';
          }
          else {
            _DAT_1f800194 = _DAT_1f80018c;
            cVar2 = *(char *)(param_1 + 5);
            cVar3 = '\n';
          }
        }
        else {
          cVar2 = *(char *)(param_1 + 5);
          cVar3 = '\f';
        }
LAB_80055914:
        if (cVar2 != cVar3) {
          *(char *)(param_1 + 5) = cVar3;
          *(undefined1 *)(param_1 + 6) = 0;
          *(undefined1 *)(param_1 + 7) = 0;
        }
        return 1;
      }
      if ((bVar1 & 8) != 0) {
        if ((_DAT_1f80018e & 0x4000) == 0) {
          if ((_DAT_1f80018e & 0x20) != 0) {
            if (*(char *)(param_1 + 5) != '\r') {
              *(undefined1 *)(param_1 + 5) = 0xd;
              *(undefined1 *)(param_1 + 6) = 0;
              *(undefined1 *)(param_1 + 7) = 0;
            }
            return 2;
          }
        }
        else if ((_DAT_1f80018e & 0x200) != 0) {
          _DAT_1f800194 = _DAT_1f80018c;
          cVar2 = *(char *)(param_1 + 5);
          cVar3 = '\n';
          goto LAB_80055914;
        }
      }
      return 0;
    }
  }
  return 0;
}

