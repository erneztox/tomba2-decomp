// FUN_08039118

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08039118(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077e7c(param_1);
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) == -1) {
        if (*(char *)(param_1 + 6) == '\0') {
          uVar2 = 0xb;
          if ((DAT_800bf8e3 == -1) && (uVar2 = 0xd, (_DAT_800bfe56 & 0x100) == 0)) {
            uVar2 = 0xc;
          }
          *(undefined1 *)(param_1 + 0x7a) = uVar2;
          func_0x00040d68(param_1,0x80146684);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          halt_baddata();
        }
        if (*(char *)(param_1 + 6) != '\x01') {
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 5) = 1;
      }
      goto LAB_08039270;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x2e) = 0x3332;
    *(undefined2 *)(param_1 + 0x32) = 0xde34;
    *(undefined1 *)(param_1 + 0x7b) = 0;
    *(undefined2 *)(param_1 + 0x36) = 0x1750;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  iVar3 = func_0x0007778c(param_1);
  if ((iVar3 != 0) && (*(char *)(param_1 + 0x2b) == '\x03')) {
    func_0x00042354(1,2);
    func_0x00040d68(param_1,0x800a3d90);
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_08039270:
  func_0x0004190c(param_1);
  return;
}

