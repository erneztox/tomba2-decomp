// FUN_0804509c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0804509c(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 0x40);
  iVar4 = (uint)*(byte *)(param_1 + 0x3d) << 4;
  if (bVar1 == 1) {
    iVar2 = func_0x00080840(_DAT_800bf4b4);
    uVar3 = 1;
    if (iVar2 != 1) {
      iVar2 = func_0x00080840(_DAT_800bf4b8);
      uVar3 = 2;
      if (iVar2 != 1) {
        iVar2 = func_0x00080840(_DAT_800bf4bc);
        uVar3 = 3;
        if (iVar2 != 1) {
          iVar2 = func_0x00080840(_DAT_800bf4c0);
          uVar3 = 4;
          if (iVar2 != 1) {
            DAT_800bf4db = DAT_800bf4db + '\x01';
            uVar3 = 0;
            if (DAT_800bf4db == -1) {
              uVar3 = 2;
            }
          }
        }
      }
    }
    if (uVar3 != 0) {
      if (uVar3 < 4) {
        if (uVar3 < 2) {
          if (uVar3 != 1) {
            halt_baddata();
          }
LAB_080451d0:
          *(undefined1 *)(param_1 + 0x42) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 0x42) = 0xfe;
        *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0x3d) + 0x48) = 0;
        *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0x3d) + 0x4e) = 0xff;
      }
      else if (uVar3 == 4) {
        if (*(char *)(param_1 + (uint)*(byte *)(param_1 + 0x3d) + 0x4a) != '\0') {
          func_0x00080840(_DAT_800bf4c4);
          func_0x00080840(_DAT_800bf4c8);
          func_0x00080840(_DAT_800bf4cc);
          func_0x00080840(_DAT_800bf4d0);
          func_0x0009bab0(iVar4);
          do {
            iVar4 = func_0x00080840(_DAT_800bf4c4);
            if (iVar4 == 1) {
              halt_baddata();
            }
            iVar4 = func_0x00080840(_DAT_800bf4c8);
            if (iVar4 == 1) {
              halt_baddata();
            }
            iVar4 = func_0x00080840(_DAT_800bf4cc);
            if (iVar4 == 1) {
              halt_baddata();
            }
            iVar4 = func_0x00080840(_DAT_800bf4d0);
          } while (iVar4 != 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_080451d0;
      }
      *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_1 + 0x42);
      *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0x3d) + 0x4a) =
           *(undefined1 *)(param_1 + 0x42);
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(char *)(param_1 + 0x3d) = '\x01' - *(char *)(param_1 + 0x3d);
    }
  }
  else if ((bVar1 < 2) && (bVar1 == 0)) {
    func_0x0009ba90(iVar4);
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(undefined1 *)(param_1 + 0x43) = 0;
    *(undefined1 *)(param_1 + 0x41) = 0xff;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined1 *)(param_1 + 0x41);
}

