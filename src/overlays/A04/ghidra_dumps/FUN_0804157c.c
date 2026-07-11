// FUN_0804157c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0804157c(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x2b) == '\x03') {
    func_0x00042354(1,1);
    if ((*(byte *)(param_1 + 0x5e) & 1) != 0) {
      func_0x00040d68(param_1,0x800a3d70);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00040d68(param_1,0x80142478);
    DAT_800bfa51 = '\x02';
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (DAT_800bfa51 == '\x01') {
    func_0x00040d68(param_1,0x80142478);
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 5) = 1;
    DAT_800bfa51 = '\x02';
  }
  else {
    if (2 < *(byte *)(param_1 + 0x5e)) {
      return;
    }
    if (*(char *)(param_1 + 6) == '\0') {
      uVar2 = *(short *)(param_1 + 0x40) - 1;
      *(ushort *)(param_1 + 0x40) = uVar2;
      if (-1 < (int)((uint)uVar2 << 0x10)) {
        return;
      }
      uVar3 = func_0x0009a450(param_1);
      uVar1 = 0x40;
      if ((uVar3 & 1) == 0) {
        uVar1 = 0xffc0;
      }
      *(undefined2 *)(param_1 + 0x50) = uVar1;
      uVar2 = func_0x0009a450();
      *(ushort *)(param_1 + 0x40) = (uVar2 & 0xf) + 6;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    else if (*(char *)(param_1 + 6) == '\x01') {
      *(ushort *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + *(short *)(param_1 + 0x50) & 0xfff;
      uVar2 = *(short *)(param_1 + 0x40) - 1;
      *(ushort *)(param_1 + 0x40) = uVar2;
      if (-1 < (int)((uint)uVar2 << 0x10)) {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 0;
      uVar2 = func_0x0009a450(param_1);
      *(ushort *)(param_1 + 0x40) = (uVar2 & 0x3f) + 0x1e;
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

