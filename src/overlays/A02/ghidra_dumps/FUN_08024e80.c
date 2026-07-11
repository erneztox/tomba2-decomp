// FUN_08024e80

/* WARNING: Control flow encountered bad instruction data */

void FUN_08024e80(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined1 *puVar3;
  
  if (*(char *)(param_1 + 0x5e) == -1) {
    return;
  }
  if (*(char *)(param_1 + 0x2b) != '\x03') {
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 == 1) {
      if (*(char *)(param_1 + 0x79) != '\x01') {
        return;
      }
      func_0x00041768(param_1,0x22,8);
      uVar2 = func_0x0009a450();
      *(ushort *)(param_1 + 0x40) = (uVar2 & 0xff) + 0x1e;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(short *)(*(int *)(param_1 + 0x38) + 4) == 0) {
          return;
        }
        puVar3 = (undefined1 *)func_0x00072ddc(param_1,0,2,0x20);
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = 1;
          puVar3[3] = 0;
          *(undefined4 *)(puVar3 + 0x1c) = 0x80123470;
        }
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
    }
    else if (bVar1 == 2) {
      uVar2 = *(short *)(param_1 + 0x40) - 1;
      *(ushort *)(param_1 + 0x40) = uVar2;
      if (-1 < (int)((uint)uVar2 << 0x10)) {
        return;
      }
      func_0x00041768(param_1,0x21,8);
      *(undefined1 *)(param_1 + 6) = 0;
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00041768(param_1,0x22,8);
  func_0x00040d68(param_1,0x800a3cc0);
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined2 *)(param_1 + 0x40) = 1;
  *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

