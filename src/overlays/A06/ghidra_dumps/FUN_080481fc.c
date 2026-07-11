// FUN_080481fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x001412a8) */

int FUN_080481fc(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_16;
  
  local_1e = 0x332c;
  local_1a = 0xfad4;
  local_16 = 0x1a40;
  func_0x0003116c(8,auStack_20,0xffffffe0);
  if ((DAT_800bfa49 & 2) == 0) {
    uVar1 = func_0x0009a450();
    uVar1 = uVar1 & 0xf;
    if ((uVar1 == 0) || (uVar1 == 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (uVar1 != 2) {
      if (uVar1 == 3) {
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar1 = func_0x0009a450();
    uVar1 = uVar1 & 3;
    if (uVar1 == 0) {
      halt_baddata();
    }
    if (uVar1 == 1) {
      halt_baddata();
    }
    if (uVar1 != 2) {
      return 0;
    }
  }
  if (3 < DAT_800bfa4a) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = func_0x00072ddc(param_1,0,5,3);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x80141480;
    *(undefined1 *)(iVar2 + 3) = 3;
    *(undefined2 *)(iVar2 + 0x2e) = local_1e;
    *(undefined2 *)(iVar2 + 0x32) = local_1a;
    *(undefined2 *)(iVar2 + 0x36) = local_16;
  }
  return iVar2;
}

