// FUN_08037080

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0803716c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08037080(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar3 = func_0x000519e0(param_1,0xf,_DAT_800ecfcc,0x8013fb64);
    if (iVar3 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
    func_0x00040cdc(param_1,0x80144404,0x800a3d18);
    return;
  }
  if (*(char *)(param_1 + 5) == '\0') {
    iVar3 = func_0x00116b48(param_1);
    if (iVar3 == 0) goto LAB_080372b8;
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      func_0x00042354(1,1);
      func_0x00040d68(param_1,0x80141c70);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      if (*(char *)(param_1 + 6) == '\0') {
        uVar2 = 0x1f;
        if (DAT_800bf8c8 == -1) {
          uVar2 = 0x20;
        }
        *(undefined1 *)(param_1 + 0x7a) = uVar2;
        func_0x00040d68(param_1,0x80141c80);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 6) != '\x01') {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
LAB_080372b8:
  if (*(char *)(param_1 + 1) != '\0') {
    func_0x000518fc(param_1);
  }
  *(undefined1 *)(param_1 + 0x2b) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

