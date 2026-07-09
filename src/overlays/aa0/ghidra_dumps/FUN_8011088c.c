// FUN_8011088c

/* WARNING: Removing unreachable block (ram,0x80119968) */
/* WARNING: Removing unreachable block (ram,0x8011999c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011088c(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      func_0x80042354(1,1);
      func_0x80040d68(param_1,0x80148680);
      *(undefined1 *)(param_1 + 0x70) = 1;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      FUN_80119a8c();
      return;
    }
    uVar2 = func_0x800782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
    *(undefined2 *)(param_1 + 0x56) = uVar2;
    FUN_80119a8c();
    return;
  }
  if (cVar1 != '\x01') {
    FUN_80119a8c();
    return;
  }
  if ((*(char *)(param_1 + 0x71) != -1) || (DAT_800bf80e == '\0')) {
    return;
  }
  if (DAT_800bf9de == '\0') {
    DAT_800bf9de = cVar1;
    *(undefined1 *)(param_1 + 0x5f) = 0;
    uVar4 = 0;
    if (DAT_800bf9e3 == 0) {
      iVar3 = func_0x8007778c(param_1);
      if (iVar3 != 0) {
        func_0x8004190c(param_1);
        func_0x800518fc(param_1);
      }
      return;
    }
    do {
      if ((((int)(uint)DAT_800bf9e3 >> (uVar4 & 0x1f) & 1U) != 0) &&
         (((int)(uint)DAT_800bf9e3 >> (uVar4 + 4 & 0x1f) & 1U) == 0)) {
        *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | (byte)(1 << (uVar4 & 0x1f));
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 3);
    if (*(char *)(param_1 + 0x5f) == '\0') {
      func_0x80040d68(param_1,0x801486f0);
    }
    else {
      DAT_800e7e85 = 0x26;
      DAT_800e7e86 = 0;
      if ((*(byte *)(param_1 + 0x5f) & 4) == 0) {
        func_0x80040d68(param_1,0x801486f8);
      }
      else {
        func_0x80040d68(param_1,0x80148708);
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x5f) = 0;
    uVar4 = 0;
    if (DAT_800bf9e3 == 0) {
      FUN_80119a40();
      return;
    }
    do {
      if ((((int)(uint)DAT_800bf9e3 >> (uVar4 & 0x1f) & 1U) != 0) &&
         (((int)(uint)DAT_800bf9e3 >> (uVar4 + 4 & 0x1f) & 1U) == 0)) {
        *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | (byte)(1 << (uVar4 & 0x1f));
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 3);
    if (*(char *)(param_1 + 0x5f) == '\0') {
      func_0x80040d68(param_1,0x80148718);
      *(undefined1 *)(param_1 + 5) = 4;
      *(undefined1 *)(param_1 + 6) = 0;
      return;
    }
    DAT_800e7e85 = 0x26;
    DAT_800e7e86 = 0;
    func_0x80040d68(param_1,0x80148720);
  }
  FUN_8013dd34();
  FUN_80122bdc();
  return;
}

