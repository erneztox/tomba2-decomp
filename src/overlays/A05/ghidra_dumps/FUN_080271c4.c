// FUN_080271c4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080271c4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if ((DAT_800bf9ba & 1) != 0) {
        if ((DAT_800bf9ba & 2) == 0) {
          iVar3 = func_0x00112cd8(param_1,1);
          *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
          *(undefined2 *)(iVar3 + 0x32) = *(undefined2 *)(param_1 + 0x32);
          *(undefined2 *)(iVar3 + 0x36) = *(undefined2 *)(param_1 + 0x36);
        }
        *(undefined1 *)(param_1 + 4) = 3;
        halt_baddata();
      }
      uVar2 = func_0x00112cd8(param_1,0);
      *(undefined4 *)(param_1 + 0x10) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    if ((*(byte *)(param_1 + 5) < 4) && (1 < *(byte *)(param_1 + 5))) {
      *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x200;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x20;
      func_0x0004766c(param_1);
      iVar3 = func_0x00049250(param_1,0,
                              (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                    (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
      if (iVar3 != 0) {
        *(char *)(*(int *)(param_1 + 0x10) + 0x5e) =
             *(char *)(*(int *)(param_1 + 0x10) + 0x5e) + '\x01';
        func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x800,0x18);
        *(undefined1 *)(param_1 + 4) = 3;
        DAT_800bf9ba = DAT_800bf9ba | 1;
        func_0x00074590(0x83,8,0);
      }
    }
  }
  func_0x0007778c(param_1);
  func_0x000517f8(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

